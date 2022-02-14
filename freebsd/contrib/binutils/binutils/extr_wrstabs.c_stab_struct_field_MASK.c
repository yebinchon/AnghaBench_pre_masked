
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; int abfd; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {unsigned int size; char* fields; scalar_t__ definition; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,char const*) ;
 int FUNC_6 (char*,char*,char*,char const*,char const*,char*,long,long) ;
 char* FUNC_7 (struct stab_write_handle*) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (void *VAR_1, const char *VAR_2, bfd_vma VAR_3,
     bfd_vma VAR_4, enum debug_visibility VAR_5)
{
  struct stab_write_handle *VAR_6 = (struct stab_write_handle *) VAR_1;
  bfd_boolean VAR_7;
  unsigned int VAR_8;
  char *VAR_9, *VAR_10;
  const char *VAR_11;

  VAR_7 = VAR_6->type_stack->definition;
  VAR_8 = VAR_6->type_stack->size;
  VAR_9 = FUNC_7 (VAR_6);




  FUNC_2 (VAR_6->type_stack->fields != ((void*)0));
  VAR_10 = (char *) FUNC_9 (FUNC_8 (VAR_6->type_stack->fields)
   + FUNC_8 (VAR_2)
   + FUNC_8 (VAR_9)
   + 50);

  switch (VAR_5)
    {
    default:
      FUNC_1 ();

    case 128:
      VAR_11 = "";
      break;

    case 130:
      VAR_11 = "/0";
      break;

    case 129:
      VAR_11 = "/1";
      break;
    }

  if (VAR_4 == 0)
    {
      VAR_4 = VAR_8 * 8;
      if (VAR_4 == 0)
 FUNC_5 (FUNC_0("%s: warning: unknown size for field `%s' in struct"),
     FUNC_3 (VAR_6->abfd), VAR_2);
    }

  FUNC_6 (VAR_10, "%s%s:%s%s,%ld,%ld;", VAR_6->type_stack->fields, VAR_2, VAR_11, VAR_9,
    (long) VAR_3, (long) VAR_4);

  FUNC_4 (VAR_6->type_stack->fields);
  VAR_6->type_stack->fields = VAR_10;

  if (VAR_7)
    VAR_6->type_stack->definition = VAR_0;

  return VAR_0;
}
