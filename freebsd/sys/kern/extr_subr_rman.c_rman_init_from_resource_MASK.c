
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rman {int dummy; } ;
struct resource {TYPE_1__* __r_i; } ;
struct TYPE_2__ {int r_end; int r_start; } ;


 int FUNC_0 (struct rman*) ;
 int FUNC_1 (struct rman*,int ,int ) ;

int
FUNC_2(struct rman *VAR_0, struct resource *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0)) != 0)
  return (VAR_2);
 return (FUNC_1(VAR_0, VAR_1->__r_i->r_start, VAR_1->__r_i->r_end));
}
