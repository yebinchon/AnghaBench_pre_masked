
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rman {int dummy; } ;
struct resource {TYPE_1__* __r_i; } ;
struct TYPE_2__ {struct rman* r_rm; } ;



int
FUNC_0(struct resource *VAR_0, struct rman *VAR_1)
{

 return (VAR_0->__r_i->r_rm == VAR_1);
}
