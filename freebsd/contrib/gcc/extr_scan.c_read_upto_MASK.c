
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ptr; } ;
typedef TYPE_1__ sstring ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

int
FUNC_3 (FILE *VAR_1, sstring *VAR_2, int VAR_3)
{
  int VAR_4;

  for (;;)
    {
      VAR_4 = FUNC_2 (VAR_1);
      if (VAR_4 == VAR_0 || VAR_4 == VAR_3)
 break;
      FUNC_1 (VAR_2, VAR_4);
    }
  FUNC_0 (VAR_2, 1);
  *VAR_2->ptr = 0;
  return VAR_4;
}
