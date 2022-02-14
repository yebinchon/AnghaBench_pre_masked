
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct i40e_hw*,int,int ,int,void*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_1, u32 VAR_2,
         void *VAR_3)
{
 FUNC_1("i40e_write_nvm_word");

 *((__le16 *)VAR_3) = FUNC_0(*((u16 *)VAR_3));


 return FUNC_2(VAR_1, 0x00, VAR_2, 1, VAR_3, VAR_0);
}
