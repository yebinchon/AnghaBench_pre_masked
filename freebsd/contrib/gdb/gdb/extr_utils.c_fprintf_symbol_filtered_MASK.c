
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef enum language { ____Placeholder_language } language ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ui_file*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (struct ui_file *VAR_1, char *VAR_2,
    enum language VAR_3, int VAR_4)
{
  char *VAR_5;

  if (VAR_2 != ((void*)0))
    {

      if (!VAR_0)
 {
   FUNC_0 (VAR_2, VAR_1);
 }
      else
 {
   VAR_5 = FUNC_2 (FUNC_1 (VAR_3), VAR_2, VAR_4);
   FUNC_0 (VAR_5 ? VAR_5 : VAR_2, VAR_1);
   if (VAR_5 != ((void*)0))
     {
       FUNC_3 (VAR_5);
     }
 }
    }
}
