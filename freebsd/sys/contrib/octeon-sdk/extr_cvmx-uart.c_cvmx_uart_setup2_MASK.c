
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct TYPE_8__ {int afce; int rts; } ;
struct TYPE_10__ {int u64; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_uart_mcr_t ;
struct TYPE_9__ {int eps; int dlab; scalar_t__ pen; scalar_t__ stop; int cls; } ;
struct TYPE_11__ {int u64; TYPE_3__ s; } ;
typedef TYPE_5__ cvmx_uart_lcr_t ;
struct TYPE_7__ {int en; int rxfr; int txfr; } ;
struct TYPE_12__ {int u64; TYPE_1__ s; } ;
typedef TYPE_6__ cvmx_uart_fcr_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int) ;

int FUNC_10(int VAR_1, int VAR_2, int VAR_3)
{
    uint16_t VAR_4;
    cvmx_uart_fcr_t VAR_5;
    cvmx_uart_mcr_t VAR_6;
    cvmx_uart_lcr_t VAR_7;

    VAR_5.u64 = 0;
    VAR_5.s.en = 1;
    VAR_5.s.rxfr = 1;
    VAR_5.s.txfr = 1;

    if (FUNC_8())
        VAR_4 = 1;
    else
        VAR_4 = ((unsigned long)(VAR_2 + 8 * VAR_3) / (unsigned long)(16 * VAR_3));

    FUNC_9(FUNC_3(VAR_1), VAR_5.u64);

    VAR_6.u64 = 0;
    if (VAR_1 == 1 && FUNC_8())
      VAR_6.s.afce = 1;
    else
      VAR_6.s.afce = 0;

    VAR_6.s.rts = 1;

    FUNC_7(FUNC_5(VAR_1));

    VAR_7.u64 = 0;
    VAR_7.s.cls = VAR_0;
    VAR_7.s.stop = 0;
    VAR_7.s.pen = 0;
    VAR_7.s.eps = 1;
    VAR_7.s.dlab = 1;
    FUNC_9(FUNC_4(VAR_1), VAR_7.u64);

    FUNC_9(FUNC_2(VAR_1), VAR_4 & 0xff);
    FUNC_9(FUNC_1(VAR_1), (VAR_4>>8) & 0xff);

    VAR_7.s.dlab = 0;
    FUNC_9(FUNC_4(VAR_1), VAR_7.u64);


    if (!FUNC_8())
    {
        uint64_t VAR_8;
        FUNC_0 (VAR_8);
        VAR_8 += (2 * VAR_4 * 16) + 10000;


        while (1)
        {
            uint64_t VAR_9;
            FUNC_0 (VAR_9);
            if (VAR_9 >= VAR_8)
                break;
        }
    }



    FUNC_9(FUNC_6(VAR_1), VAR_6.u64);
    return 0;

}
