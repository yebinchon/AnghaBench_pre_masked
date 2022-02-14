
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int validate; int update; int write; int release; int read; } ;
struct e1000_nvm_info {int address_bits; int delay_usec; int opcode_bits; int word_size; TYPE_1__ ops; int type; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_7)
{
 struct e1000_nvm_info *VAR_8 = &VAR_7->nvm;

 FUNC_0("e1000_init_nvm_params_82542");

 VAR_8->address_bits = 6;
 VAR_8->delay_usec = 50;
 VAR_8->opcode_bits = 3;
 VAR_8->type = VAR_1;
 VAR_8->word_size = 64;


 VAR_8->ops.read = VAR_2;
 VAR_8->ops.release = VAR_3;
 VAR_8->ops.write = VAR_6;
 VAR_8->ops.update = VAR_4;
 VAR_8->ops.validate = VAR_5;

 return VAR_0;
}
