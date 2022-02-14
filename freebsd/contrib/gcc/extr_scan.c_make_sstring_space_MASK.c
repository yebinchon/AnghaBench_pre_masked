
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; int base; int limit; } ;
typedef TYPE_1__ sstring ;


 int FUNC_0 (int,int) ;

void
FUNC_1 (sstring *VAR_0, int VAR_1)
{
  int VAR_2 = VAR_0->ptr - VAR_0->base;
  int VAR_3 = VAR_0->limit - VAR_0->base;
  int VAR_4 = VAR_2 + VAR_1 + 100;

  if (VAR_4 <= VAR_3)
    return;

  VAR_0->base = FUNC_0 (VAR_0->base, VAR_4);
  VAR_0->ptr = VAR_0->base + VAR_3;
  VAR_0->limit = VAR_0->base + VAR_4;
}
