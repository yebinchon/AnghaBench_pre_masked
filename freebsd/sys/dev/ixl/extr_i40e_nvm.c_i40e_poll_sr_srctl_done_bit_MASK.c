
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct i40e_hw*,int ,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_4(struct i40e_hw *VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_1;
 u32 VAR_8, VAR_9;

 FUNC_0("i40e_poll_sr_srctl_done_bit");


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = FUNC_3(VAR_6, VAR_2);
  if (VAR_8 & VAR_3) {
   VAR_7 = VAR_5;
   break;
  }
  FUNC_2(5);
 }
 if (VAR_7 == VAR_1)
  FUNC_1(VAR_6, VAR_0, "Done bit in GLNVM_SRCTL not set");
 return VAR_7;
}
