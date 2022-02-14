
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtchnl_vsi_resource {scalar_t__ vsi_type; int default_mac_addr; } ;
struct virtchnl_vf_resource {int num_vsis; int vf_cap_flags; int max_vectors; int num_queue_pairs; struct virtchnl_vsi_resource* vsi_res; } ;
struct TYPE_4__ {int addr; int perm_addr; } ;
struct TYPE_3__ {int num_vsis; int dcb; int iwarp; int num_msix_vectors_vf; int num_tx_qp; int num_rx_qp; } ;
struct i40e_hw {TYPE_2__ mac; TYPE_1__ dev_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct i40e_hw *VAR_5,
        struct virtchnl_vf_resource *VAR_6)
{
 struct virtchnl_vsi_resource *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_6->vsi_res[0];

 VAR_5->dev_caps.num_vsis = VAR_6->num_vsis;
 VAR_5->dev_caps.num_rx_qp = VAR_6->num_queue_pairs;
 VAR_5->dev_caps.num_tx_qp = VAR_6->num_queue_pairs;
 VAR_5->dev_caps.num_msix_vectors_vf = VAR_6->max_vectors;
 VAR_5->dev_caps.dcb = VAR_6->vf_cap_flags &
      VAR_3;
 VAR_5->dev_caps.iwarp = (VAR_6->vf_cap_flags &
         VAR_2) ? 1 : 0;
 for (VAR_8 = 0; VAR_8 < VAR_6->num_vsis; VAR_8++) {
  if (VAR_7->vsi_type == VAR_4) {
   FUNC_0(VAR_5->mac.perm_addr,
        VAR_7->default_mac_addr,
        VAR_0,
        VAR_1);
   FUNC_0(VAR_5->mac.addr, VAR_7->default_mac_addr,
        VAR_0,
        VAR_1);
  }
  VAR_7++;
 }
}
