
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aux; int kbd; } ;
typedef int KBDC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(KBDC VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9 = 0;




    int VAR_10 = 2;

    for (VAR_7 = VAR_6; VAR_7 > 0; ) {
        if ((VAR_8 = FUNC_5(FUNC_2(VAR_5))) & VAR_1) {
     FUNC_0(VAR_0);
            (void)FUNC_4(FUNC_2(VAR_5));






     VAR_7 = VAR_6;
 } else {
     VAR_7 -= VAR_10;
 }






        VAR_9 += (VAR_10 * 1000);
        if (VAR_9 == (VAR_10 * 1000000))
     return;

 FUNC_0(VAR_10*1000);
    }





    FUNC_1(&FUNC_2(VAR_5)->kbd);
    FUNC_1(&FUNC_2(VAR_5)->aux);
}
