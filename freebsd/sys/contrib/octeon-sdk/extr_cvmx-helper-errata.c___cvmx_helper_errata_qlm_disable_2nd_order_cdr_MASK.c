
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ select; } ;
struct TYPE_4__ {TYPE_1__ s; int u64; } ;
typedef TYPE_2__ cvmx_ciu_qlm_jtgd_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(int VAR_1)
{
    int VAR_2;

    cvmx_ciu_qlm_jtgd_t VAR_3;
    VAR_3.u64 = FUNC_4(VAR_0);
    if (VAR_3.s.select != 0)
        return;

    FUNC_0();

    for (VAR_2=0; VAR_2<4; VAR_2++)
    {



        FUNC_2(VAR_1, 63 - 0 + 1);

        FUNC_1(VAR_1, 67 - 64 + 1, 3);

        FUNC_2(VAR_1, 76 - 68 + 1);

        FUNC_1(VAR_1, 77 - 77 + 1, 1);

        FUNC_2(VAR_1, 267 - 78 + 1);
    }
    FUNC_3(VAR_1);
}
