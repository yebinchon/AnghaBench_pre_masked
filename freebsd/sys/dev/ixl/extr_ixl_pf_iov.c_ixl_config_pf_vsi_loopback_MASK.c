
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixl_vsi {int seid; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; int pf_id; } ;
struct ixl_pf {scalar_t__ veb_seid; struct ixl_vsi vsi; int dev; struct i40e_hw hw; } ;
struct TYPE_3__ {void* switch_id; void* valid_sections; } ;
struct i40e_vsi_context {scalar_t__ uplink_seid; TYPE_1__ info; int connection_type; int pf_num; int seid; } ;
typedef int device_t ;
typedef int ctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*,struct i40e_vsi_context*,int *) ;
 int FUNC_3 (struct i40e_vsi_context*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ixl_pf *VAR_3, bool VAR_4)
{
 struct i40e_hw *VAR_5 = &VAR_3->hw;
 device_t VAR_6 = VAR_3->dev;
 struct ixl_vsi *VAR_7 = &VAR_3->vsi;
 struct i40e_vsi_context VAR_8;
 int VAR_9;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.seid = VAR_7->seid;
 if (VAR_3->veb_seid != 0)
  VAR_8.uplink_seid = VAR_3->veb_seid;
 VAR_8.pf_num = VAR_5->pf_id;
 VAR_8.connection_type = VAR_2;

 VAR_8.info.valid_sections = FUNC_1(VAR_0);
 VAR_8.info.switch_id = (VAR_4) ?
     FUNC_1(VAR_1) : 0;


 VAR_9 = FUNC_2(VAR_5, &VAR_8, ((void*)0));
 if (VAR_9) {
  FUNC_0(VAR_6, "i40e_aq_update_vsi_params() failed, error %d,"
      " aq_error %d\n", VAR_9, VAR_5->aq.asq_last_status);
 }

 return (VAR_9);
}
