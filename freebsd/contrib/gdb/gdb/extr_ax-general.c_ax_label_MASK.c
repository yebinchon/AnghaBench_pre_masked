
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int* buf; } ;


 int FUNC_0 (char*) ;

void
FUNC_1 (struct agent_expr *VAR_0, int VAR_1, int VAR_2)
{


  if (VAR_2 < 0 || VAR_2 >= 0xffff)
    FUNC_0 ("GDB bug: ax-general.c (ax_label): label target out of range");

  VAR_0->buf[VAR_1] = (VAR_2 >> 8) & 0xff;
  VAR_0->buf[VAR_1 + 1] = VAR_2 & 0xff;
}
