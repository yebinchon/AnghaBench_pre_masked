
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int waitm; int ale; int wr_hld; int rd_hld; int we; int oe; int ce; int adr; scalar_t__ pause; scalar_t__ wait; scalar_t__ page; scalar_t__ pages; scalar_t__ pagem; } ;
struct TYPE_7__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_mio_boot_reg_timx_t ;
struct TYPE_5__ {int tim_mult; int en; int width; scalar_t__ orbit; scalar_t__ oe_ext; scalar_t__ we_ext; scalar_t__ sam; scalar_t__ rd_dly; scalar_t__ dmack; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_mio_boot_reg_cfgx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(int VAR_1, int VAR_2, int VAR_3)
{
    cvmx_mio_boot_reg_cfgx_t VAR_4;
    cvmx_mio_boot_reg_timx_t VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;



    VAR_9 = 1;


    switch(VAR_3) {
        case 6:

            VAR_9 = 0;
            VAR_10 = 10;
            VAR_11 = 55;
            VAR_12 = 20;
            VAR_13 = 5;
            VAR_14 = 5;
            VAR_15 = 20;
            VAR_16 = 10;
            break;
        case 5:

            VAR_9 = 0;
            VAR_10 = 15;
            VAR_11 = 65;
            VAR_12 = 25;
            VAR_13 = 5;
            VAR_14 = 5;
            VAR_15 = 20;
            VAR_16 = 10;
            break;
        case 4:
            VAR_10 = 25;
            VAR_11 = 70;
            VAR_12 = 25;
            VAR_13 = 10;
            VAR_14 = 5;
            VAR_15 = 30;
            VAR_16 = 10;
            break;
        case 3:
            VAR_10 = 30;
            VAR_11 = 80;
            VAR_12 = 70;
            VAR_13 = 10;
            VAR_14 = 5;
            VAR_15 = 30;
            VAR_16 = 10;
            break;
        case 2:
            VAR_10 = 30;
            VAR_11 = 100;
            VAR_12 = 0;
            VAR_13 = 15;
            VAR_14 = 5;
            VAR_15 = 30;
            VAR_16 = 10;
            break;
        case 1:
            VAR_10 = 50;
            VAR_11 = 125;
            VAR_12 = 0;
            VAR_13 = 20;
            VAR_14 = 5;
            VAR_15 = 30;
            VAR_16 = 15;
            break;
        default:
            VAR_10 = 70;
            VAR_11 = 165;
            VAR_12 = 0;
            VAR_13 = 30;
            VAR_14 = 5;
            VAR_15 = 30;
            VAR_16 = 20;
            break;
    }

    VAR_7 = FUNC_2(FUNC_3(VAR_0), 1000000);



    VAR_10 = FUNC_2(VAR_10 * VAR_7, 1000);
    if (VAR_10)
        VAR_10--;
    VAR_11 = FUNC_2(VAR_11 * VAR_7, 1000);
    if (VAR_11)
        VAR_11--;
    VAR_12 = FUNC_2(VAR_12 * VAR_7, 1000);
    if (VAR_12)
        VAR_12--;
    VAR_13 = FUNC_2(VAR_13 * VAR_7, 1000);
    if (VAR_13)
        VAR_13--;
    VAR_14 = FUNC_2(VAR_14 * VAR_7, 1000);
    if (VAR_14)
        VAR_14--;
    VAR_15 = FUNC_2(VAR_15 * VAR_7, 1000);
    if (VAR_15)
        VAR_15--;
    VAR_16 = FUNC_2(VAR_16 * VAR_7, 1000);
    if (VAR_16)
        VAR_16--;




    VAR_8 = 1;
    while (VAR_11 >= 1<<6)
    {
        VAR_10 = FUNC_2(VAR_10, 2);
        VAR_11 = FUNC_2(VAR_11, 2);
        VAR_12 = FUNC_2(VAR_12, 2);
        VAR_13 = FUNC_2(VAR_13, 2);
        VAR_14 = FUNC_2(VAR_14, 2);
        VAR_15 = FUNC_2(VAR_15, 2);
        VAR_16 = FUNC_2(VAR_16, 2);
        VAR_8 *= 2;
    }

    VAR_6 = VAR_1;
    do {
        VAR_4.u64 = FUNC_4(FUNC_0(VAR_6));
        VAR_4.s.dmack = 0;
        switch(VAR_8) {
            case 1:
                VAR_4.s.tim_mult = 1;
                break;
            case 2:
                VAR_4.s.tim_mult = 2;
                break;
            case 4:
                VAR_4.s.tim_mult = 0;
                break;
            case 8:
            default:
                VAR_4.s.tim_mult = 3;
                break;
        }
        VAR_4.s.rd_dly = 0;
        VAR_4.s.sam = 0;
        VAR_4.s.we_ext = 0;
        VAR_4.s.oe_ext = 0;
        VAR_4.s.en = 1;
        VAR_4.s.orbit = 0;
        VAR_4.s.width = 1;
        FUNC_5(FUNC_0(VAR_6), VAR_4.u64);
        if(VAR_6 == VAR_1)
            VAR_6 = VAR_2;
        else
            VAR_6 = VAR_1;
    } while(VAR_6 != VAR_1);

    VAR_5.u64 = 0;
    VAR_5.s.pagem = 0;
    VAR_5.s.waitm = VAR_9;
    VAR_5.s.pages = 0;
    VAR_5.s.ale = 8;
    VAR_5.s.page = 0;
    VAR_5.s.wait = 0;
    VAR_5.s.pause = 0;
    VAR_5.s.wr_hld = VAR_16;
    VAR_5.s.rd_hld = VAR_16;
    VAR_5.s.we = VAR_11;
    VAR_5.s.oe = VAR_11;
    VAR_5.s.ce = VAR_10;
    VAR_5.s.adr = 1;


    FUNC_5(FUNC_1(VAR_1), VAR_5.u64);
    FUNC_5(FUNC_1(VAR_2), VAR_5.u64);
}
