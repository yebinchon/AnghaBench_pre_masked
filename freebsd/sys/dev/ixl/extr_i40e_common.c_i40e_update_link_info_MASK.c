
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int link_info; int req_fec_info; int module_type; } ;
struct TYPE_4__ {int link_info; } ;
struct TYPE_6__ {TYPE_2__ link_info; TYPE_1__ link_info_old; } ;
struct i40e_hw {TYPE_3__ phy; } ;
struct i40e_aq_get_phy_abilities_resp {int fec_cfg_curr_mod_ext_info; int module_type; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i40e_hw*,int ,int *,int *) ;
 int FUNC_1 (struct i40e_hw*,int ,int,struct i40e_aq_get_phy_abilities_resp*,int *) ;
 int FUNC_2 (int ,int *,int,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_8)
{
 struct i40e_aq_get_phy_abilities_resp VAR_9;
 enum i40e_status_code VAR_10 = VAR_6;

 VAR_10 = FUNC_0(VAR_8, VAR_7, ((void*)0), ((void*)0));
 if (VAR_10)
  return VAR_10;


 if ((VAR_8->phy.link_info.link_info & VAR_2) &&
     ((VAR_8->phy.link_info.link_info & VAR_1) ||
      !(VAR_8->phy.link_info_old.link_info & VAR_1))) {
  VAR_10 = FUNC_1(VAR_8, VAR_0, 0,
            &VAR_9, ((void*)0));
  if (VAR_10)
   return VAR_10;

  VAR_8->phy.link_info.req_fec_info =
   VAR_9.fec_cfg_curr_mod_ext_info &
   (VAR_3 | VAR_4);

  FUNC_2(VAR_8->phy.link_info.module_type, &VAR_9.module_type,
   sizeof(VAR_8->phy.link_info.module_type), VAR_5);
 }
 return VAR_10;
}
