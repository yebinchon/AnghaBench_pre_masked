
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_regcache_data {struct inferior_regcache_data* registers; } ;


 int FUNC_0 (struct inferior_regcache_data*) ;

void
FUNC_1 (void *VAR_0)
{
  struct inferior_regcache_data *VAR_1
    = (struct inferior_regcache_data *) VAR_0;

  FUNC_0 (VAR_1->registers);
  FUNC_0 (VAR_1);
}
