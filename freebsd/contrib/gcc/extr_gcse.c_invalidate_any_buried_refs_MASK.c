
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {int invalid; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 struct ls_expr* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_0)
{
  const char * VAR_1;
  int VAR_2, VAR_3;
  struct ls_expr * VAR_4;


  if (FUNC_3 (VAR_0) && FUNC_8 (VAR_0))
    {
      VAR_4 = FUNC_7 (VAR_0);
      VAR_4->invalid = 1;
    }


  VAR_1 = FUNC_1 (FUNC_0 (VAR_0));

  for (VAR_2 = FUNC_2 (FUNC_0 (VAR_0)) - 1; VAR_2 >= 0; VAR_2--)
    {
      if (VAR_1[VAR_2] == 'e')
 FUNC_9 (FUNC_4 (VAR_0, VAR_2));
      else if (VAR_1[VAR_2] == 'E')
 for (VAR_3 = FUNC_6 (VAR_0, VAR_2) - 1; VAR_3 >= 0; VAR_3--)
   FUNC_9 (FUNC_5 (VAR_0, VAR_2, VAR_3));
    }
}
