
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct agent_expr*,int) ;
 int FUNC_1 (struct agent_expr*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct agent_expr *VAR_2, int VAR_3)
{



  if (VAR_3 > 0)
    {
      FUNC_0 (VAR_2, VAR_3);
      FUNC_1 (VAR_2, VAR_0);
    }
  else if (VAR_3 < 0)
    {
      FUNC_0 (VAR_2, -VAR_3);
      FUNC_1 (VAR_2, VAR_1);
    }
}
