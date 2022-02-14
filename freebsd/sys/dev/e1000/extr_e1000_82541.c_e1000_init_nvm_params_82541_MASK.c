
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int write; void* validate; void* valid_led_default; void* update; void* release; scalar_t__ (* read ) (struct e1000_hw*,int ,int,int*) ;void* acquire; } ;
struct e1000_nvm_info {int override; scalar_t__ type; int address_bits; int delay_usec; int opcode_bits; int page_size; int word_size; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;




 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int,int*) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_18)
{
 struct e1000_nvm_info *VAR_19 = &VAR_18->nvm;
 s32 VAR_20 = VAR_4;
 u32 VAR_21 = FUNC_1(VAR_18, VAR_0);
 u16 VAR_22;

 FUNC_0("e1000_init_nvm_params_82541");

 switch (VAR_19->override) {
 case 129:
  VAR_19->type = VAR_11;
  VAR_21 |= VAR_1;
  break;
 case 128:
  VAR_19->type = VAR_11;
  VAR_21 &= ~VAR_1;
  break;
 case 131:
  VAR_19->type = VAR_10;
  VAR_21 |= VAR_2;
  break;
 case 130:
  VAR_19->type = VAR_10;
  VAR_21 &= ~VAR_2;
  break;
 default:
  VAR_19->type = VAR_21 & VAR_3 ? VAR_11
       : VAR_10;
  break;
 }

 if (VAR_19->type == VAR_11) {
  VAR_19->address_bits = (VAR_21 & VAR_1) ? 16 : 8;
  VAR_19->delay_usec = 1;
  VAR_19->opcode_bits = 8;
  VAR_19->page_size = (VAR_21 & VAR_1) ? 32 : 8;


  VAR_19->ops.acquire = VAR_9;
  VAR_19->ops.read = FUNC_3;
  VAR_19->ops.release = VAR_12;
  VAR_19->ops.update = VAR_13;
  VAR_19->ops.valid_led_default = VAR_14;
  VAR_19->ops.validate = VAR_15;
  VAR_19->ops.write = VAR_17;







  VAR_19->word_size = 64;
  VAR_20 = VAR_19->ops.read(VAR_18, VAR_5, 1, &VAR_22);
  if (VAR_20)
   goto out;
  VAR_22 = (VAR_22 & VAR_6) >> VAR_7;





  if (VAR_22) {
   VAR_22 += VAR_8;
   VAR_19->word_size = 1 << VAR_22;
  }
 } else {
  VAR_19->address_bits = (VAR_21 & VAR_1) ? 8 : 6;
  VAR_19->delay_usec = 50;
  VAR_19->opcode_bits = 3;
  VAR_19->word_size = (VAR_21 & VAR_1) ? 256 : 64;


  VAR_19->ops.acquire = VAR_9;
  VAR_19->ops.read = FUNC_2;
  VAR_19->ops.release = VAR_12;
  VAR_19->ops.update = VAR_13;
  VAR_19->ops.valid_led_default = VAR_14;
  VAR_19->ops.validate = VAR_15;
  VAR_19->ops.write = VAR_16;
 }

out:
 return VAR_20;
}
