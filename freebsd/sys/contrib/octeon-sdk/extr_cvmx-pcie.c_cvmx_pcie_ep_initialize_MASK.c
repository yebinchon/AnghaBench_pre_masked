
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_43__ {void* mrrs; } ;
struct TYPE_26__ {void* u64; TYPE_8__ s; } ;
typedef TYPE_13__ cvmx_sli_s2m_portx_ctl_t ;
struct TYPE_25__ {scalar_t__ ba; } ;
struct TYPE_24__ {scalar_t__ ba; } ;
struct TYPE_23__ {int port; scalar_t__ rtype; scalar_t__ wtype; scalar_t__ esw; scalar_t__ esr; scalar_t__ nmerge; } ;
struct TYPE_27__ {void* u64; TYPE_12__ cn63xx; TYPE_11__ cn68xx; TYPE_10__ s; } ;
typedef TYPE_14__ cvmx_sli_mem_access_subidx_t ;
struct TYPE_40__ {int ro_en; int ns_en; int ce_en; int nfe_en; int fe_en; int ur_en; void* mrrs; void* mps; } ;
struct TYPE_28__ {int u32; TYPE_5__ s; } ;
typedef TYPE_15__ cvmx_pcieepx_cfg030_t ;
struct TYPE_44__ {int port; int nmerge; scalar_t__ ba; scalar_t__ row; scalar_t__ ror; scalar_t__ nsw; scalar_t__ nsr; scalar_t__ esw; scalar_t__ esr; } ;
struct TYPE_29__ {void* u64; TYPE_9__ s; } ;
typedef TYPE_16__ cvmx_npei_mem_access_subidx_t ;
struct TYPE_33__ {scalar_t__ host_mode; } ;
struct TYPE_30__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_17__ cvmx_npei_ctl_status_t ;
struct TYPE_41__ {void* mrrs; void* mps; } ;
struct TYPE_31__ {void* u64; TYPE_6__ s; } ;
typedef TYPE_18__ cvmx_npei_ctl_status2_t ;
struct TYPE_37__ {scalar_t__ prtmode; int host_mode; } ;
struct TYPE_32__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_19__ cvmx_mio_rst_ctlx_t ;
struct TYPE_42__ {int molr; void* mrrs; void* mps; } ;
struct TYPE_34__ {void* u64; TYPE_7__ s; } ;
typedef TYPE_20__ cvmx_dpi_sli_prtx_cfg_t ;
struct TYPE_38__ {int txbypass; int txdeemph; int txmargin; } ;
struct TYPE_35__ {void* u64; TYPE_3__ s; } ;
typedef TYPE_21__ cvmx_ciu_qlm1_t ;
struct TYPE_39__ {int txbypass; int txdeemph; int txmargin; } ;
struct TYPE_36__ {void* u64; TYPE_4__ s; } ;
typedef TYPE_22__ cvmx_ciu_qlm0_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ,int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,void*) ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(int VAR_13)
{
    if (FUNC_12(VAR_12))
    {
        cvmx_npei_ctl_status_t VAR_14;
        VAR_14.u64 = FUNC_10(VAR_2);
        if (VAR_14.s.host_mode)
            return -1;
    }
    else
    {
        cvmx_mio_rst_ctlx_t VAR_15;
        int VAR_16;
        VAR_15.u64 = FUNC_10(FUNC_1(VAR_13));
        VAR_16 = (FUNC_7(VAR_9) ? (VAR_15.s.prtmode != 0) : VAR_15.s.host_mode);
        if (VAR_16)
            return -1;
    }


    if (FUNC_7(VAR_10))
    {
        if (VAR_13)
        {
            cvmx_ciu_qlm1_t VAR_17;
            VAR_17.u64 = FUNC_10(VAR_1);
            VAR_17.s.txbypass = 1;
            VAR_17.s.txdeemph = 5;
            VAR_17.s.txmargin = 0x17;
            FUNC_11(VAR_1, VAR_17.u64);
        }
        else
        {
            cvmx_ciu_qlm0_t VAR_18;
            VAR_18.u64 = FUNC_10(VAR_0);
            VAR_18.s.txbypass = 1;
            VAR_18.s.txdeemph = 5;
            VAR_18.s.txmargin = 0x17;
            FUNC_11(VAR_0, VAR_18.u64);
        }
    }


    FUNC_9(VAR_13, FUNC_2(VAR_13), 0x6);





    {
        cvmx_pcieepx_cfg030_t VAR_19;
        VAR_19 = FUNC_8(VAR_13, FUNC_3(VAR_13));
        if (FUNC_7(VAR_8))
        {
            VAR_19 = VAR_4;
            VAR_19 = VAR_6;
        }
        else
        {
            VAR_19 = VAR_5;
            VAR_19 = VAR_7;
        }
        VAR_19 = 1;
        VAR_19 = 1;
        VAR_19 = 1;
        VAR_19 = 1;
        VAR_19 = 1;
        VAR_19 = 1;
        FUNC_9(VAR_13, FUNC_3(VAR_13), VAR_19);
    }

    if (FUNC_12(VAR_12))
    {


        cvmx_npei_ctl_status2_t VAR_20;
        VAR_20 = FUNC_10(VAR_3);
        VAR_20 = VAR_4;
        VAR_20 = VAR_6;
        FUNC_11(VAR_3, VAR_20);
    }
    else
    {


        cvmx_dpi_sli_prtx_cfg_t VAR_21;
        cvmx_sli_s2m_portx_ctl_t VAR_22;
        VAR_21.u64 = FUNC_10(FUNC_0(VAR_13));
        VAR_21.s.mps = VAR_5;
        VAR_21.s.mrrs = VAR_7;

        VAR_21.s.molr = 32;
        FUNC_11(FUNC_0(VAR_13), VAR_21.u64);

        VAR_22.u64 = FUNC_10(FUNC_6(VAR_13));
        VAR_22.s.mrrs = VAR_7;
        FUNC_11(FUNC_6(VAR_13), VAR_22.u64);
    }


    if (FUNC_12(VAR_12))
    {
        cvmx_npei_mem_access_subidx_t VAR_23;
        VAR_23.u64 = 0;
        VAR_23.s.port = VAR_13;
        VAR_23.s.nmerge = 1;
        VAR_23.s.esr = 0;
        VAR_23.s.esw = 0;
        VAR_23.s.nsr = 0;
        VAR_23.s.nsw = 0;
        VAR_23.s.ror = 0;
        VAR_23.s.row = 0;
        VAR_23.s.ba = 0;
        FUNC_11(FUNC_4(12), VAR_23.u64);
    }
    else
    {
        cvmx_sli_mem_access_subidx_t VAR_24;
        VAR_24.u64 = 0;
        VAR_24.s.port = VAR_13;
        VAR_24.s.nmerge = 0;
        VAR_24.s.esr = 0;
        VAR_24.s.esw = 0;
        VAR_24.s.wtype = 0;
        VAR_24.s.rtype = 0;

        if (FUNC_7(VAR_11))
            VAR_24.cn68xx.ba = 0;
        else
            VAR_24.cn63xx.ba = 0;
        FUNC_11(FUNC_5(12 + VAR_13*4), VAR_24.u64);
    }
    return 0;
}
