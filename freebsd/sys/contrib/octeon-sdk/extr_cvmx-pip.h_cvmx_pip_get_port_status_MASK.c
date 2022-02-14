
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_67__ TYPE_9__ ;
typedef struct TYPE_66__ TYPE_8__ ;
typedef struct TYPE_65__ TYPE_7__ ;
typedef struct TYPE_64__ TYPE_6__ ;
typedef struct TYPE_63__ TYPE_5__ ;
typedef struct TYPE_62__ TYPE_4__ ;
typedef struct TYPE_61__ TYPE_3__ ;
typedef struct TYPE_60__ TYPE_33__ ;
typedef struct TYPE_59__ TYPE_32__ ;
typedef struct TYPE_58__ TYPE_31__ ;
typedef struct TYPE_57__ TYPE_30__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_29__ ;
typedef struct TYPE_54__ TYPE_28__ ;
typedef struct TYPE_53__ TYPE_27__ ;
typedef struct TYPE_52__ TYPE_26__ ;
typedef struct TYPE_51__ TYPE_25__ ;
typedef struct TYPE_50__ TYPE_24__ ;
typedef struct TYPE_49__ TYPE_23__ ;
typedef struct TYPE_48__ TYPE_22__ ;
typedef struct TYPE_47__ TYPE_21__ ;
typedef struct TYPE_46__ TYPE_20__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_19__ ;
typedef struct TYPE_43__ TYPE_18__ ;
typedef struct TYPE_42__ TYPE_17__ ;
typedef struct TYPE_41__ TYPE_16__ ;
typedef struct TYPE_40__ TYPE_15__ ;
typedef struct TYPE_39__ TYPE_14__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;
typedef struct TYPE_36__ TYPE_11__ ;
typedef struct TYPE_35__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_38__ {int pkts; } ;
struct TYPE_42__ {TYPE_13__ s; void* u64; } ;
typedef TYPE_17__ cvmx_pip_stat_inb_pktsx_t ;
struct TYPE_39__ {int octs; } ;
struct TYPE_43__ {TYPE_14__ s; void* u64; } ;
typedef TYPE_18__ cvmx_pip_stat_inb_octsx_t ;
struct TYPE_40__ {int errs; } ;
struct TYPE_44__ {TYPE_15__ s; void* u64; } ;
typedef TYPE_19__ cvmx_pip_stat_inb_errsx_t ;
struct TYPE_41__ {int rdclr; } ;
struct TYPE_46__ {scalar_t__ u64; TYPE_16__ s; } ;
typedef TYPE_20__ cvmx_pip_stat_ctl_t ;
struct TYPE_35__ {int jabber; int oversz; } ;
struct TYPE_47__ {TYPE_10__ s; void* u64; } ;
typedef TYPE_21__ cvmx_pip_stat9_prtx_t ;
struct TYPE_67__ {int frag; int undersz; } ;
struct TYPE_48__ {TYPE_9__ s; void* u64; } ;
typedef TYPE_22__ cvmx_pip_stat8_prtx_t ;
struct TYPE_66__ {int fcs; int h1519; } ;
struct TYPE_49__ {TYPE_8__ s; void* u64; } ;
typedef TYPE_23__ cvmx_pip_stat7_prtx_t ;
struct TYPE_65__ {int h1024to1518; int h512to1023; } ;
struct TYPE_50__ {TYPE_7__ s; void* u64; } ;
typedef TYPE_24__ cvmx_pip_stat6_prtx_t ;
struct TYPE_64__ {int h256to511; int h128to255; } ;
struct TYPE_51__ {TYPE_6__ s; void* u64; } ;
typedef TYPE_25__ cvmx_pip_stat5_prtx_t ;
struct TYPE_63__ {int h65to127; int h64; } ;
struct TYPE_52__ {TYPE_5__ s; void* u64; } ;
typedef TYPE_26__ cvmx_pip_stat4_prtx_t ;
struct TYPE_62__ {int bcst; int mcst; } ;
struct TYPE_53__ {TYPE_4__ s; void* u64; } ;
typedef TYPE_27__ cvmx_pip_stat3_prtx_t ;
struct TYPE_61__ {int pkts; int raw; } ;
struct TYPE_54__ {TYPE_3__ s; void* u64; } ;
typedef TYPE_28__ cvmx_pip_stat2_prtx_t ;
struct TYPE_56__ {int octs; } ;
struct TYPE_55__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_29__ cvmx_pip_stat1_prtx_t ;
struct TYPE_37__ {int bcast; int mcast; } ;
struct TYPE_57__ {TYPE_12__ s; void* u64; } ;
typedef TYPE_30__ cvmx_pip_stat11_x_t ;
struct TYPE_36__ {int bcast; int mcast; } ;
struct TYPE_58__ {TYPE_11__ s; void* u64; } ;
typedef TYPE_31__ cvmx_pip_stat10_x_t ;
struct TYPE_45__ {int drp_pkts; int drp_octs; } ;
struct TYPE_59__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_32__ cvmx_pip_stat0_prtx_t ;
struct TYPE_60__ {int inb_errors; int inb_octets; int inb_packets; int bcast_l3_red_packets; int mcast_l3_red_packets; int bcast_l2_red_packets; int mcast_l2_red_packets; int oversize_crc_packets; int oversize_packets; int runt_crc_packets; int runt_packets; int fcs_align_err_packets; int len_1519_max_packets; int len_1024_1518_packets; int len_512_1023_packets; int len_256_511_packets; int len_128_255_packets; int len_65_127_packets; int len_64_packets; int broadcast_packets; int multicast_packets; int packets; int pci_raw_packets; int octets; int dropped_packets; int dropped_octets; } ;
typedef TYPE_33__ cvmx_pip_port_status_t ;


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
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int VAR_0 ;
 int FUNC_24 (int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (int) ;
 int FUNC_37 (int) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int) ;
 int FUNC_40 (int) ;
 int FUNC_41 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_42 (int ) ;
 int FUNC_43 (int) ;
 int FUNC_44 (int) ;
 int FUNC_45 (int,int) ;
 void* FUNC_46 (int ) ;
 int FUNC_47 (int ,scalar_t__) ;
 scalar_t__ FUNC_48 (int ) ;

