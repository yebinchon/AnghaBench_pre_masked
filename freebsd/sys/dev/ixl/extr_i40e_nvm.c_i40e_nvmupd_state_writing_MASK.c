
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40e_nvm_access {int dummy; } ;
struct TYPE_4__ {scalar_t__ asq_last_status; } ;
struct TYPE_3__ {scalar_t__ hw_semaphore_timeout; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ nvm; void* nvmupd_state; void* nvm_wait_opcode; void* nvm_release_on_done; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 void* VAR_14 ;
 int FUNC_3 (struct i40e_hw*,int ,char*,scalar_t__,...) ;
 scalar_t__* VAR_15 ;
 int FUNC_4 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_5 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_6 (struct i40e_hw*) ;
 int FUNC_7 (struct i40e_hw*) ;
 scalar_t__ FUNC_8 (struct i40e_hw*,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_9(struct i40e_hw *VAR_16,
          struct i40e_nvm_access *VAR_17,
          u8 *VAR_18, int *VAR_19)
{
 enum i40e_status_code VAR_20 = VAR_12;
 enum i40e_nvmupd_cmd VAR_21;
 bool VAR_22 = VAR_2;

 FUNC_0("i40e_nvmupd_state_writing");

 VAR_21 = FUNC_5(VAR_16, VAR_17, VAR_19);

retry:
 switch (VAR_21) {
 case 129:
  VAR_20 = FUNC_4(VAR_16, VAR_17, VAR_18, VAR_19);
  if (!VAR_20) {
   VAR_16->nvm_wait_opcode = VAR_14;
   VAR_16->nvmupd_state = VAR_10;
  }
  break;

 case 128:
  VAR_20 = FUNC_4(VAR_16, VAR_17, VAR_18, VAR_19);
  if (VAR_20) {
   *VAR_19 = VAR_16->aq.asq_last_status ?
       FUNC_2(VAR_20,
             VAR_16->aq.asq_last_status) :
       -VAR_0;
   VAR_16->nvmupd_state = VAR_8;
  } else {
   VAR_16->nvm_release_on_done = VAR_13;
   VAR_16->nvm_wait_opcode = VAR_14;
   VAR_16->nvmupd_state = VAR_9;
  }
  break;

 case 131:

  VAR_20 = FUNC_7(VAR_16);
  if (VAR_20) {
   *VAR_19 = VAR_16->aq.asq_last_status ?
       FUNC_2(VAR_20,
             VAR_16->aq.asq_last_status) :
       -VAR_0;
   VAR_16->nvmupd_state = VAR_8;
  } else {
   VAR_16->nvm_wait_opcode = VAR_14;
   VAR_16->nvmupd_state = VAR_10;
  }
  break;

 case 130:

  VAR_20 = FUNC_7(VAR_16);
  if (VAR_20) {
   *VAR_19 = VAR_16->aq.asq_last_status ?
       FUNC_2(VAR_20,
             VAR_16->aq.asq_last_status) :
       -VAR_0;
   VAR_16->nvmupd_state = VAR_8;
  } else {
   VAR_16->nvm_release_on_done = VAR_13;
   VAR_16->nvm_wait_opcode = VAR_14;
   VAR_16->nvmupd_state = VAR_9;
  }
  break;

 default:
  FUNC_3(VAR_16, VAR_5,
      "NVMUPD: bad cmd %s in writing state.\n",
      VAR_15[VAR_21]);
  VAR_20 = VAR_7;
  *VAR_19 = -VAR_1;
  break;
 }







 if (VAR_20 && (VAR_16->aq.asq_last_status == VAR_3) &&
     !VAR_22) {
  enum i40e_status_code VAR_23 = VAR_20;
  u32 VAR_24 = VAR_16->aq.asq_last_status;
  u32 VAR_25;

  VAR_25 = FUNC_8(VAR_16, VAR_6);
  if (VAR_25 >= VAR_16->nvm.hw_semaphore_timeout) {
   FUNC_3(VAR_16, VAR_4,
       "NVMUPD: write semaphore expired (%d >= %lld), retrying\n",
       VAR_25, VAR_16->nvm.hw_semaphore_timeout);
   FUNC_6(VAR_16);
   VAR_20 = FUNC_1(VAR_16, VAR_11);
   if (VAR_20) {
    FUNC_3(VAR_16, VAR_4,
        "NVMUPD: write semaphore reacquire failed aq_err = %d\n",
        VAR_16->aq.asq_last_status);
    VAR_20 = VAR_23;
    VAR_16->aq.asq_last_status = VAR_24;
   } else {
    VAR_22 = VAR_13;
    goto retry;
   }
  }
 }

 return VAR_20;
}
