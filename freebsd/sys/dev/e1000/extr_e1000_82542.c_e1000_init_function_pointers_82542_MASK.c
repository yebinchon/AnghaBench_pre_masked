
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int init_params; } ;
struct TYPE_12__ {TYPE_5__ ops; } ;
struct TYPE_9__ {int init_params; } ;
struct TYPE_10__ {TYPE_3__ ops; } ;
struct TYPE_7__ {int init_params; } ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_6__ phy; TYPE_4__ nvm; TYPE_2__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct e1000_hw *VAR_3)
{
 FUNC_0("e1000_init_function_pointers_82542");

 VAR_3->mac.ops.init_params = VAR_0;
 VAR_3->nvm.ops.init_params = VAR_1;
 VAR_3->phy.ops.init_params = VAR_2;
}
