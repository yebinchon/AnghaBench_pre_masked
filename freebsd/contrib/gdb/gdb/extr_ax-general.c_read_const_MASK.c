
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int len; int* buf; } ;
typedef int LONGEST ;


 int FUNC_0 (char*) ;

__attribute__((used)) static LONGEST
FUNC_1 (struct agent_expr *VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3;
  LONGEST VAR_4 = 0;


  if (VAR_1 + VAR_2 > VAR_0->len)
    FUNC_0 ("GDB bug: ax-general.c (read_const): incomplete constant");

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    VAR_4 = (VAR_4 << 8) | VAR_0->buf[VAR_1 + VAR_3];

  return VAR_4;
}
