
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {char** baseclasses; scalar_t__ definition; int * fields; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,long,char*) ;
 char* FUNC_4 (struct stab_write_handle*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char**,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_1, bfd_vma VAR_2, bfd_boolean VAR_3,
        enum debug_visibility VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_1;
  bfd_boolean VAR_6;
  char *VAR_7;
  char *VAR_8;
  unsigned int VAR_9;
  char **VAR_10;

  VAR_6 = VAR_5->type_stack->definition;
  VAR_7 = FUNC_4 (VAR_5);



  VAR_8 = (char *) FUNC_6 (FUNC_5 (VAR_7) + 25);
  VAR_8[0] = VAR_3 ? '1' : '0';
  switch (VAR_4)
    {
    default:
      FUNC_0 ();

    case 130:
      VAR_8[1] = '0';
      break;

    case 129:
      VAR_8[1] = '1';
      break;

    case 128:
      VAR_8[1] = '2';
      break;
    }

  FUNC_3 (VAR_8 + 2, "%ld,%s;", (long) VAR_2, VAR_7);
  FUNC_2 (VAR_7);



  FUNC_1 (VAR_5->type_stack != ((void*)0) && VAR_5->type_stack->fields != ((void*)0));

  if (VAR_5->type_stack->baseclasses == ((void*)0))
    VAR_9 = 0;
  else
    {
      VAR_9 = 0;
      while (VAR_5->type_stack->baseclasses[VAR_9] != ((void*)0))
 ++VAR_9;
    }

  VAR_10 = (char **) FUNC_7 (VAR_5->type_stack->baseclasses,
        (VAR_9 + 2) * sizeof (*VAR_10));
  VAR_10[VAR_9] = VAR_8;
  VAR_10[VAR_9 + 1] = ((void*)0);

  VAR_5->type_stack->baseclasses = VAR_10;

  if (VAR_6)
    VAR_5->type_stack->definition = VAR_0;

  return VAR_0;
}
