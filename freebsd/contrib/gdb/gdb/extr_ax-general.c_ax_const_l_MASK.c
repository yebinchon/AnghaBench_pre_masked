
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int dummy; } ;
typedef enum agent_op { ____Placeholder_agent_op } agent_op ;
typedef int LONGEST ;






 int FUNC_0 (struct agent_expr*,int,int) ;
 int FUNC_1 (struct agent_expr*,int) ;
 int FUNC_2 (struct agent_expr*,int) ;

void
FUNC_3 (struct agent_expr *VAR_0, LONGEST VAR_1)
{
  static enum agent_op VAR_2[]
  =
  {128, 131, 130, 129};
  int VAR_3;
  int VAR_4;





  for (VAR_4 = 0, VAR_3 = 8; VAR_3 < 64; VAR_3 *= 2, VAR_4++)
    if (-((LONGEST) 1 << VAR_3) <= VAR_1 && VAR_1 < ((LONGEST) 1 << VAR_3))
      break;


  FUNC_2 (VAR_0, VAR_2[VAR_4]);



  FUNC_0 (VAR_0, VAR_1, VAR_3 / 8);


  if (VAR_1 < 0 && VAR_3 < 64)
    FUNC_1 (VAR_0, VAR_3);
}
