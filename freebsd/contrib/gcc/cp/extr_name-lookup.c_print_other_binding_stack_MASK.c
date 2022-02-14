
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_binding_level {struct cp_binding_level* level_chain; } ;


 int FUNC_0 (int ,char*,void*) ;
 int FUNC_1 (struct cp_binding_level*) ;
 int FUNC_2 (struct cp_binding_level*) ;
 int VAR_0 ;

void
FUNC_3 (struct cp_binding_level *VAR_1)
{
  struct cp_binding_level *VAR_2;
  for (VAR_2 = VAR_1; !FUNC_1 (VAR_2); VAR_2 = VAR_2->level_chain)
    {
      FUNC_0 (VAR_0, "binding level %p\n", (void *) VAR_2);
      FUNC_2 (VAR_2);
    }
}
