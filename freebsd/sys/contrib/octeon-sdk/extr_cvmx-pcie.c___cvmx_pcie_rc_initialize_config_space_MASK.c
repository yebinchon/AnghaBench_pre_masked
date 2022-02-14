
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_60__ TYPE_9__ ;
typedef struct TYPE_59__ TYPE_8__ ;
typedef struct TYPE_58__ TYPE_7__ ;
typedef struct TYPE_57__ TYPE_6__ ;
typedef struct TYPE_56__ TYPE_5__ ;
typedef struct TYPE_55__ TYPE_4__ ;
typedef struct TYPE_54__ TYPE_3__ ;
typedef struct TYPE_53__ TYPE_30__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_29__ ;
typedef struct TYPE_50__ TYPE_28__ ;
typedef struct TYPE_49__ TYPE_27__ ;
typedef struct TYPE_48__ TYPE_26__ ;
typedef struct TYPE_47__ TYPE_25__ ;
typedef struct TYPE_46__ TYPE_24__ ;
typedef struct TYPE_45__ TYPE_23__ ;
typedef struct TYPE_44__ TYPE_22__ ;
typedef struct TYPE_43__ TYPE_21__ ;
typedef struct TYPE_42__ TYPE_20__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_19__ ;
typedef struct TYPE_39__ TYPE_18__ ;
typedef struct TYPE_38__ TYPE_17__ ;
typedef struct TYPE_37__ TYPE_16__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


