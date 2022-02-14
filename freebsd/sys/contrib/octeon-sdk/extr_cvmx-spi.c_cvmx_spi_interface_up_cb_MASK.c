
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


struct TYPE_15__ {int inf_en; } ;
struct TYPE_19__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_6__ cvmx_stxx_com_ctl_t ;
struct TYPE_14__ {int inf_en; } ;
struct TYPE_20__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_7__ cvmx_srxx_com_ctl_t ;
typedef int cvmx_spi_mode_t ;
struct TYPE_18__ {int cnt; } ;
struct TYPE_21__ {void* u64; TYPE_5__ s; } ;
typedef TYPE_8__ cvmx_gmxx_rxx_jabber_t ;
struct TYPE_16__ {int len; } ;
struct TYPE_22__ {void* u64; TYPE_3__ s; } ;
typedef TYPE_9__ cvmx_gmxx_rxx_frm_min_t ;
struct TYPE_17__ {int len; } ;
struct TYPE_12__ {void* u64; TYPE_4__ s; } ;
typedef TYPE_10__ cvmx_gmxx_rxx_frm_max_t ;
struct TYPE_13__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 void* FUNC_6 (int ) ;
 TYPE_11__* FUNC_7 () ;
 int FUNC_8 (int ,void*) ;

int FUNC_9(int VAR_3, cvmx_spi_mode_t VAR_4)
{
    cvmx_gmxx_rxx_frm_min_t VAR_5;
    cvmx_gmxx_rxx_frm_max_t VAR_6;
    cvmx_gmxx_rxx_jabber_t VAR_7;

    if (VAR_4 & VAR_1) {
        cvmx_srxx_com_ctl_t VAR_8;
        VAR_8.u64 = FUNC_6(FUNC_3(VAR_3));
        VAR_8.s.inf_en = 1;
        FUNC_8 (FUNC_3(VAR_3), VAR_8.u64);
        FUNC_5 ("SPI%d: Rx is now up\n", VAR_3);
    }

    if (VAR_4 & VAR_2) {
        cvmx_stxx_com_ctl_t VAR_9;
        VAR_9.u64 = FUNC_6(FUNC_4(VAR_3));
        VAR_9.s.inf_en = 1;
        FUNC_8 (FUNC_4(VAR_3), VAR_9.u64);
        FUNC_5 ("SPI%d: Tx is now up\n", VAR_3);
    }

    VAR_5.u64 = 0;
    VAR_5.s.len = 64;







    FUNC_8(FUNC_1(0,VAR_3), VAR_5.u64);
    VAR_6.u64 = 0;
    VAR_6.s.len = 64*1024 - 4;
    FUNC_8(FUNC_0(0,VAR_3), VAR_6.u64);
    VAR_7.u64 = 0;
    VAR_7.s.cnt = 64*1024 - 4;
    FUNC_8(FUNC_2(0,VAR_3), VAR_7.u64);

    return 0;
}
