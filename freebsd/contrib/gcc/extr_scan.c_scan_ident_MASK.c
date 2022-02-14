
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ptr; scalar_t__* base; } ;
typedef TYPE_1__ sstring ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;

int
FUNC_5 (FILE *VAR_1, sstring *VAR_2, int VAR_3)
{
  VAR_2->ptr = VAR_2->base;
  if (FUNC_1 (VAR_3))
    {
      for (;;)
 {
   FUNC_3 (VAR_2, VAR_3);
   VAR_3 = FUNC_4 (VAR_1);
   if (VAR_3 == VAR_0 || ! FUNC_0 (VAR_3))
     break;
 }
    }
  FUNC_2 (VAR_2, 1);
  *VAR_2->ptr = 0;
  return VAR_3;
}
