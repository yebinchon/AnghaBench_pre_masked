
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_binding_level {scalar_t__ kind; } ;


 struct cp_binding_level* FUNC_0 () ;
 scalar_t__ VAR_0 ;

bool
FUNC_1 (void)
{
  struct cp_binding_level *VAR_1 = FUNC_0 ();

  return VAR_1->kind == VAR_0;
}
