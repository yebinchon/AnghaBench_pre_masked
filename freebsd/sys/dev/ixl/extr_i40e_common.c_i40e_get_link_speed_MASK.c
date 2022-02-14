
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_speed; } ;
struct TYPE_4__ {TYPE_1__ link_info; scalar_t__ get_link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int ,int *,int *) ;

enum i40e_aq_link_speed FUNC_1(struct i40e_hw *VAR_3)
{
 enum i40e_aq_link_speed VAR_4 = VAR_0;
 enum i40e_status_code VAR_5 = VAR_1;

 if (VAR_3->phy.get_link_info) {
  VAR_5 = FUNC_0(VAR_3, VAR_2, ((void*)0), ((void*)0));

  if (VAR_5 != VAR_1)
   goto i40e_link_speed_exit;
 }

 VAR_4 = VAR_3->phy.link_info.link_speed;

i40e_link_speed_exit:
 return VAR_4;
}
