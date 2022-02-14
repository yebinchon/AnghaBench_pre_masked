
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; char* base; } ;
typedef TYPE_1__ sstring ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2 (sstring *VAR_0, sstring *VAR_1)
{
  char *VAR_2, *VAR_3;
  int VAR_4 = FUNC_1 (VAR_1);

  FUNC_0 (VAR_0, VAR_4 + 1);
  VAR_2 = VAR_0->ptr;
  VAR_3 = VAR_1->base;
  while (--VAR_4 >= 0) *VAR_2++ = *VAR_3++;
  VAR_0->ptr = VAR_2;
  *VAR_2 = 0;
}
