
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_hw*,size_t,size_t*) ;

__attribute__((used)) static enum i40e_status_code FUNC_2(struct i40e_hw *VAR_1, u16 VAR_2,
       u16 *VAR_3, u16 *VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_0;
 u16 VAR_6, VAR_7;

 FUNC_0("i40e_read_nvm_buffer_srctl");


 for (VAR_7 = 0; VAR_7 < *VAR_3; VAR_7++) {
  VAR_6 = VAR_2 + VAR_7;
  VAR_5 = FUNC_1(VAR_1, VAR_6, &VAR_4[VAR_7]);
  if (VAR_5 != VAR_0)
   break;
 }


 *VAR_3 = VAR_7;

 return VAR_5;
}
