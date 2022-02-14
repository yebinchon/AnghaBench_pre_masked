
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arq_last_status; } ;
struct i40e_hw {int nvmupd_state; TYPE_1__ aq; scalar_t__ nvm_wait_opcode; scalar_t__ nvm_release_on_done; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int ,char*,scalar_t__) ;
 int FUNC_1 (struct i40e_hw*) ;

void FUNC_2(struct i40e_hw *VAR_5)
{
 FUNC_0(VAR_5, VAR_1,
     "NVMUPD: clearing wait on opcode 0x%04x\n",
     VAR_5->nvm_wait_opcode);

 if (VAR_5->nvm_release_on_done) {
  FUNC_1(VAR_5);
  VAR_5->nvm_release_on_done = VAR_0;
 }
 VAR_5->nvm_wait_opcode = 0;

 if (VAR_5->aq.arq_last_status) {
  VAR_5->nvmupd_state = VAR_2;
  return;
 }

 switch (VAR_5->nvmupd_state) {
 case 129:
  VAR_5->nvmupd_state = VAR_3;
  break;

 case 128:
  VAR_5->nvmupd_state = VAR_4;
  break;

 default:
  break;
 }
}
