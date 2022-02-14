
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int write; int validate; int valid_led_default; int update; int release; int read; int acquire; } ;
struct e1000_nvm_info {int opcode_bits; int delay_usec; int override; int page_size; int address_bits; int word_size; TYPE_1__ ops; int type; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_14)
{
 struct e1000_nvm_info *VAR_15 = &VAR_14->nvm;
 u32 VAR_16 = FUNC_1(VAR_14, VAR_0);
 u16 VAR_17;

 FUNC_0("e1000_init_nvm_params_80003es2lan");

 VAR_15->opcode_bits = 8;
 VAR_15->delay_usec = 1;
 switch (VAR_15->override) {
 case 129:
  VAR_15->page_size = 32;
  VAR_15->address_bits = 16;
  break;
 case 128:
  VAR_15->page_size = 8;
  VAR_15->address_bits = 8;
  break;
 default:
  VAR_15->page_size = VAR_16 & VAR_1 ? 32 : 8;
  VAR_15->address_bits = VAR_16 & VAR_1 ? 16 : 8;
  break;
 }

 VAR_15->type = VAR_7;

 VAR_17 = (u16)((VAR_16 & VAR_2) >>
       VAR_3);




 VAR_17 += VAR_5;


 if (VAR_17 > 14)
  VAR_17 = 14;
 VAR_15->word_size = 1 << VAR_17;


 VAR_15->ops.acquire = VAR_6;
 VAR_15->ops.read = VAR_8;
 VAR_15->ops.release = VAR_9;
 VAR_15->ops.update = VAR_10;
 VAR_15->ops.valid_led_default = VAR_11;
 VAR_15->ops.validate = VAR_12;
 VAR_15->ops.write = VAR_13;

 return VAR_4;
}
