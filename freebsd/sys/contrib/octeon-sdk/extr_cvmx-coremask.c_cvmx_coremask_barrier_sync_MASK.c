
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_1__* s; } ;
struct TYPE_3__ {unsigned int coremask; int exit; unsigned int checkin; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_1 ;

void FUNC_5(unsigned int VAR_2)
{
    int VAR_3;
    unsigned int VAR_4;

    FUNC_0(VAR_2 != 0);

    FUNC_3(&VAR_1.lock);

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

        if (VAR_1.s[VAR_3].coremask == 0) {

            VAR_1.s[VAR_3].coremask = VAR_2;
        }

        if (VAR_1.s[VAR_3].coremask == VAR_2) {

            VAR_4 = VAR_1.s[VAR_3].exit + 1;

            VAR_1.s[VAR_3].checkin |= FUNC_1(FUNC_2());
            if (VAR_1.s[VAR_3].checkin == VAR_2) {
                VAR_1.s[VAR_3].checkin = 0;
                VAR_1.s[VAR_3].exit = VAR_4;
            }
            FUNC_4(&VAR_1.lock);

            while (VAR_1.s[VAR_3].exit != VAR_4)
                ;

            return;
        }
    }


    FUNC_4(&VAR_1.lock);
    FUNC_0(0);
}
