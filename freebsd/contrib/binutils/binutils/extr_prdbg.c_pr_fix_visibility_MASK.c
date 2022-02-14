
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef int bfd_boolean ;
struct TYPE_2__ {int visibility; char* type; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pr_handle*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pr_handle*) ;
 unsigned int FUNC_4 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct pr_handle *VAR_2, enum debug_visibility VAR_3)
{
  const char *VAR_4 = ((void*)0);
  char *VAR_5;
  unsigned int VAR_6;

  FUNC_2 (VAR_2->stack != ((void*)0));

  if (VAR_2->stack->visibility == VAR_3)
    return VAR_1;

  switch (VAR_3)
    {
    case 128:
      VAR_4 = "public";
      break;
    case 130:
      VAR_4 = "private";
      break;
    case 129:
      VAR_4 = "protected";
      break;
    case 131:
      VAR_4 = "/* ignore */";
      break;
    default:
      FUNC_0 ();
      return VAR_0;
    }




  VAR_5 = VAR_2->stack->type;
  VAR_6 = FUNC_4 (VAR_5);
  FUNC_2 (VAR_5[VAR_6 - 1] == ' ');
  VAR_5[VAR_6 - 1] = '\0';

  if (! FUNC_1 (VAR_2, VAR_4)
      || ! FUNC_1 (VAR_2, ":\n")
      || ! FUNC_3 (VAR_2))
    return VAR_0;

  VAR_2->stack->visibility = VAR_3;

  return VAR_1;
}
