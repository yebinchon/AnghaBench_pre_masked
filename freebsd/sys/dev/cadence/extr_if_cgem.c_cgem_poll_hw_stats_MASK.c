
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int tx_bytes; int rx_bytes; int rx_udp_csum_errs; int rx_tcp_csum_errs; int rx_ip_hdr_csum_errs; int rx_overrun_errs; int rx_resource_errs; int rx_align_errs; int rx_symbol_errs; int rx_frames_length_errs; int rx_frames_fcs_errs; int rx_frames_jabber; int rx_frames_oversize; int rx_frames_undersize; int rx_frames_1024to1536b; int rx_frames_512to1023b; int rx_frames_256to511b; int rx_frames_128to255b; int rx_frames_65to127b; int rx_frames_64b; int rx_frames_pause; int rx_frames_multi; int rx_frames_bcast; int rx_frames; int tx_carrier_sense_errs; int tx_deferred_frames; int tx_late_collisn; int tx_excsv_collisn; int tx_multi_collisn; int tx_single_collisn; int tx_under_runs; int tx_frames_1024to1536b; int tx_frames_512to1023b; int tx_frames_256to511b; int tx_frames_128to255b; int tx_frames_65to127b; int tx_frames_64b; int tx_frames_pause; int tx_frames_multi; int tx_frames_bcast; int tx_frames; } ;
struct cgem_softc {TYPE_1__ stats; int ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgem_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ FUNC_1 (struct cgem_softc*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct cgem_softc *VAR_44)
{
 uint32_t VAR_45;

 FUNC_0(VAR_44);

 VAR_44->stats.tx_bytes += FUNC_1(VAR_44, VAR_30);
 VAR_44->stats.tx_bytes += (uint64_t)FUNC_1(VAR_44, VAR_31) << 32;

 VAR_44->stats.tx_frames += FUNC_1(VAR_44, VAR_20);
 VAR_44->stats.tx_frames_bcast += FUNC_1(VAR_44, VAR_2);
 VAR_44->stats.tx_frames_multi += FUNC_1(VAR_44, VAR_27);
 VAR_44->stats.tx_frames_pause += FUNC_1(VAR_44, VAR_34);
 VAR_44->stats.tx_frames_64b += FUNC_1(VAR_44, VAR_16);
 VAR_44->stats.tx_frames_65to127b += FUNC_1(VAR_44, VAR_18);
 VAR_44->stats.tx_frames_128to255b += FUNC_1(VAR_44, VAR_10);
 VAR_44->stats.tx_frames_256to511b += FUNC_1(VAR_44, VAR_12);
 VAR_44->stats.tx_frames_512to1023b += FUNC_1(VAR_44, VAR_14);
 VAR_44->stats.tx_frames_1024to1536b += FUNC_1(VAR_44, VAR_8);
 VAR_44->stats.tx_under_runs += FUNC_1(VAR_44, VAR_40);

 VAR_45 = FUNC_1(VAR_44, VAR_38);
 VAR_44->stats.tx_single_collisn += VAR_45;
 FUNC_2(VAR_44->ifp, VAR_43, VAR_45);
 VAR_45 = FUNC_1(VAR_44, VAR_25);
 VAR_44->stats.tx_multi_collisn += VAR_45;
 FUNC_2(VAR_44->ifp, VAR_43, VAR_45);
 VAR_45 = FUNC_1(VAR_44, VAR_5);
 VAR_44->stats.tx_excsv_collisn += VAR_45;
 FUNC_2(VAR_44->ifp, VAR_43, VAR_45);
 VAR_45 = FUNC_1(VAR_44, VAR_23);
 VAR_44->stats.tx_late_collisn += VAR_45;
 FUNC_2(VAR_44->ifp, VAR_43, VAR_45);

 VAR_44->stats.tx_deferred_frames += FUNC_1(VAR_44, VAR_4);
 VAR_44->stats.tx_carrier_sense_errs += FUNC_1(VAR_44, VAR_3);

 VAR_44->stats.rx_bytes += FUNC_1(VAR_44, VAR_28);
 VAR_44->stats.rx_bytes += (uint64_t)FUNC_1(VAR_44, VAR_29) << 32;

 VAR_44->stats.rx_frames += FUNC_1(VAR_44, VAR_19);
 VAR_44->stats.rx_frames_bcast += FUNC_1(VAR_44, VAR_1);
 VAR_44->stats.rx_frames_multi += FUNC_1(VAR_44, VAR_26);
 VAR_44->stats.rx_frames_pause += FUNC_1(VAR_44, VAR_33);
 VAR_44->stats.rx_frames_64b += FUNC_1(VAR_44, VAR_15);
 VAR_44->stats.rx_frames_65to127b += FUNC_1(VAR_44, VAR_17);
 VAR_44->stats.rx_frames_128to255b += FUNC_1(VAR_44, VAR_9);
 VAR_44->stats.rx_frames_256to511b += FUNC_1(VAR_44, VAR_11);
 VAR_44->stats.rx_frames_512to1023b += FUNC_1(VAR_44, VAR_13);
 VAR_44->stats.rx_frames_1024to1536b += FUNC_1(VAR_44, VAR_7);
 VAR_44->stats.rx_frames_undersize += FUNC_1(VAR_44, VAR_42);
 VAR_44->stats.rx_frames_oversize += FUNC_1(VAR_44, VAR_32);
 VAR_44->stats.rx_frames_jabber += FUNC_1(VAR_44, VAR_22);
 VAR_44->stats.rx_frames_fcs_errs += FUNC_1(VAR_44, VAR_6);
 VAR_44->stats.rx_frames_length_errs += FUNC_1(VAR_44, VAR_24);
 VAR_44->stats.rx_symbol_errs += FUNC_1(VAR_44, VAR_37);
 VAR_44->stats.rx_align_errs += FUNC_1(VAR_44, VAR_0);
 VAR_44->stats.rx_resource_errs += FUNC_1(VAR_44, VAR_36);
 VAR_44->stats.rx_overrun_errs += FUNC_1(VAR_44, VAR_35);
 VAR_44->stats.rx_ip_hdr_csum_errs += FUNC_1(VAR_44, VAR_21);
 VAR_44->stats.rx_tcp_csum_errs += FUNC_1(VAR_44, VAR_39);
 VAR_44->stats.rx_udp_csum_errs += FUNC_1(VAR_44, VAR_41);
}
