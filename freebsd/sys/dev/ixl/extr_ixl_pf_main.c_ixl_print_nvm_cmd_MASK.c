
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_nvm_access {int command; int config; int offset; int data_size; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

void
FUNC_1(device_t VAR_1, struct i40e_nvm_access *VAR_2)
{
 if ((VAR_2->command == VAR_0) &&
     ((VAR_2->config & 0xFF) == 0xF) &&
     (((VAR_2->config & 0xF00) >> 8) == 0xF) &&
     (VAR_2->offset == 0) &&
     (VAR_2->data_size == 1)) {

 }
 else if (VAR_2->command == VAR_0) {

 }
 else {
  switch (VAR_2->command) {
  case 0xB:
   FUNC_0(VAR_1, "- command: I40E_NVM_READ\n");
   break;
  case 0xC:
   FUNC_0(VAR_1, "- command: I40E_NVM_WRITE\n");
   break;
  default:
   FUNC_0(VAR_1, "- command: unknown 0x%08x\n", VAR_2->command);
   break;
  }

  FUNC_0(VAR_1, "- config (ptr)  : 0x%02x\n", VAR_2->config & 0xFF);
  FUNC_0(VAR_1, "- config (flags): 0x%01x\n", (VAR_2->config & 0xF00) >> 8);
  FUNC_0(VAR_1, "- offset : 0x%08x\n", VAR_2->offset);
  FUNC_0(VAR_1, "- data_s : 0x%08x\n", VAR_2->data_size);
 }
}
