
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*,struct ui_file*,int,int ,int) ;
 int FUNC_1 (char*,struct ui_file*) ;
 int FUNC_2 (struct type*,struct ui_file*,int,int) ;
 int * FUNC_3 (char*,char) ;

void
FUNC_4 (struct type *VAR_0, char *VAR_1, struct ui_file *VAR_2,
   int VAR_3, int VAR_4)
{
  int VAR_5;

  FUNC_2 (VAR_0, VAR_2, VAR_3, VAR_4);

  if (VAR_1 != ((void*)0) && *VAR_1 != '\0')
    {
      FUNC_1 (" ", VAR_2);
      FUNC_1 (VAR_1, VAR_2);
    }




  VAR_5 = FUNC_3 (VAR_1, '(') != ((void*)0);
  FUNC_0 (VAR_0, VAR_2, VAR_3, 0, VAR_5);
}
