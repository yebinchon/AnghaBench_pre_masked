
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int dummy; } ;
struct df_ref {int dummy; } ;


 struct df_ref* FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 struct rtx_iv* FUNC_2 (struct df_ref*) ;
 int FUNC_3 (struct df_ref*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct rtx_iv*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  unsigned VAR_2, VAR_3 = FUNC_1 (VAR_1);
  struct rtx_iv *VAR_4;
  struct df_ref *VAR_5;

  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    {
      VAR_5 = FUNC_0 (VAR_1, VAR_2);
      VAR_4 = FUNC_2 (VAR_5);
      if (!VAR_4)
 continue;
      FUNC_4 (VAR_4);
      FUNC_3 (VAR_5, ((void*)0));
    }

  FUNC_5 (VAR_0);
}
