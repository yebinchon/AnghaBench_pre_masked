
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this_entity; } ;
typedef TYPE_1__ cxx_scope ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char const*,char const*,void*,int,...) ;

__attribute__((used)) static void
FUNC_2 (cxx_scope *VAR_0, int VAR_1, const char *VAR_2)
{
  const char *VAR_3 = FUNC_0 (VAR_0);
  if (VAR_0->this_entity)
    FUNC_1 ("%s %s(%E) %p %d\n", VAR_2, VAR_3,
       VAR_0->this_entity, (void *) VAR_0, VAR_1);
  else
    FUNC_1 ("%s %s %p %d\n", VAR_2, VAR_3, (void *) VAR_0, VAR_1);
}
