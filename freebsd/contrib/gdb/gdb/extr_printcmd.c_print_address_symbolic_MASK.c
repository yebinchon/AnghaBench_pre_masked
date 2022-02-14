
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int,char**,int*,char**,int*,int*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (struct ui_file*,char*,...) ;
 int FUNC_3 (char*,struct ui_file*) ;
 int VAR_0 ;
 struct cleanup* FUNC_4 (int ,char**) ;
 scalar_t__ VAR_1 ;

void
FUNC_5 (CORE_ADDR VAR_2, struct ui_file *VAR_3, int VAR_4,
   char *VAR_5)
{
  char *VAR_6 = ((void*)0);
  char *VAR_7 = ((void*)0);
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;


  struct cleanup *VAR_11 = FUNC_4 (VAR_0, &VAR_6);
  FUNC_4 (VAR_0, &VAR_7);

  if (FUNC_0 (VAR_2, VAR_4, &VAR_6, &VAR_9, &VAR_7, &VAR_10, &VAR_8))
    {
      FUNC_1 (VAR_11);
      return;
    }

  FUNC_3 (VAR_5, VAR_3);
  if (VAR_8)
    FUNC_3 ("<*", VAR_3);
  else
    FUNC_3 ("<", VAR_3);
  FUNC_3 (VAR_6, VAR_3);
  if (VAR_9 != 0)
    FUNC_2 (VAR_3, "+%u", (unsigned int) VAR_9);



  if (VAR_1 && VAR_7 != ((void*)0))
    {
      if (VAR_10 != -1)
 FUNC_2 (VAR_3, " at %s:%d", VAR_7, VAR_10);
      else
 FUNC_2 (VAR_3, " in %s", VAR_7);
    }
  if (VAR_8)
    FUNC_3 ("*>", VAR_3);
  else
    FUNC_3 (">", VAR_3);

  FUNC_1 (VAR_11);
}
