
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {struct df_ref* next_ref; } ;
typedef int FILE ;


 int FUNC_0 (struct df_ref*) ;
 int FUNC_1 (struct df_ref*) ;
 int FUNC_2 (struct df_ref*) ;
 scalar_t__ FUNC_3 (struct df_ref*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,char*,...) ;

void
FUNC_6 (struct df_ref *VAR_0, bool VAR_1, FILE *VAR_2)
{
  FUNC_5 (VAR_2, "{ ");
  while (VAR_0)
    {
      FUNC_5 (VAR_2, "%c%d(%d) ",
        FUNC_3 (VAR_0) ? 'd' : 'u',
        FUNC_1 (VAR_0),
        FUNC_2 (VAR_0));
      if (VAR_1)
 FUNC_4 (FUNC_0 (VAR_0), VAR_2);
      VAR_0 = VAR_0->next_ref;
    }
  FUNC_5 (VAR_2, "}");
}
