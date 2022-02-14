
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {struct regcache* register_valid_p; struct regcache* registers; } ;


 int FUNC_0 (struct regcache*) ;

void
FUNC_1 (struct regcache *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return;
  FUNC_0 (VAR_0->registers);
  FUNC_0 (VAR_0->register_valid_p);
  FUNC_0 (VAR_0);
}