__attribute__((used)) static inline void FUNC_49(uint64_t VAR_6, uint64_t VAR_7, cvmx_pip_port_status_t *VAR_8)
{
    cvmx_pip_stat_ctl_t VAR_9;
    cvmx_pip_stat0_prtx_t VAR_10;
    cvmx_pip_stat1_prtx_t VAR_11;
    cvmx_pip_stat2_prtx_t VAR_12;
    cvmx_pip_stat3_prtx_t VAR_13;
    cvmx_pip_stat4_prtx_t VAR_14;
    cvmx_pip_stat5_prtx_t VAR_15;
    cvmx_pip_stat6_prtx_t VAR_16;
    cvmx_pip_stat7_prtx_t VAR_17;
    cvmx_pip_stat8_prtx_t VAR_18;
    cvmx_pip_stat9_prtx_t VAR_19;
    cvmx_pip_stat10_x_t VAR_20;
    cvmx_pip_stat11_x_t VAR_21;
    cvmx_pip_stat_inb_pktsx_t VAR_22;
    cvmx_pip_stat_inb_octsx_t VAR_23;
    cvmx_pip_stat_inb_errsx_t VAR_24;
    int VAR_25 = FUNC_44(VAR_6);
    int VAR_26 = FUNC_43(VAR_6);

    VAR_9.u64 = 0;
    VAR_9.s.rdclr = VAR_7;
    FUNC_47(VAR_0, VAR_9.u64);

    if (FUNC_48(VAR_5))
    {
        int VAR_27 = FUNC_45(VAR_25, VAR_26);



        VAR_10 = FUNC_46(FUNC_1(VAR_27));
        VAR_11 = FUNC_46(FUNC_7(VAR_27));
        VAR_12 = FUNC_46(FUNC_9(VAR_27));
        VAR_13 = FUNC_46(FUNC_11(VAR_27));
        VAR_14 = FUNC_46(FUNC_13(VAR_27));
        VAR_15 = FUNC_46(FUNC_15(VAR_27));
        VAR_16 = FUNC_46(FUNC_17(VAR_27));
        VAR_17 = FUNC_46(FUNC_19(VAR_27));
        VAR_18 = FUNC_46(FUNC_21(VAR_27));
        VAR_19 = FUNC_46(FUNC_23(VAR_27));
        VAR_20 = FUNC_46(FUNC_3(VAR_27));
        VAR_21 = FUNC_46(FUNC_5(VAR_27));
    }
    else
    {
        if (VAR_6 >= 40)
        {
            VAR_10 = FUNC_46(FUNC_30(VAR_6));
            VAR_11 = FUNC_46(FUNC_33(VAR_6));
            VAR_12 = FUNC_46(FUNC_34(VAR_6));
            VAR_13 = FUNC_46(FUNC_35(VAR_6));
            VAR_14 = FUNC_46(FUNC_36(VAR_6));
            VAR_15 = FUNC_46(FUNC_37(VAR_6));
            VAR_16 = FUNC_46(FUNC_38(VAR_6));
            VAR_17 = FUNC_46(FUNC_39(VAR_6));
            VAR_18 = FUNC_46(FUNC_40(VAR_6));
            VAR_19 = FUNC_46(FUNC_41(VAR_6));
            if (FUNC_42(VAR_3))
            {
                VAR_20 = FUNC_46(FUNC_31(VAR_6));
                VAR_21 = FUNC_46(FUNC_32(VAR_6));
            }
        }
        else
        {
            VAR_10 = FUNC_46(FUNC_0(VAR_6));
            VAR_11 = FUNC_46(FUNC_6(VAR_6));
            VAR_12 = FUNC_46(FUNC_8(VAR_6));
            VAR_13 = FUNC_46(FUNC_10(VAR_6));
            VAR_14 = FUNC_46(FUNC_12(VAR_6));
            VAR_15 = FUNC_46(FUNC_14(VAR_6));
            VAR_16 = FUNC_46(FUNC_16(VAR_6));
            VAR_17 = FUNC_46(FUNC_18(VAR_6));
            VAR_18 = FUNC_46(FUNC_20(VAR_6));
            VAR_19 = FUNC_46(FUNC_22(VAR_6));
            if (FUNC_42(VAR_1)
                || FUNC_42(VAR_2)
                || FUNC_42(VAR_3)
                || FUNC_42(VAR_4))
            {
                VAR_20 = FUNC_46(FUNC_2(VAR_6));
                VAR_21 = FUNC_46(FUNC_4(VAR_6));
            }
        }
    }
    if (FUNC_48(VAR_5))
    {
        int VAR_28 = FUNC_45(VAR_25, VAR_26);

        VAR_22.u64 = FUNC_46(FUNC_29(VAR_28));
        VAR_23.u64 = FUNC_46(FUNC_27(VAR_28));
        VAR_24.u64 = FUNC_46(FUNC_25(VAR_28));
    }
    else
    {
        VAR_22.u64 = FUNC_46(FUNC_28(VAR_6));
        VAR_23.u64 = FUNC_46(FUNC_26(VAR_6));
        VAR_24.u64 = FUNC_46(FUNC_24(VAR_6));
    }

    VAR_8->dropped_octets = VAR_10;
    VAR_8->dropped_packets = VAR_10;
    VAR_8->octets = VAR_11;
    VAR_8->pci_raw_packets = VAR_12;
    VAR_8->packets = VAR_12;
    VAR_8->multicast_packets = VAR_13;
    VAR_8->broadcast_packets = VAR_13;
    VAR_8->len_64_packets = VAR_14;
    VAR_8->len_65_127_packets = VAR_14;
    VAR_8->len_128_255_packets = VAR_15;
    VAR_8->len_256_511_packets = VAR_15;
    VAR_8->len_512_1023_packets = VAR_16;
    VAR_8->len_1024_1518_packets = VAR_16;
    VAR_8->len_1519_max_packets = VAR_17;
    VAR_8->fcs_align_err_packets = VAR_17;
    VAR_8->runt_packets = VAR_18;
    VAR_8->runt_crc_packets = VAR_18;
    VAR_8->oversize_packets = VAR_19;
    VAR_8->oversize_crc_packets = VAR_19;
    if (FUNC_42(VAR_1)
        || FUNC_42(VAR_2)
        || FUNC_42(VAR_3)
        || FUNC_42(VAR_4))
    {
        VAR_8->mcast_l2_red_packets = VAR_20;
        VAR_8->bcast_l2_red_packets = VAR_20;
        VAR_8->mcast_l3_red_packets = VAR_21;
        VAR_8->bcast_l3_red_packets = VAR_21;
    }
    VAR_8->inb_packets = VAR_22.s.pkts;
    VAR_8->inb_octets = VAR_23.s.octs;
    VAR_8->inb_errors = VAR_24.s.errs;
}
