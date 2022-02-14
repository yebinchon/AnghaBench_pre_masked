
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int init_params; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; } ;


 int FUNC_0 (struct e1000_hw*) ;
 int VAR_0 ;

void FUNC_1(struct e1000_hw *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->nvm.ops.init_params = VAR_0;

 return;
}
