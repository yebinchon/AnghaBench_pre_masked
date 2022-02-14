
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint64_t ;
typedef scalar_t__ cvmx_nand_status_t ;
struct TYPE_16__ {int cmd_data; int four; int clen3; int clen2; int clen1; } ;
struct TYPE_17__ {int adr_byte_num; int adr_bytes_l; int adr_bytes_h; int five; int alen4; int alen3; int alen2; int alen1; } ;
struct TYPE_15__ {int two; int n; } ;
struct TYPE_14__ {int chip; int one; int three; int width; } ;
struct TYPE_13__ {int fifteen; int one; } ;
struct TYPE_12__ {int one; int tim_par7; int tim_par6; int tim_par5; int tim_par4; int tim_par3; int tim_par2; int tim_par1; int tim_mult; } ;
struct TYPE_18__ {TYPE_5__ cle; TYPE_6__ ale; TYPE_4__ wait; TYPE_3__ chip_en; TYPE_2__ bus_acq; TYPE_1__ set_tm_par; } ;
typedef TYPE_7__ cvmx_nand_cmd_t ;
typedef int cmd ;
struct TYPE_11__ {int flags; int page_size; int * clen; int * alen; int * tim_par; int tim_mult; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_10__* VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_7__) ;
 int FUNC_5 (TYPE_7__*,int ,int) ;

__attribute__((used)) static inline cvmx_nand_status_t FUNC_6(int VAR_4, int VAR_5, int VAR_6, uint64_t VAR_7, int VAR_8)
{
    cvmx_nand_status_t VAR_9;
    cvmx_nand_cmd_t VAR_10;

    FUNC_0();


    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.set_tm_par.one = 1;
    VAR_10.set_tm_par.tim_mult = VAR_3[VAR_4].tim_mult;

    VAR_10.set_tm_par.tim_par1 = VAR_3[VAR_4].tim_par[1];
    VAR_10.set_tm_par.tim_par2 = VAR_3[VAR_4].tim_par[2];
    VAR_10.set_tm_par.tim_par3 = VAR_3[VAR_4].tim_par[3];
    VAR_10.set_tm_par.tim_par4 = VAR_3[VAR_4].tim_par[4];
    VAR_10.set_tm_par.tim_par5 = VAR_3[VAR_4].tim_par[5];
    VAR_10.set_tm_par.tim_par6 = VAR_3[VAR_4].tim_par[6];
    VAR_10.set_tm_par.tim_par7 = VAR_3[VAR_4].tim_par[7];
    VAR_9 = FUNC_4(VAR_10);
    if (VAR_9)
        FUNC_1(VAR_9);


    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.bus_acq.fifteen = 15;
    VAR_10.bus_acq.one = 1;
    VAR_9 = FUNC_4(VAR_10);
    if (VAR_9)
        FUNC_1(VAR_9);


    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.chip_en.chip = VAR_4;
    VAR_10.chip_en.one = 1;
    VAR_10.chip_en.three = 3;
    VAR_10.chip_en.width = (VAR_3[VAR_4].flags & VAR_1) ? 2 : 1;
    VAR_9 = FUNC_4(VAR_10);
    if (VAR_9)
        FUNC_1(VAR_9);






    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.wait.two = 2;
    VAR_10.wait.n = 1;
    if (FUNC_4(VAR_10))
        FUNC_1(VAR_0);


    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.cle.cmd_data = VAR_5;
    VAR_10.cle.clen1 = VAR_3[VAR_4].clen[0];
    VAR_10.cle.clen2 = VAR_3[VAR_4].clen[1];
    VAR_10.cle.clen3 = VAR_3[VAR_4].clen[2];
    VAR_10.cle.four = 4;
    VAR_9 = FUNC_4(VAR_10);
    if (VAR_9)
        FUNC_1(VAR_9);


    if (VAR_6)
    {
        FUNC_5(&VAR_10, 0, sizeof(VAR_10));
        VAR_10.ale.adr_byte_num = VAR_6;
        if (VAR_6 < FUNC_2(VAR_4))
        {
            VAR_10.ale.adr_bytes_l = VAR_7;
            VAR_10.ale.adr_bytes_h = VAR_7 >> 32;
        }
        else
        {
            int VAR_11 = FUNC_3(VAR_4);
            int VAR_12 = ((VAR_11 + 7) >> 3) << 3;
            int VAR_13 = VAR_7 & (VAR_3[VAR_4].page_size-1);
            int VAR_14 = VAR_7 >> VAR_11;
            VAR_10.ale.adr_bytes_l = VAR_13 + (VAR_14 << VAR_12);
            VAR_10.ale.adr_bytes_h = VAR_14 >> (32 - VAR_12);
        }
        VAR_10.ale.alen1 = VAR_3[VAR_4].alen[0];
        VAR_10.ale.alen2 = VAR_3[VAR_4].alen[1];
        VAR_10.ale.alen3 = VAR_3[VAR_4].alen[2];
        VAR_10.ale.alen4 = VAR_3[VAR_4].alen[3];
        VAR_10.ale.five = 5;
        VAR_9 = FUNC_4(VAR_10);
        if (VAR_9)
            FUNC_1(VAR_9);
    }


    if (VAR_8)
    {
        FUNC_5(&VAR_10, 0, sizeof(VAR_10));
        VAR_10.cle.cmd_data = VAR_8;
        VAR_10.cle.clen1 = VAR_3[VAR_4].clen[0];
        VAR_10.cle.clen2 = VAR_3[VAR_4].clen[1];
        VAR_10.cle.clen3 = VAR_3[VAR_4].clen[2];
        VAR_10.cle.four = 4;
        VAR_9 = FUNC_4(VAR_10);
        if (VAR_9)
            FUNC_1(VAR_9);
    }

    FUNC_1(VAR_2);
}
