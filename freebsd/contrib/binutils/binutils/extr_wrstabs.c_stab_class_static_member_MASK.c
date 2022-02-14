
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {char const* fields; scalar_t__ definition; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char const*,char const*,char const*,char*,char const*) ;
 char* FUNC_4 (struct stab_write_handle*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_1, const char *VAR_2, const char *VAR_3,
     enum debug_visibility VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_1;
  bfd_boolean VAR_6;
  char *VAR_7, *VAR_8;
  const char *VAR_9;

  VAR_6 = VAR_5->type_stack->definition;
  VAR_7 = FUNC_4 (VAR_5);




  FUNC_1 (VAR_5->type_stack->fields != ((void*)0));
  VAR_8 = (char *) FUNC_6 (FUNC_5 (VAR_5->type_stack->fields)
   + FUNC_5 (VAR_2)
   + FUNC_5 (VAR_7)
   + FUNC_5 (VAR_3)
   + 10);

  switch (VAR_4)
    {
    default:
      FUNC_0 ();

    case 128:
      VAR_9 = "";
      break;

    case 130:
      VAR_9 = "/0";
      break;

    case 129:
      VAR_9 = "/1";
      break;
    }

  FUNC_3 (VAR_8, "%s%s:%s%s:%s;", VAR_5->type_stack->fields, VAR_2, VAR_9, VAR_7,
    VAR_3);

  FUNC_2 (VAR_5->type_stack->fields);
  VAR_5->type_stack->fields = VAR_8;

  if (VAR_6)
    VAR_5->type_stack->definition = VAR_0;

  return VAR_0;
}
