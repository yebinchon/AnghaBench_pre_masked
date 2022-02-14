
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int* buf; int len; } ;
typedef int LONGEST ;


 int FUNC_0 (struct agent_expr*,int) ;

__attribute__((used)) static void
FUNC_1 (struct agent_expr *VAR_0, LONGEST VAR_1, int VAR_2)
{
  int VAR_3;

  FUNC_0 (VAR_0, VAR_2);
  for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
    {
      VAR_0->buf[VAR_0->len + VAR_3] = VAR_1 & 0xff;
      VAR_1 >>= 8;
    }
  VAR_0->len += VAR_2;
}