struct TYPE_58__ {void* mrrs; } ;
struct TYPE_37__ {void* u64; TYPE_7__ s; } ;
typedef TYPE_16__ cvmx_sli_s2m_portx_ctl_t ;
struct TYPE_52__ {int cere; int nfere; int fere; } ;
struct TYPE_38__ {void* u32; TYPE_2__ s; } ;
typedef TYPE_17__ cvmx_pciercx_cfg075_t ;
struct TYPE_59__ {int ge; int ce; } ;
struct TYPE_39__ {void* u32; TYPE_8__ s; } ;
typedef TYPE_18__ cvmx_pciercx_cfg070_t ;
struct TYPE_41__ {int secee; int sefee; int senfee; int pmeie; } ;
struct TYPE_40__ {void* u32; TYPE_1__ s; } ;
typedef TYPE_19__ cvmx_pciercx_cfg035_t ;
struct TYPE_54__ {int hpint_en; int dlls_en; int ccint_en; } ;
struct TYPE_42__ {void* u32; TYPE_3__ s; } ;
typedef TYPE_20__ cvmx_pciercx_cfg034_t ;
struct TYPE_31__ {scalar_t__ aslpc; } ;
struct TYPE_43__ {void* u32; TYPE_10__ s; } ;
typedef TYPE_21__ cvmx_pciercx_cfg032_t ;
struct TYPE_55__ {int ro_en; int ns_en; int ce_en; int nfe_en; int fe_en; int ur_en; void* mrrs; void* mps; } ;
struct TYPE_44__ {void* u32; TYPE_4__ s; } ;
typedef TYPE_22__ cvmx_pciercx_cfg030_t ;
struct TYPE_36__ {scalar_t__ umem_limit; } ;
struct TYPE_45__ {void* u32; TYPE_15__ s; } ;
typedef TYPE_23__ cvmx_pciercx_cfg011_t ;
struct TYPE_35__ {int umem_base; } ;
struct TYPE_46__ {void* u32; TYPE_14__ s; } ;
typedef TYPE_24__ cvmx_pciercx_cfg010_t ;
struct TYPE_34__ {int lmem_base; scalar_t__ lmem_limit; } ;
struct TYPE_47__ {void* u32; TYPE_13__ s; } ;
typedef TYPE_25__ cvmx_pciercx_cfg009_t ;
struct TYPE_33__ {int mb_addr; scalar_t__ ml_addr; } ;
struct TYPE_48__ {void* u32; TYPE_12__ s; } ;
typedef TYPE_26__ cvmx_pciercx_cfg008_t ;
struct TYPE_32__ {int pbnum; int sbnum; int subbnum; } ;
struct TYPE_49__ {void* u32; TYPE_11__ s; } ;
typedef TYPE_27__ cvmx_pciercx_cfg006_t ;
struct TYPE_60__ {int msae; int me; int i_dis; int see; } ;
struct TYPE_50__ {void* u32; TYPE_9__ s; } ;
typedef TYPE_28__ cvmx_pciercx_cfg001_t ;
struct TYPE_56__ {int c1_b1_s; int c0_b1_s; void* mrrs; void* mps; } ;
struct TYPE_51__ {void* u64; TYPE_5__ s; } ;
typedef TYPE_29__ cvmx_npei_ctl_status2_t ;
struct TYPE_57__ {int molr; void* mrrs; void* mps; } ;
struct TYPE_53__ {void* u64; TYPE_6__ s; } ;
typedef TYPE_30__ cvmx_dpi_sli_prtx_cfg_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_0 ;
 int FUNC_15 (int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (int ) ;
 void* FUNC_17 (int,int ) ;
 int FUNC_18 (int,int ,void*) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (int ,void*) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static void FUNC_22(int VAR_7)
{




    {
        cvmx_pciercx_cfg030_t VAR_8;
        VAR_8 = FUNC_17(VAR_7, FUNC_7(VAR_7));
        if (FUNC_16(VAR_5))
        {
            VAR_8 = VAR_1;
            VAR_8 = VAR_3;
        }
        else
        {
            VAR_8 = VAR_2;
            VAR_8 = VAR_4;
        }
        VAR_8 = 1;
        VAR_8 = 1;
        VAR_8 = 1;
        VAR_8 = 1;
        VAR_8 = 1;
        VAR_8 = 1;
        FUNC_18(VAR_7, FUNC_7(VAR_7), VAR_8);
    }

    if (FUNC_21(VAR_6))
    {


        cvmx_npei_ctl_status2_t VAR_9;
        VAR_9 = FUNC_19(VAR_0);
        VAR_9 = VAR_1;
        VAR_9 = VAR_3;
        if (VAR_7)
            VAR_9 = 3;
        else
            VAR_9 = 3;

        FUNC_20(VAR_0, VAR_9);
    }
    else
    {


        cvmx_dpi_sli_prtx_cfg_t VAR_10;
        cvmx_sli_s2m_portx_ctl_t VAR_11;
        VAR_10.u64 = FUNC_19(FUNC_0(VAR_7));
        VAR_10.s.mps = VAR_2;
        VAR_10.s.mrrs = VAR_4;

        VAR_10.s.molr = 32;
        FUNC_20(FUNC_0(VAR_7), VAR_10.u64);

        VAR_11.u64 = FUNC_19(FUNC_15(VAR_7));
        VAR_11.s.mrrs = VAR_4;
        FUNC_20(FUNC_15(VAR_7), VAR_11.u64);
    }


    {
        cvmx_pciercx_cfg070_t VAR_12;
        VAR_12 = FUNC_17(VAR_7, FUNC_13(VAR_7));
        VAR_12 = 1;
        VAR_12 = 1;
        FUNC_18(VAR_7, FUNC_13(VAR_7), VAR_12);
    }





    {
        cvmx_pciercx_cfg001_t VAR_13;
        VAR_13 = FUNC_17(VAR_7, FUNC_1(VAR_7));
        VAR_13 = 1;
        VAR_13 = 1;
        VAR_13 = 1;
        VAR_13 = 1;
        FUNC_18(VAR_7, FUNC_1(VAR_7), VAR_13);
    }




    FUNC_18(VAR_7, FUNC_11(VAR_7), 0);

    FUNC_18(VAR_7, FUNC_12(VAR_7), 0);



    {
        cvmx_pciercx_cfg032_t VAR_14;
        VAR_14 = FUNC_17(VAR_7, FUNC_8(VAR_7));
        VAR_14 = 0;
        FUNC_18(VAR_7, FUNC_8(VAR_7), VAR_14);
    }



    {

        cvmx_pciercx_cfg006_t VAR_15;
        VAR_15 = 0;
        VAR_15 = 1;
        VAR_15 = 1;
        VAR_15 = 1;
        FUNC_18(VAR_7, FUNC_2(VAR_7), VAR_15);
    }




    {
        cvmx_pciercx_cfg008_t VAR_16;
        VAR_16 = 0;
        VAR_16 = 0x100;
        VAR_16 = 0;
        FUNC_18(VAR_7, FUNC_3(VAR_7), VAR_16);
    }





    {
        cvmx_pciercx_cfg009_t VAR_17;
        cvmx_pciercx_cfg010_t VAR_18;
        cvmx_pciercx_cfg011_t VAR_19;
        VAR_17 = FUNC_17(VAR_7, FUNC_4(VAR_7));
        VAR_18 = FUNC_17(VAR_7, FUNC_5(VAR_7));
        VAR_19 = FUNC_17(VAR_7, FUNC_6(VAR_7));
        VAR_17 = 0x100;
        VAR_17 = 0;
        VAR_18 = 0x100;
        VAR_19 = 0;
        FUNC_18(VAR_7, FUNC_4(VAR_7), VAR_17);
        FUNC_18(VAR_7, FUNC_5(VAR_7), VAR_18);
        FUNC_18(VAR_7, FUNC_6(VAR_7), VAR_19);
    }



    {
        cvmx_pciercx_cfg035_t VAR_20;
        VAR_20 = FUNC_17(VAR_7, FUNC_10(VAR_7));
        VAR_20 = 1;
        VAR_20 = 1;
        VAR_20 = 1;
        VAR_20 = 1;
        FUNC_18(VAR_7, FUNC_10(VAR_7), VAR_20);
    }



    {
        cvmx_pciercx_cfg075_t VAR_21;
        VAR_21 = FUNC_17(VAR_7, FUNC_14(VAR_7));
        VAR_21 = 1;
        VAR_21 = 1;
        VAR_21 = 1;
        FUNC_18(VAR_7, FUNC_14(VAR_7), VAR_21);
    }



    {
        cvmx_pciercx_cfg034_t VAR_22;
        VAR_22 = FUNC_17(VAR_7, FUNC_9(VAR_7));
        VAR_22 = 1;
        VAR_22 = 1;
        VAR_22 = 1;
        FUNC_18(VAR_7, FUNC_9(VAR_7), VAR_22);
    }
}
