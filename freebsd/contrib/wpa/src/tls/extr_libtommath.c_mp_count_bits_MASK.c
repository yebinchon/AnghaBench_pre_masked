
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (mp_int * VAR_1)
{
  int VAR_2;
  mp_digit VAR_3;


  if (VAR_1->used == 0) {
    return 0;
  }


  VAR_2 = (VAR_1->used - 1) * VAR_0;


  VAR_3 = VAR_1->dp[VAR_1->used - 1];
  while (VAR_3 > ((mp_digit) 0)) {
    ++VAR_2;
    VAR_3 >>= ((mp_digit) 1);
  }
  return VAR_2;
}
