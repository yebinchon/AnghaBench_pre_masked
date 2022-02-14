
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct re_pattern_buffer {int dummy; } ;
struct cmd_list_element {char* prefixname; struct cmd_list_element** prefixlist; int * doc; int * name; struct cmd_list_element* next; } ;


 int FUNC_0 (struct ui_file*,char*,char*,int *) ;
 int FUNC_1 (char*,struct ui_file*) ;
 int FUNC_2 (struct ui_file*,int *) ;
 int FUNC_3 (struct re_pattern_buffer*,int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5 (struct ui_file *VAR_0, struct cmd_list_element *VAR_1,
    struct re_pattern_buffer *VAR_2, char *VAR_3)
{
  struct cmd_list_element *VAR_4;
  int VAR_5=1;

  for (VAR_4=VAR_1;VAR_4;VAR_4=VAR_4->next)
    {
      if (VAR_4->name != ((void*)0))
 {

   VAR_5=FUNC_3(VAR_2,VAR_4->name,FUNC_4(VAR_4->name),0,FUNC_4(VAR_4->name),((void*)0));
   if (VAR_5 >= 0)
     {




       FUNC_0 (VAR_0, "%s%s -- ", VAR_3, VAR_4->name);
       FUNC_2 (VAR_0, VAR_4->doc);
       FUNC_1 ("\n", VAR_0);
       VAR_5=0;
     }
 }
      if (VAR_4->doc != ((void*)0) && VAR_5 != 0)
 {

   if (FUNC_3(VAR_2,VAR_4->doc,FUNC_4(VAR_4->doc),0,FUNC_4(VAR_4->doc),((void*)0)) >=0)
     {




       FUNC_0 (VAR_0, "%s%s -- ", VAR_3, VAR_4->name);
       FUNC_2 (VAR_0, VAR_4->doc);
       FUNC_1 ("\n", VAR_0);
     }
 }

      if (VAR_4->prefixlist != ((void*)0))
 {



   FUNC_5 (VAR_0,*VAR_4->prefixlist,VAR_2,VAR_4->prefixname);
 }
    }
}
