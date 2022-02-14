
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int update; int validate; int valid_led_default; int write; int read; int release; int acquire; } ;
struct e1000_nvm_info {int word_size; int opcode_bits; int delay_usec; int override; int page_size; int address_bits; TYPE_2__ ops; int type; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_nvm_info nvm; } ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

s32 FUNC_2(struct e1000_hw *VAR_21)
{
 struct e1000_nvm_info *VAR_22 = &VAR_21->nvm;
 u32 VAR_23 = FUNC_1(VAR_21, VAR_0);
 u16 VAR_24;

 FUNC_0("e1000_init_nvm_params_82575");

 VAR_24 = (u16)((VAR_23 & VAR_2) >>
       VAR_3);




 VAR_24 += VAR_5;




 if (VAR_24 > 15)
  VAR_24 = 15;

 VAR_22->word_size = 1 << VAR_24;
 if (VAR_21->mac.type < VAR_7) {
  VAR_22->opcode_bits = 8;
  VAR_22->delay_usec = 1;

  switch (VAR_22->override) {
  case 129:
   VAR_22->page_size = 32;
   VAR_22->address_bits = 16;
   break;
  case 128:
   VAR_22->page_size = 8;
   VAR_22->address_bits = 8;
   break;
  default:
   VAR_22->page_size = VAR_23 & VAR_1 ? 32 : 8;
   VAR_22->address_bits = VAR_23 & VAR_1 ?
         16 : 8;
   break;
  }
  if (VAR_22->word_size == (1 << 15))
   VAR_22->page_size = 128;

  VAR_22->type = VAR_8;
 } else {
  VAR_22->type = VAR_9;
 }


 VAR_22->ops.acquire = VAR_6;
 VAR_22->ops.release = VAR_12;
 if (VAR_22->word_size < (1 << 15))
  VAR_22->ops.read = VAR_10;
 else
  VAR_22->ops.read = VAR_11;

 VAR_22->ops.write = VAR_20;
 VAR_22->ops.validate = VAR_18;
 VAR_22->ops.update = VAR_14;
 VAR_22->ops.valid_led_default = VAR_16;


 switch (VAR_21->mac.type) {
 case 132:
  VAR_22->ops.validate = VAR_17;
  VAR_22->ops.update = VAR_13;
  break;
 case 131:
 case 130:
  VAR_22->ops.validate = VAR_19;
  VAR_22->ops.update = VAR_15;
  break;
 default:
  break;
 }

 return VAR_4;
}
