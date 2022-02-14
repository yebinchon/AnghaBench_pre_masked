
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char* prefixname; scalar_t__ type; char* name; struct cmd_list_element** prefixlist; int abbrev_flag; struct cmd_list_element* next; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,int,struct cmd_list_element*) ;
 struct cleanup* FUNC_2 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

void
FUNC_5 (struct cmd_list_element *VAR_2, int VAR_3, char *VAR_4)
{
  struct cleanup *VAR_5;

  VAR_5 = FUNC_2 (VAR_1, "showlist");
  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {


      if (VAR_2->prefixlist && !VAR_2->abbrev_flag)
 {
   struct cleanup *VAR_6
     = FUNC_2 (VAR_1, "optionlist");
   FUNC_3 (VAR_1, "prefix", VAR_2->prefixname + 5);
   FUNC_5 (*VAR_2->prefixlist, VAR_3, VAR_2->prefixname + 5);

   FUNC_0 (VAR_6);
 }
      if (VAR_2->type == VAR_0)
 {
   struct cleanup *VAR_7
     = FUNC_2 (VAR_1, "option");
   FUNC_4 (VAR_1, VAR_4);
   FUNC_3 (VAR_1, "name", VAR_2->name);
   FUNC_4 (VAR_1, ":  ");
   FUNC_1 ((char *) ((void*)0), VAR_3, VAR_2);

   FUNC_0 (VAR_7);
 }
    }

  FUNC_0 (VAR_5);
}
