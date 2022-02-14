
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_nvm_access {int dummy; } ;
struct i40e_hw {int nvmupd_state; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40e_hw*,int ,char*,int ) ;
 int * VAR_5 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_4 (struct i40e_hw*) ;

__attribute__((used)) static enum i40e_status_code FUNC_5(struct i40e_hw *VAR_6,
          struct i40e_nvm_access *VAR_7,
          u8 *VAR_8, int *VAR_9)
{
 enum i40e_status_code VAR_10 = VAR_4;
 enum i40e_nvmupd_cmd VAR_11;

 FUNC_0("i40e_nvmupd_state_reading");

 VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_9);

 switch (VAR_11) {
 case 128:
 case 130:
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
  break;

 case 129:
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_4(VAR_6);
  VAR_6->nvmupd_state = VAR_3;
  break;

 default:
  FUNC_1(VAR_6, VAR_1,
      "NVMUPD: bad cmd %s in reading state.\n",
      VAR_5[VAR_11]);
  VAR_10 = VAR_2;
  *VAR_9 = -VAR_0;
  break;
 }
 return VAR_10;
}
