
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ptr; } ;
typedef TYPE_1__ sstring ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3 (sstring *VAR_1, int VAR_2)
{
  int VAR_3;
  for (;;)
    {
      VAR_3 = FUNC_0 ();
      if (VAR_3 == VAR_0 || VAR_3 == VAR_2)
 break;
      FUNC_2 (VAR_1, VAR_3);
    }
  FUNC_1 (VAR_1, 1);
  *VAR_1->ptr = 0;
  return VAR_3;
}
