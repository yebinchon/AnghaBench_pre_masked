
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int __le16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hw*,int,int ,int,int *,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_3(struct i40e_hw *VAR_2, u16 VAR_3,
         u16 *VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_0;

 FUNC_0("i40e_read_nvm_word_aq");

 VAR_5 = FUNC_2(VAR_2, 0x0, VAR_3, 1, VAR_4, VAR_1);
 *VAR_4 = FUNC_1(*(__le16 *)VAR_4);

 return VAR_5;
}
