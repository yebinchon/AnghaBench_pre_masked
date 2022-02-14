
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ptr; scalar_t__* base; } ;
typedef TYPE_1__ sstring ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5 (sstring *VAR_1, int VAR_2)
{
  VAR_1->ptr = VAR_1->base;
  if (FUNC_2 (VAR_2))
    {
      for (;;)
 {
   FUNC_4 (VAR_1, VAR_2);
   VAR_2 = FUNC_0 ();
   if (VAR_2 == VAR_0 || !(FUNC_1 (VAR_2)))
     break;
 }
    }
  FUNC_3 (VAR_1, 1);
  *VAR_1->ptr = 0;
  return VAR_2;
}
