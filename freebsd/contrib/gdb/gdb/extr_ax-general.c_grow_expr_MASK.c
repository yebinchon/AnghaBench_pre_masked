
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int len; int size; int buf; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1 (struct agent_expr *VAR_0, int VAR_1)
{
  if (VAR_0->len + VAR_1 > VAR_0->size)
    {
      VAR_0->size *= 2;
      if (VAR_0->size < VAR_0->len + VAR_1)
 VAR_0->size = VAR_0->len + VAR_1 + 10;
      VAR_0->buf = FUNC_0 (VAR_0->buf, VAR_0->size);
    }
}
