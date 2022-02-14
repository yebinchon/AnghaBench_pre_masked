
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int write; int validate; int valid_led_default; int update; int release; int read; int acquire; } ;
struct e1000_nvm_info {int delay_usec; int opcode_bits; int override; int address_bits; int word_size; TYPE_1__ ops; int type; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_11)
{
 struct e1000_nvm_info *VAR_12 = &VAR_11->nvm;
 u32 VAR_13 = FUNC_1(VAR_11, VAR_0);

 FUNC_0("e1000_init_nvm_params_82540");

 VAR_12->type = VAR_4;
 VAR_12->delay_usec = 50;
 VAR_12->opcode_bits = 3;
 switch (VAR_12->override) {
 case 129:
  VAR_12->address_bits = 8;
  VAR_12->word_size = 256;
  break;
 case 128:
  VAR_12->address_bits = 6;
  VAR_12->word_size = 64;
  break;
 default:
  VAR_12->address_bits = VAR_13 & VAR_1 ? 8 : 6;
  VAR_12->word_size = VAR_13 & VAR_1 ? 256 : 64;
  break;
 }


 VAR_12->ops.acquire = VAR_3;
 VAR_12->ops.read = VAR_5;
 VAR_12->ops.release = VAR_6;
 VAR_12->ops.update = VAR_7;
 VAR_12->ops.valid_led_default = VAR_8;
 VAR_12->ops.validate = VAR_9;
 VAR_12->ops.write = VAR_10;

 return VAR_2;
}
