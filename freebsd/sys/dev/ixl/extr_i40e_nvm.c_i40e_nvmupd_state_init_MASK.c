
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_nvm_access {int dummy; } ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {void* nvmupd_state; void* nvm_wait_opcode; void* nvm_release_on_done; TYPE_1__ aq; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (int,int ) ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_3 (struct i40e_hw*,int ,char*,int ) ;
 int * VAR_13 ;
 int FUNC_4 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_5 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_6 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_7 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_8 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_9 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_10 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_11 (struct i40e_hw*) ;
 int FUNC_12 (struct i40e_hw*) ;

__attribute__((used)) static enum i40e_status_code FUNC_13(struct i40e_hw *VAR_14,
          struct i40e_nvm_access *VAR_15,
          u8 *VAR_16, int *VAR_17)
{
 enum i40e_status_code VAR_18 = VAR_9;
 enum i40e_nvmupd_cmd VAR_19;

 FUNC_0("i40e_nvmupd_state_init");

 VAR_19 = FUNC_10(VAR_14, VAR_15, VAR_17);

 switch (VAR_19) {
 case 132:
  VAR_18 = FUNC_1(VAR_14, VAR_7);
  if (VAR_18) {
   *VAR_17 = FUNC_2(VAR_18,
           VAR_14->aq.asq_last_status);
  } else {
   VAR_18 = FUNC_8(VAR_14, VAR_15, VAR_16, VAR_17);
   FUNC_11(VAR_14);
  }
  break;

 case 131:
  VAR_18 = FUNC_1(VAR_14, VAR_7);
  if (VAR_18) {
   *VAR_17 = FUNC_2(VAR_18,
           VAR_14->aq.asq_last_status);
  } else {
   VAR_18 = FUNC_8(VAR_14, VAR_15, VAR_16, VAR_17);
   if (VAR_18)
    FUNC_11(VAR_14);
   else
    VAR_14->nvmupd_state = VAR_5;
  }
  break;

 case 130:
  VAR_18 = FUNC_1(VAR_14, VAR_8);
  if (VAR_18) {
   *VAR_17 = FUNC_2(VAR_18,
           VAR_14->aq.asq_last_status);
  } else {
   VAR_18 = FUNC_7(VAR_14, VAR_15, VAR_17);
   if (VAR_18) {
    FUNC_11(VAR_14);
   } else {
    VAR_14->nvm_release_on_done = VAR_10;
    VAR_14->nvm_wait_opcode = VAR_11;
    VAR_14->nvmupd_state = VAR_4;
   }
  }
  break;

 case 129:
  VAR_18 = FUNC_1(VAR_14, VAR_8);
  if (VAR_18) {
   *VAR_17 = FUNC_2(VAR_18,
           VAR_14->aq.asq_last_status);
  } else {
   VAR_18 = FUNC_9(VAR_14, VAR_15, VAR_16, VAR_17);
   if (VAR_18) {
    FUNC_11(VAR_14);
   } else {
    VAR_14->nvm_release_on_done = VAR_10;
    VAR_14->nvm_wait_opcode = VAR_12;
    VAR_14->nvmupd_state = VAR_4;
   }
  }
  break;

 case 128:
  VAR_18 = FUNC_1(VAR_14, VAR_8);
  if (VAR_18) {
   *VAR_17 = FUNC_2(VAR_18,
           VAR_14->aq.asq_last_status);
  } else {
   VAR_18 = FUNC_9(VAR_14, VAR_15, VAR_16, VAR_17);
   if (VAR_18) {
    FUNC_11(VAR_14);
   } else {
    VAR_14->nvm_wait_opcode = VAR_12;
    VAR_14->nvmupd_state = VAR_6;
   }
  }
  break;

 case 136:
  VAR_18 = FUNC_1(VAR_14, VAR_8);
  if (VAR_18) {
   *VAR_17 = FUNC_2(VAR_18,
           VAR_14->aq.asq_last_status);
  } else {
   VAR_18 = FUNC_12(VAR_14);
   if (VAR_18) {
    *VAR_17 = VAR_14->aq.asq_last_status ?
       FUNC_2(VAR_18,
             VAR_14->aq.asq_last_status) :
       -VAR_0;
    FUNC_11(VAR_14);
   } else {
    VAR_14->nvm_release_on_done = VAR_10;
    VAR_14->nvm_wait_opcode = VAR_12;
    VAR_14->nvmupd_state = VAR_4;
   }
  }
  break;

 case 135:
  VAR_18 = FUNC_4(VAR_14, VAR_15, VAR_16, VAR_17);
  break;

 case 133:
  VAR_18 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17);
  break;

 case 134:
  VAR_18 = FUNC_5(VAR_14, VAR_15, VAR_16, VAR_17);
  break;

 default:
  FUNC_3(VAR_14, VAR_2,
      "NVMUPD: bad cmd %s in init state\n",
      VAR_13[VAR_19]);
  VAR_18 = VAR_3;
  *VAR_17 = -VAR_1;
  break;
 }
 return VAR_18;
}
