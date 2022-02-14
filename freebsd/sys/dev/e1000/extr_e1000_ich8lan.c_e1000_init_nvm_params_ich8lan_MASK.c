
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_8__ {int write; int validate; int valid_led_default; int update; int read; int release; int acquire; } ;
struct e1000_nvm_info {int flash_base_addr; int flash_bank_size; size_t word_size; TYPE_4__ ops; int type; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct e1000_dev_spec_ich8lan {TYPE_2__* shadow_ram; } ;
struct TYPE_5__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_3__ mac; scalar_t__ flash_address; scalar_t__ hw_addr; TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef int s32 ;
struct TYPE_6__ {int value; int modified; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_21)
{
 struct e1000_nvm_info *VAR_22 = &VAR_21->nvm;
 struct e1000_dev_spec_ich8lan *VAR_23 = &VAR_21->dev_spec.ich8lan;
 u32 VAR_24, VAR_25, VAR_26;
 u16 VAR_27;
 u32 VAR_28;

 FUNC_0("e1000_init_nvm_params_ich8lan");

 VAR_22->type = VAR_11;

 if (VAR_21->mac.type >= VAR_12) {






  VAR_22->flash_base_addr = 0;
  VAR_28 =
      (((FUNC_3(VAR_21, VAR_3) >> 1) & 0x1F) + 1)
      * VAR_9;
  VAR_22->flash_bank_size = VAR_28 / 2;

  VAR_22->flash_bank_size /= sizeof(u16);

  VAR_21->flash_address = VAR_21->hw_addr + VAR_1;
 } else {

  if (!VAR_21->flash_address) {
   FUNC_1("ERROR: Flash registers not mapped\n");
   return -VAR_0;
  }

  VAR_24 = FUNC_2(VAR_21, VAR_8);





  VAR_25 = VAR_24 & VAR_6;
  VAR_26 = ((VAR_24 >> 16) & VAR_6) + 1;


  VAR_22->flash_base_addr = VAR_25
           << VAR_7;




  VAR_22->flash_bank_size = ((VAR_26 - VAR_25)
     << VAR_7);
  VAR_22->flash_bank_size /= 2;

  VAR_22->flash_bank_size /= sizeof(u16);
 }

 VAR_22->word_size = VAR_2;


 for (VAR_27 = 0; VAR_27 < VAR_22->word_size; VAR_27++) {
  VAR_23->shadow_ram[VAR_27].modified = VAR_5;
  VAR_23->shadow_ram[VAR_27].value = 0xFFFF;
 }


 VAR_22->ops.acquire = VAR_10;
 VAR_22->ops.release = VAR_15;
 if (VAR_21->mac.type >= VAR_12) {
  VAR_22->ops.read = VAR_14;
  VAR_22->ops.update = VAR_17;
 } else {
  VAR_22->ops.read = VAR_13;
  VAR_22->ops.update = VAR_16;
 }
 VAR_22->ops.valid_led_default = VAR_18;
 VAR_22->ops.validate = VAR_19;
 VAR_22->ops.write = VAR_20;

 return VAR_4;
}
