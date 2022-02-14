
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int flags; scalar_t__ replacement; int name; int prefixname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct cmd_list_element**,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2 (char **VAR_2)
{
  struct cmd_list_element *VAR_3 = ((void*)0);
  struct cmd_list_element *VAR_4 = ((void*)0);
  struct cmd_list_element *VAR_5 = ((void*)0);
  struct cmd_list_element *VAR_6;
  char *VAR_7;

  if (!FUNC_0 (*VAR_2, &VAR_3, &VAR_4, &VAR_5))

    return;

  if (!((VAR_3 ? (VAR_3->flags & VAR_1) : 0)
      || (VAR_5->flags & VAR_1) ) )

    return;

  FUNC_1 ("Warning:");

  if (VAR_3 && !(VAR_5->flags & VAR_0))
    FUNC_1 (" '%s', an alias for the", VAR_3->name);

  FUNC_1 (" command '");

  if (VAR_4)
    FUNC_1 ("%s", VAR_4->prefixname);

  FUNC_1 ("%s", VAR_5->name);

  if (VAR_3 && (VAR_5->flags & VAR_0))
    FUNC_1 ("' (%s) is deprecated.\n", VAR_3->name);
  else
    FUNC_1 ("' is deprecated.\n");





  if (VAR_3 && !(VAR_5->flags & VAR_0))
    {
      if (VAR_3->replacement)
      FUNC_1 ("Use '%s'.\n\n", VAR_3->replacement);
      else
      FUNC_1 ("No alternative known.\n\n");
     }
  else
    {
      if (VAR_5->replacement)
      FUNC_1 ("Use '%s'.\n\n", VAR_5->replacement);
      else
      FUNC_1 ("No alternative known.\n\n");
    }


  if (VAR_3)
    VAR_3->flags &= ~VAR_1;

  VAR_5->flags &= ~VAR_1;
}
