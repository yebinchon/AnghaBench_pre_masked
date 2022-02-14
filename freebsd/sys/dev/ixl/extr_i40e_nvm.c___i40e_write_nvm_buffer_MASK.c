
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int __le16 ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct i40e_hw*,int ,size_t,size_t,void*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_1,
           u8 VAR_2, u32 VAR_3,
           u16 VAR_4, void *VAR_5)
{
 __le16 *VAR_6 = (__le16 *)VAR_5;
 u16 *VAR_7 = (u16 *)VAR_5;
 u32 VAR_8 = 0;

 FUNC_1("i40e_write_nvm_buffer");

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_6[VAR_8] = FUNC_0(VAR_7[VAR_8]);




 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_0);
}
