
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_16__ {scalar_t__ qlm_cfg; int lane_swp; int lnk_enb; } ;
struct TYPE_19__ {void* u64; TYPE_3__ s; } ;
typedef TYPE_6__ cvmx_pescx_ctl_status_t ;
struct TYPE_15__ {int m_cpl_len_err; } ;
struct TYPE_20__ {void* u32; TYPE_2__ s; } ;
typedef TYPE_7__ cvmx_pciercx_cfg455_t ;
struct TYPE_14__ {int lme; } ;
struct TYPE_21__ {void* u32; TYPE_1__ s; } ;
typedef TYPE_8__ cvmx_pciercx_cfg452_t ;
struct TYPE_18__ {int rtl; } ;
struct TYPE_22__ {void* u32; TYPE_5__ s; } ;
typedef TYPE_9__ cvmx_pciercx_cfg448_t ;
struct TYPE_17__ {scalar_t__ dlla; int nlw; } ;
struct TYPE_12__ {TYPE_4__ s; void* u32; } ;
typedef TYPE_10__ cvmx_pciercx_cfg032_t ;
struct TYPE_13__ {int board_type; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,void*) ;
 void* FUNC_12 (int ) ;
 TYPE_11__* FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,void*) ;

__attribute__((used)) static int FUNC_16(int VAR_5)
{
    uint64_t VAR_6;
    cvmx_pescx_ctl_status_t VAR_7;
    cvmx_pciercx_cfg452_t VAR_8;
    cvmx_pciercx_cfg032_t VAR_9;
    cvmx_pciercx_cfg448_t VAR_10;


    VAR_8 = FUNC_10(VAR_5, FUNC_2(VAR_5));
    VAR_7.u64 = FUNC_12(FUNC_4(VAR_5));
    if (VAR_7.s.qlm_cfg == 0)
    {

        VAR_8 = 0xf;
    }
    else
    {

        VAR_8 = 0x7;
    }
    FUNC_11(VAR_5, FUNC_2(VAR_5), VAR_8);




    if (FUNC_5(VAR_4))
    {
        cvmx_pciercx_cfg455_t VAR_11;
        VAR_11 = FUNC_10(VAR_5, FUNC_3(VAR_5));
        VAR_11 = 1;
        FUNC_11(VAR_5, FUNC_3(VAR_5), VAR_11);
    }


    if (FUNC_5(VAR_2) && (VAR_5 == 1))
    {
      switch (FUNC_13()->board_type)
      {




 default:
   VAR_7.s.lane_swp = 1;
   break;
      }
      FUNC_15(FUNC_4(VAR_5),VAR_7.u64);
    }


    VAR_7.u64 = FUNC_12(FUNC_4(VAR_5));
    VAR_7.s.lnk_enb = 1;
    FUNC_15(FUNC_4(VAR_5), VAR_7.u64);


    if (FUNC_5(VAR_3))
        FUNC_6(0);


    VAR_6 = FUNC_9();
    do
    {
        if (FUNC_9() - VAR_6 > 100*FUNC_7(VAR_0))
        {
            FUNC_8("PCIe: Port %d link timeout\n", VAR_5);
            return -1;
        }
        FUNC_14(50000);
        VAR_9 = FUNC_10(VAR_5, FUNC_0(VAR_5));
    } while (VAR_9 == 0);


    FUNC_15(VAR_1, FUNC_12(VAR_1));






    VAR_10 = FUNC_10(VAR_5, FUNC_1(VAR_5));
    switch (VAR_9)
    {
        case 1:
            VAR_10 = 1677;
            break;
        case 2:
            VAR_10 = 867;
            break;
        case 4:
            VAR_10 = 462;
            break;
        case 8:
            VAR_10 = 258;
            break;
    }
    FUNC_11(VAR_5, FUNC_1(VAR_5), VAR_10);

    return 0;
}
