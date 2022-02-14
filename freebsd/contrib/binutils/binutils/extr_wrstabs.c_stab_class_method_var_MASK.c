
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {int definition; char* methods; } ;





 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (struct stab_write_handle*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct stab_write_handle *VAR_1, const char *VAR_2,
         enum debug_visibility VAR_3,
         bfd_boolean VAR_4, bfd_boolean VAR_5,
         bfd_boolean VAR_6, bfd_vma VAR_7,
         bfd_boolean VAR_8)
{
  bfd_boolean VAR_9;
  char *VAR_10;
  char *VAR_11 = ((void*)0);
  char VAR_12, VAR_13, VAR_14;

  VAR_9 = VAR_1->type_stack->definition;
  VAR_10 = FUNC_4 (VAR_1);

  if (VAR_8)
    {
      VAR_9 = VAR_9 || VAR_1->type_stack->definition;
      VAR_11 = FUNC_4 (VAR_1);
    }

  FUNC_1 (VAR_1->type_stack != ((void*)0) && VAR_1->type_stack->methods != ((void*)0));

  switch (VAR_3)
    {
    default:
      FUNC_0 ();

    case 130:
      VAR_12 = '0';
      break;

    case 129:
      VAR_12 = '1';
      break;

    case 128:
      VAR_12 = '2';
      break;
    }

  if (VAR_5)
    {
      if (VAR_6)
 VAR_13 = 'D';
      else
 VAR_13 = 'B';
    }
  else
    {
      if (VAR_6)
 VAR_13 = 'C';
      else
 VAR_13 = 'A';
    }

  if (VAR_4)
    VAR_14 = '?';
  else if (! VAR_8)
    VAR_14 = '.';
  else
    VAR_14 = '*';

  VAR_1->type_stack->methods =
    (char *) FUNC_6 (VAR_1->type_stack->methods,
         (FUNC_5 (VAR_1->type_stack->methods)
   + FUNC_5 (VAR_10)
   + FUNC_5 (VAR_2)
   + (VAR_8 ? FUNC_5 (VAR_11) : 0)
   + 40));

  FUNC_3 (VAR_1->type_stack->methods + FUNC_5 (VAR_1->type_stack->methods),
    "%s:%s;%c%c%c", VAR_10, VAR_2, VAR_12, VAR_13, VAR_14);
  FUNC_2 (VAR_10);

  if (VAR_8)
    {
      FUNC_3 (VAR_1->type_stack->methods + FUNC_5 (VAR_1->type_stack->methods),
        "%ld;%s;", (long) VAR_7, VAR_11);
      FUNC_2 (VAR_11);
    }

  if (VAR_9)
    VAR_1->type_stack->definition = VAR_0;

  return VAR_0;
}
