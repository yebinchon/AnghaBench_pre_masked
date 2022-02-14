
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {scalar_t__ bufcnt; int buf; int bufp; } ;


 int VAR_0 ;

int
FUNC_0 (struct serial *VAR_1)
{
  if (VAR_1->bufcnt >= 0)
    {
      VAR_1->bufcnt = 0;
      VAR_1->bufp = VAR_1->buf;
      return 0;
    }
  else
    return VAR_0;
}
