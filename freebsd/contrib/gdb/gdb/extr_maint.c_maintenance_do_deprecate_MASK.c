
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int flags; char* replacement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct cmd_list_element**,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_3, int VAR_4)
{

  struct cmd_list_element *VAR_5 = ((void*)0);
  struct cmd_list_element *VAR_6 = ((void*)0);
  struct cmd_list_element *VAR_7 = ((void*)0);

  char *VAR_8 = ((void*)0);
  char *VAR_9 = ((void*)0);
  int VAR_10;
  char *VAR_11 = ((void*)0);

  if (VAR_3 == ((void*)0))
    return;

  if (!FUNC_0 (VAR_3, &VAR_5, &VAR_6, &VAR_7))
    {
      FUNC_1 ("Can't find command '%s' to deprecate.\n", VAR_3);
      return;
    }

  if (VAR_4)
    {

      VAR_8 = FUNC_2 (VAR_3, '\"');
      if (VAR_8 != ((void*)0))
 {
   VAR_8++;
   VAR_9 = FUNC_3 (VAR_8, '\"');
   if (VAR_9 != ((void*)0))
     {
       VAR_10 = VAR_9 - VAR_8;
       VAR_8[VAR_10] = '\0';
       VAR_11 = FUNC_5 (VAR_8);
     }
 }
    }

  if (!VAR_8 || !VAR_9)
    VAR_11 = ((void*)0);







  if (VAR_5)
    {

      if (VAR_5->flags & VAR_2)
 FUNC_4 (VAR_5->replacement);

      if (VAR_4)
 VAR_5->flags |= (VAR_1 | VAR_0);
      else
 VAR_5->flags &= ~(VAR_1 | VAR_0);
      VAR_5->replacement = VAR_11;
      VAR_5->flags |= VAR_2;
      return;
    }
  else if (VAR_7)
    {
      if (VAR_7->flags & VAR_2)
 FUNC_4 (VAR_7->replacement);

      if (VAR_4)
 VAR_7->flags |= (VAR_1 | VAR_0);
      else
 VAR_7->flags &= ~(VAR_1 | VAR_0);
      VAR_7->replacement = VAR_11;
      VAR_7->flags |= VAR_2;
      return;
    }
}
