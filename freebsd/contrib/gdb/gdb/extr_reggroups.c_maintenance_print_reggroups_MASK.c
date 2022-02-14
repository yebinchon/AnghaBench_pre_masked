
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int VAR_0 ;
 struct ui_file* FUNC_0 (char*,char*) ;
 struct ui_file* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct ui_file*) ;
 int FUNC_3 (struct ui_file*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, int VAR_3)
{
  if (VAR_2 == ((void*)0))
    FUNC_2 (VAR_0, VAR_1);
  else
    {
      struct ui_file *VAR_4 = FUNC_0 (VAR_2, "w");
      if (VAR_4 == ((void*)0))
 FUNC_1 ("maintenance print reggroups");
      FUNC_2 (VAR_0, VAR_4);
      FUNC_3 (VAR_4);
    }
}
