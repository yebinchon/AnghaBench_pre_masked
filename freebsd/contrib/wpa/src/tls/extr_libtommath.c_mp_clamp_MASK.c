
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used; scalar_t__* dp; int sign; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (mp_int * VAR_1)
{



  while (VAR_1->used > 0 && VAR_1->dp[VAR_1->used - 1] == 0) {
    --(VAR_1->used);
  }


  if (VAR_1->used == 0) {
    VAR_1->sign = VAR_0;
  }
}
