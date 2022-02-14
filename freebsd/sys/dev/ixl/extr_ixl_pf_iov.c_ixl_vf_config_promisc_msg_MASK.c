
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_promisc_info {scalar_t__ vsi_id; int flags; } ;
struct TYPE_3__ {scalar_t__ vsi_num; int seid; } ;
struct ixl_vf {int vf_flags; TYPE_1__ vsi; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,int,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,int,int *,int ) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_5 (struct i40e_hw*,int) ;
 int FUNC_6 (struct ixl_pf*,struct ixl_vf*,int ) ;

__attribute__((used)) static void
FUNC_7(struct ixl_pf *VAR_7, struct ixl_vf *VAR_8,
    void *VAR_9, uint16_t VAR_10)
{
 struct virtchnl_promisc_info *VAR_11;
 struct i40e_hw *VAR_12 = &VAR_7->hw;
 enum i40e_status_code VAR_13;

 if (VAR_10 != sizeof(*VAR_11)) {
  FUNC_4(VAR_7, VAR_8,
      VAR_6, VAR_2);
  return;
 }

 if (!(VAR_8->vf_flags & VAR_5)) {



  FUNC_6(VAR_7, VAR_8,
      VAR_6);
  return;
 }

 VAR_11 = VAR_9;
 if (VAR_11->vsi_id != VAR_8->vsi.vsi_num) {
  FUNC_4(VAR_7, VAR_8,
      VAR_6, VAR_2);
  return;
 }

 VAR_13 = FUNC_2(VAR_12, VAR_8->vsi.seid,
     VAR_11->flags & VAR_1, ((void*)0), VAR_4);
 if (VAR_13 != VAR_3) {
  FUNC_0(VAR_7->dev, "i40e_aq_set_vsi_unicast_promiscuous (seid %d) failed: status %s,"
      " error %s\n", VAR_8->vsi.seid, FUNC_5(VAR_12, VAR_13),
      FUNC_3(VAR_12, VAR_12->aq.asq_last_status));
  FUNC_4(VAR_7, VAR_8,
      VAR_6, VAR_2);
  return;
 }

 VAR_13 = FUNC_1(VAR_12, VAR_8->vsi.seid,
     VAR_11->flags & VAR_0, ((void*)0));
 if (VAR_13 != VAR_3) {
  FUNC_0(VAR_7->dev, "i40e_aq_set_vsi_multicast_promiscuous (seid %d) failed: status %s,"
      " error %s\n", VAR_8->vsi.seid, FUNC_5(VAR_12, VAR_13),
      FUNC_3(VAR_12, VAR_12->aq.asq_last_status));
  FUNC_4(VAR_7, VAR_8,
      VAR_6, VAR_2);
  return;
 }

 FUNC_6(VAR_7, VAR_8, VAR_6);
}
