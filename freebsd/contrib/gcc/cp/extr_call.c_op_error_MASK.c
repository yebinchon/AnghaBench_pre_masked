
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;





 int VAR_0 ;



 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,char const*,char const*,char const*,...) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1 (enum tree_code VAR_3, enum tree_code VAR_4,
   tree VAR_5, tree VAR_6, tree VAR_7, const char *VAR_8)
{
  const char *VAR_9;

  if (VAR_3 == VAR_0)
    VAR_9 = VAR_1[VAR_4].name;
  else
    VAR_9 = VAR_2[VAR_3].name;

  switch (VAR_3)
    {
    case 132:
      FUNC_0 ("%s for ternary %<operator?:%> in %<%E ? %E : %E%>",
      VAR_8, VAR_5, VAR_6, VAR_7);
      break;

    case 129:
    case 130:
      FUNC_0 ("%s for %<operator%s%> in %<%E%s%>", VAR_8, VAR_9, VAR_5, VAR_9);
      break;

    case 133:
      FUNC_0 ("%s for %<operator[]%> in %<%E[%E]%>", VAR_8, VAR_5, VAR_6);
      break;

    case 128:
    case 131:
      FUNC_0 ("%s for %qs in %<%s %E%>", VAR_8, VAR_9, VAR_9, VAR_5);
      break;

    default:
      if (VAR_6)
 FUNC_0 ("%s for %<operator%s%> in %<%E %s %E%>",
        VAR_8, VAR_9, VAR_5, VAR_9, VAR_6);
      else
 FUNC_0 ("%s for %<operator%s%> in %<%s%E%>",
        VAR_8, VAR_9, VAR_9, VAR_5);
      break;
    }
}
