
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int write; int valid_led_default; int validate; int update; int read; int release; int acquire; } ;
struct e1000_nvm_info {int opcode_bits; int delay_usec; int override; int page_size; int address_bits; int word_size; TYPE_2__ ops; int type; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
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

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_18)
{
 struct e1000_nvm_info *VAR_19 = &VAR_18->nvm;
 u32 VAR_20 = FUNC_1(VAR_18, VAR_0);
 u16 VAR_21;

 FUNC_0("e1000_init_nvm_params_82571");

 VAR_19->opcode_bits = 8;
 VAR_19->delay_usec = 1;
 switch (VAR_19->override) {
 case 129:
  VAR_19->page_size = 32;
  VAR_19->address_bits = 16;
  break;
 case 128:
  VAR_19->page_size = 8;
  VAR_19->address_bits = 8;
  break;
 default:
  VAR_19->page_size = VAR_20 & VAR_1 ? 32 : 8;
  VAR_19->address_bits = VAR_20 & VAR_1 ? 16 : 8;
  break;
 }

 switch (VAR_18->mac.type) {
 case 132:
 case 131:
 case 130:
  if (((VAR_20 >> 15) & 0x3) == 0x3) {
   VAR_19->type = VAR_10;
   VAR_19->word_size = 2048;



   VAR_20 &= ~VAR_2;
   FUNC_2(VAR_18, VAR_0, VAR_20);
   break;
  }

 default:
  VAR_19->type = VAR_9;
  VAR_21 = (u16)((VAR_20 & VAR_3) >>
        VAR_4);



  VAR_21 += VAR_6;


  if (VAR_21 > 14)
   VAR_21 = 14;
  VAR_19->word_size = 1 << VAR_21;
  break;
 }


 switch (VAR_18->mac.type) {
 case 131:
 case 130:
  VAR_19->ops.acquire = VAR_8;
  VAR_19->ops.release = VAR_11;
  break;
 default:
  VAR_19->ops.acquire = VAR_7;
  VAR_19->ops.release = VAR_13;
  break;
 }
 VAR_19->ops.read = VAR_12;
 VAR_19->ops.update = VAR_14;
 VAR_19->ops.validate = VAR_16;
 VAR_19->ops.valid_led_default = VAR_15;
 VAR_19->ops.write = VAR_17;

 return VAR_5;
}
