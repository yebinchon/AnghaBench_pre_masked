
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ num_rx_queues; scalar_t__ num_tx_queues; } ;
struct ixl_vf {TYPE_2__ vsi; int vf_num; } ;
struct TYPE_3__ {int num_msix_vectors_vf; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*,int,int ) ;
 int FUNC_3 (struct i40e_hw*,int,int ) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ) ;
 int FUNC_6 (struct ixl_pf*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(struct ixl_pf *VAR_0, struct ixl_vf *VAR_1)
{
 struct i40e_hw *VAR_2;
 uint32_t VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = &VAR_0->hw;

 FUNC_6(VAR_0, &VAR_1->vsi);


 FUNC_4(VAR_2, FUNC_0(VAR_1->vf_num));

 for (VAR_5 = 1; VAR_5 < VAR_2->func_caps.num_msix_vectors_vf; VAR_5++) {
  VAR_3 = FUNC_2(VAR_2, VAR_5 , VAR_1->vf_num);
  FUNC_4(VAR_2, VAR_3);
 }


 FUNC_5(VAR_2, FUNC_1(VAR_1->vf_num));

 for (VAR_5 = 1; VAR_5 < VAR_2->func_caps.num_msix_vectors_vf; VAR_5++) {
  VAR_4 = FUNC_3(VAR_2, VAR_5, VAR_1->vf_num);
  FUNC_5(VAR_2, VAR_4);
 }

 VAR_1->vsi.num_tx_queues = 0;
 VAR_1->vsi.num_rx_queues = 0;
}
