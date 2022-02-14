
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_binding_level {struct cp_binding_level* level_chain; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct cp_binding_level* VAR_0 ;
 struct cp_binding_level* VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cp_binding_level*) ;
 int VAR_3 ;

void
FUNC_4 (void)
{
  struct cp_binding_level *VAR_4;
  FUNC_1 (VAR_3, "current_binding_level=%p\n"
    "class_binding_level=%p\n"
    "NAMESPACE_LEVEL (global_namespace)=%p\n",
    (void *) VAR_1, (void *) VAR_0,
    (void *) FUNC_0 (VAR_2));
  if (VAR_0)
    {
      for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->level_chain)
 if (VAR_4 == VAR_1)
   break;
      if (VAR_4)
 VAR_4 = VAR_0;
      else
 VAR_4 = VAR_1;
    }
  else
    VAR_4 = VAR_1;
  FUNC_3 (VAR_4);
  FUNC_1 (VAR_3, "global:\n");
  FUNC_2 (FUNC_0 (VAR_2));
}
