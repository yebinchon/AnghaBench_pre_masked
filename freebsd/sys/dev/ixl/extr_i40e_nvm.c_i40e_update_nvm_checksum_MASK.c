
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i40e_hw*,int *) ;
 int FUNC_3 (struct i40e_hw*,int,int ,int,int *,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3)
{
 enum i40e_status_code VAR_4 = VAR_1;
 u16 VAR_5;
 __le16 VAR_6;

 FUNC_1("i40e_update_nvm_checksum");

 VAR_4 = FUNC_2(VAR_3, &VAR_5);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_4 == VAR_1)
  VAR_4 = FUNC_3(VAR_3, 0x00, VAR_0,
          1, &VAR_6, VAR_2);

 return VAR_4;
}
