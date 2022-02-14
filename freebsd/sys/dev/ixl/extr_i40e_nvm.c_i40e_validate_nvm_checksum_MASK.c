
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,scalar_t__*) ;
 int FUNC_4 (struct i40e_hw*) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_4,
       u16 *VAR_5)
{
 enum i40e_status_code VAR_6 = VAR_3;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;

 FUNC_0("i40e_validate_nvm_checksum");






 VAR_6 = FUNC_2(VAR_4, VAR_1);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_3(VAR_4, &VAR_8);
 FUNC_1(VAR_4, VAR_2, &VAR_7);
 FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;




 if (VAR_8 != VAR_7)
  VAR_6 = VAR_0;


 if (VAR_5)
  *VAR_5 = VAR_8;

 return VAR_6;
}
