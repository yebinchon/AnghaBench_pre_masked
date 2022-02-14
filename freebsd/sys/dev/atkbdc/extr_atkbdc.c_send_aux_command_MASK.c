
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aux; } ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int) ;

int
FUNC_4(KBDC VAR_2, int VAR_3)
{
    int VAR_4 = VAR_0;
    int VAR_5 = -1;

    while (VAR_4-- > 0) {
 if (!FUNC_3(VAR_2, VAR_3))
     continue;
 FUNC_0(&FUNC_1(VAR_2)->aux);
        VAR_5 = FUNC_2(FUNC_1(VAR_2));
        if (VAR_5 == VAR_1)
         break;
    }
    return VAR_5;
}
