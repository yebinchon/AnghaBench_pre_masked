
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {scalar_t__ class; struct cmd_list_element* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct cmd_list_element* FUNC_1 (char**,struct cmd_list_element*,char*,int ,int) ;
 int FUNC_2 (struct cmd_list_element*,int ) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2, int VAR_3)
{
  struct cmd_list_element *VAR_4;
  extern struct cmd_list_element *VAR_5;

  if (VAR_2)
    {
      VAR_4 = FUNC_1 (&VAR_2, VAR_5, "", 0, 1);
      if (VAR_4->class != VAR_0)
 FUNC_0 ("Not a user command.");
      FUNC_2 (VAR_4, VAR_1);
    }
  else
    {
      for (VAR_4 = VAR_5; VAR_4; VAR_4 = VAR_4->next)
 {
   if (VAR_4->class == VAR_0)
     FUNC_2 (VAR_4, VAR_1);
 }
    }
}
