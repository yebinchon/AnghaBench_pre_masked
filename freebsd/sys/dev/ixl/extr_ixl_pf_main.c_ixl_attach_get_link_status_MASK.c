
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int get_link_info; } ;
struct TYPE_3__ {int fw_maj_ver; int fw_min_ver; int asq_last_status; } ;
struct i40e_hw {TYPE_2__ phy; TYPE_1__ aq; } ;
struct ixl_pf {int link_up; struct i40e_hw hw; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,int *) ;
 int FUNC_2 (struct i40e_hw*,int *) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct ixl_pf *VAR_1)
{
 struct i40e_hw *VAR_2 = &VAR_1->hw;
 device_t VAR_3 = VAR_1->dev;
 int VAR_4 = 0;

 if (((VAR_2->aq.fw_maj_ver == 4) && (VAR_2->aq.fw_min_ver < 33)) ||
     (VAR_2->aq.fw_maj_ver < 4)) {
  FUNC_3(75);
  VAR_4 = FUNC_1(VAR_2, VAR_0, ((void*)0));
  if (VAR_4) {
   FUNC_0(VAR_3, "link restart failed, aq_err=%d\n",
       VAR_1->hw.aq.asq_last_status);
   return VAR_4;
  }
 }


 VAR_2->phy.get_link_info = VAR_0;
 FUNC_2(VAR_2, &VAR_1->link_up);
 return (0);
}
