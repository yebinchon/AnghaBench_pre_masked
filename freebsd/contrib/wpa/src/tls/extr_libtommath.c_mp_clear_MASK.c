
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int used; int alloc; int sign; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1 (mp_int * VAR_1)
{
  int VAR_2;


  if (VAR_1->dp != ((void*)0)) {

    for (VAR_2 = 0; VAR_2 < VAR_1->used; VAR_2++) {
        VAR_1->dp[VAR_2] = 0;
    }


    FUNC_0(VAR_1->dp);


    VAR_1->dp = ((void*)0);
    VAR_1->alloc = VAR_1->used = 0;
    VAR_1->sign = VAR_0;
  }
}
