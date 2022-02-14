
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_info; } ;
struct TYPE_4__ {TYPE_1__ link_info; scalar_t__ get_link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int ,char*,int) ;
 int FUNC_1 (struct i40e_hw*) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_3, bool *VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_2;

 if (VAR_3->phy.get_link_info) {
  VAR_5 = FUNC_1(VAR_3);

  if (VAR_5 != VAR_2)
   FUNC_0(VAR_3, VAR_1, "get link failed: status %d\n",
       VAR_5);
 }

 *VAR_4 = VAR_3->phy.link_info.link_info & VAR_0;

 return VAR_5;
}
