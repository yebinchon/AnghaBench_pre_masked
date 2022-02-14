
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct ixl_vsi {int seid; int uplink_seid; } ;
struct ixl_vf {int dummy; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct ixl_pf {int num_vfs; TYPE_2__* vfs; scalar_t__ enable_vf_loopback; int veb_seid; struct ixl_vsi vsi; struct i40e_hw hw; } ;
typedef int nvlist_t ;
typedef int if_ctx_t ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;
struct TYPE_5__ {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,int,int ,int *,int ,int *) ;
 int FUNC_3 (struct i40e_hw*,int) ;
 int FUNC_4 (struct i40e_hw*,int) ;
 int FUNC_5 (int ) ;
 struct ixl_pf* FUNC_6 (int ) ;
 int FUNC_7 (struct ixl_pf*,int) ;
 int FUNC_8 (struct ixl_vsi*) ;
 int FUNC_9 (struct ixl_vsi*) ;
 TYPE_2__* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;

int
FUNC_12(if_ctx_t VAR_6, uint16_t VAR_7, const nvlist_t *VAR_8)
{
 struct ixl_pf *VAR_9 = FUNC_6(VAR_6);
 device_t VAR_10 = FUNC_5(VAR_6);
 struct i40e_hw *VAR_11;
 struct ixl_vsi *VAR_12;
 enum i40e_status_code VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = &VAR_9->hw;
 VAR_12 = &VAR_9->vsi;

 VAR_9->vfs = FUNC_10(sizeof(struct ixl_vf) * VAR_7, VAR_3, VAR_4 |
     VAR_5);
 if (VAR_9->vfs == ((void*)0)) {
  VAR_15 = VAR_0;
  goto fail;
 }

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  FUNC_11(&VAR_9->vfs[VAR_14].ctx);






 VAR_13 = FUNC_2(VAR_11, VAR_12->uplink_seid, VAR_12->seid,
     1, VAR_1, &VAR_9->veb_seid, VAR_1, ((void*)0));
 if (VAR_13 != VAR_2) {
  VAR_15 = VAR_11->aq.asq_last_status;
  FUNC_0(VAR_10, "i40e_aq_add_veb failed; status %s error %s",
      FUNC_4(VAR_11, VAR_13), FUNC_3(VAR_11, VAR_15));
  goto fail;
 }
 if (VAR_9->enable_vf_loopback)
  FUNC_7(VAR_9, 1);





 FUNC_8(VAR_12);
 FUNC_9(VAR_12);

 VAR_9->num_vfs = VAR_7;
 return (0);

fail:
 FUNC_1(VAR_9->vfs, VAR_3);
 VAR_9->vfs = ((void*)0);
 return (VAR_15);
}
