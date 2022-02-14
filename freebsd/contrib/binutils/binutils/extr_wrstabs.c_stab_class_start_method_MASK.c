
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* methods; int * fields; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_1, const char *VAR_2)
{
  struct stab_write_handle *VAR_3 = (struct stab_write_handle *) VAR_1;
  char *VAR_4;

  FUNC_0 (VAR_3->type_stack != ((void*)0) && VAR_3->type_stack->fields != ((void*)0));

  if (VAR_3->type_stack->methods == ((void*)0))
    {
      VAR_4 = (char *) FUNC_3 (FUNC_2 (VAR_2) + 3);
      *VAR_4 = '\0';
    }
  else
    {
      VAR_4 = (char *) FUNC_4 (VAR_3->type_stack->methods,
        (FUNC_2 (VAR_3->type_stack->methods)
         + FUNC_2 (VAR_2)
         + 4));
    }

  FUNC_1 (VAR_4 + FUNC_2 (VAR_4), "%s::", VAR_2);

  VAR_3->type_stack->methods = VAR_4;

  return VAR_0;
}
