
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_nvm_access {int offset; int data_size; int config; int command; } ;
struct TYPE_2__ {int arq_spinlock; } ;
struct i40e_hw {int nvmupd_state; TYPE_1__ aq; int nvm_wait_opcode; int nvm_release_on_done; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,...) ;
 int * VAR_11 ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*,struct i40e_nvm_access*,int*,int*) ;
 int FUNC_5 (struct i40e_hw*,struct i40e_nvm_access*,int*,int*) ;
 int FUNC_6 (struct i40e_hw*,struct i40e_nvm_access*,int*,int*) ;
 int FUNC_7 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_8 (int *) ;

enum i40e_status_code FUNC_9(struct i40e_hw *VAR_12,
       struct i40e_nvm_access *VAR_13,
       u8 *VAR_14, int *VAR_15)
{
 enum i40e_status_code VAR_16;
 enum i40e_nvmupd_cmd VAR_17;

 FUNC_0("i40e_nvmupd_command");


 *VAR_15 = 0;


 VAR_17 = FUNC_7(VAR_12, VAR_13, VAR_15);

 FUNC_2(VAR_12, VAR_3, "%s state %d nvm_release_on_hold %d opc 0x%04x cmd 0x%08x config 0x%08x offset 0x%08x data_size 0x%08x\n",
     VAR_11[VAR_17],
     VAR_12->nvmupd_state,
     VAR_12->nvm_release_on_done, VAR_12->nvm_wait_opcode,
     VAR_13->command, VAR_13->config, VAR_13->offset, VAR_13->data_size);

 if (VAR_17 == VAR_7) {
  *VAR_15 = -VAR_1;
  FUNC_2(VAR_12, VAR_3,
      "i40e_nvmupd_validate_command returns %d errno %d\n",
      VAR_17, *VAR_15);
 }




 if (VAR_17 == VAR_9) {
  if (!VAR_13->data_size) {
   *VAR_15 = -VAR_1;
   return VAR_4;
  }

  VAR_14[0] = VAR_12->nvmupd_state;

  if (VAR_13->data_size >= 4) {
   VAR_14[1] = 0;
   *((u16 *)&VAR_14[2]) = VAR_12->nvm_wait_opcode;
  }


  if (VAR_12->nvmupd_state == VAR_8)
   VAR_12->nvmupd_state = 132;

  return VAR_10;
 }


 if (VAR_12->nvmupd_state == VAR_8) {
  FUNC_2(VAR_12, VAR_3,
      "Clearing I40E_NVMUPD_STATE_ERROR state without reading\n");
  VAR_12->nvmupd_state = 132;
 }
 FUNC_1(&VAR_12->aq.arq_spinlock);
 switch (VAR_12->nvmupd_state) {
 case 132:
  VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15);
  break;

 case 130:
  VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_14, VAR_15);
  break;

 case 128:
  VAR_16 = FUNC_6(VAR_12, VAR_13, VAR_14, VAR_15);
  break;

 case 131:
 case 129:



  if (VAR_13->offset == 0xffff) {
   FUNC_3(VAR_12);
   VAR_16 = VAR_10;
   break;
  }

  VAR_16 = VAR_5;
  *VAR_15 = -VAR_0;
  break;

 default:

  FUNC_2(VAR_12, VAR_3,
      "NVMUPD: no such state %d\n", VAR_12->nvmupd_state);
  VAR_16 = VAR_6;
  *VAR_15 = -VAR_2;
  break;
 }

 FUNC_8(&VAR_12->aq.arq_spinlock);
 return VAR_16;
}
