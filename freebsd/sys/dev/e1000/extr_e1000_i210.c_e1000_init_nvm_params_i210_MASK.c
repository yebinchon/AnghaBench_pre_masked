
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* update; void* validate; int write; int read; int valid_led_default; int release; int acquire; } ;
struct e1000_nvm_info {TYPE_1__ ops; int type; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_12)
{
 s32 VAR_13;
 struct e1000_nvm_info *VAR_14 = &VAR_12->nvm;

 FUNC_0("e1000_init_nvm_params_i210");

 VAR_13 = FUNC_2(VAR_12);
 VAR_14->ops.acquire = VAR_0;
 VAR_14->ops.release = VAR_7;
 VAR_14->ops.valid_led_default = VAR_9;
 if (FUNC_1(VAR_12)) {
  VAR_12->nvm.type = VAR_3;
  VAR_14->ops.read = VAR_6;
  VAR_14->ops.write = VAR_11;
  VAR_14->ops.validate = VAR_10;
  VAR_14->ops.update = VAR_8;
 } else {
  VAR_12->nvm.type = VAR_4;
  VAR_14->ops.read = VAR_5;
  VAR_14->ops.write = VAR_2;
  VAR_14->ops.validate = VAR_1;
  VAR_14->ops.update = VAR_1;
 }
 return VAR_13;
}
