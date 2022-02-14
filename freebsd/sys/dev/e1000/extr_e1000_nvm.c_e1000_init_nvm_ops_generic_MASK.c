
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write; void* validate; int valid_led_default; void* update; int reload; int release; int read; void* acquire; void* init_params; } ;
struct e1000_nvm_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1(struct e1000_hw *VAR_6)
{
 struct e1000_nvm_info *VAR_7 = &VAR_6->nvm;
 FUNC_0("e1000_init_nvm_ops_generic");


 VAR_7->ops.init_params = VAR_2;
 VAR_7->ops.acquire = VAR_2;
 VAR_7->ops.read = VAR_3;
 VAR_7->ops.release = VAR_1;
 VAR_7->ops.reload = VAR_5;
 VAR_7->ops.update = VAR_2;
 VAR_7->ops.valid_led_default = VAR_0;
 VAR_7->ops.validate = VAR_2;
 VAR_7->ops.write = VAR_4;
}
