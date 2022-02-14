
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int release; int acquire; } ;
struct TYPE_4__ {TYPE_1__ ops; int type; } ;
struct e1000_hw {TYPE_2__ nvm; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_4)
{
 FUNC_0("e1000_init_nvm_params_vf");
 VAR_4->nvm.type = VAR_2;
 VAR_4->nvm.ops.acquire = VAR_1;
 VAR_4->nvm.ops.release = VAR_3;

 return VAR_0;
}
