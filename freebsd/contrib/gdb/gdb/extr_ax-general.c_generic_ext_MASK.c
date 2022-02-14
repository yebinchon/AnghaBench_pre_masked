
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int* buf; int len; } ;
typedef enum agent_op { ____Placeholder_agent_op } agent_op ;
typedef int LONGEST ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct agent_expr*,int) ;

__attribute__((used)) static void
FUNC_2 (struct agent_expr *VAR_0, enum agent_op VAR_1, int VAR_2)
{

  if (VAR_2 < 0 || VAR_2 > 255)
    FUNC_0 ("GDB bug: ax-general.c (generic_ext): bit count out of range");

  if (sizeof (LONGEST) * 8 > 255)
    FUNC_0 ("GDB bug: ax-general.c (generic_ext): opcode has inadequate range");

  FUNC_1 (VAR_0, 2);
  VAR_0->buf[VAR_0->len++] = VAR_1;
  VAR_0->buf[VAR_0->len++] = VAR_2;
}
