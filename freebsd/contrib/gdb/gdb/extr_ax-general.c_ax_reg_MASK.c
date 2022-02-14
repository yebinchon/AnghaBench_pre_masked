
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int* buf; size_t len; } ;
typedef int reg ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct agent_expr*,int) ;

void
FUNC_2 (struct agent_expr *VAR_1, int VAR_2)
{

  if (VAR_2 < 0 || VAR_2 > 0xffff)
    FUNC_0 ("GDB bug: ax-general.c (ax_reg): register number out of range");
  FUNC_1 (VAR_1, 3);
  VAR_1->buf[VAR_1->len] = VAR_0;
  VAR_1->buf[VAR_1->len + 1] = (VAR_2 >> 8) & 0xff;
  VAR_1->buf[VAR_1->len + 2] = (VAR_2) & 0xff;
  VAR_1->len += 3;
}
