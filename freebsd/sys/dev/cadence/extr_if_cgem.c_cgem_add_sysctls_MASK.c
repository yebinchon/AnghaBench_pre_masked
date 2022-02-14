
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int rx_udp_csum_errs; int rx_tcp_csum_errs; int rx_ip_hdr_csum_errs; int rx_overrun_errs; int rx_resource_errs; int rx_align_errs; int rx_symbol_errs; int rx_frames_length_errs; int rx_frames_fcs_errs; int rx_frames_jabber; int rx_frames_oversize; int rx_frames_undersize; int rx_frames_1024to1536b; int rx_frames_512to1023b; int rx_frames_256to511b; int rx_frames_128to255b; int rx_frames_65to127b; int rx_frames_64b; int rx_frames_pause; int rx_frames_multi; int rx_frames_bcast; int rx_frames; int rx_bytes; int tx_carrier_sense_errs; int tx_deferred_frames; int tx_late_collisn; int tx_excsv_collisn; int tx_multi_collisn; int tx_single_collisn; int tx_under_runs; int tx_frames_1024to1536b; int tx_frames_512to1023b; int tx_frames_256to511b; int tx_frames_128to255b; int tx_frames_65to127b; int tx_frames_64b; int tx_frames_pause; int tx_frames_multi; int tx_frames_bcast; int tx_frames; int tx_bytes; } ;
struct cgem_softc {TYPE_1__ stats; int txdefragfails; int txdefrags; int txdmamapfails; int txfull; int rxdmamapfails; int rxnobufs; int rxoverruns; int rxhangwar; int rxbufs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 struct cgem_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_3)
{
 struct cgem_softc *VAR_4 = FUNC_5(VAR_3);
 struct sysctl_ctx_list *VAR_5;
 struct sysctl_oid_list *VAR_6;
 struct sysctl_oid *VAR_7;

 VAR_5 = FUNC_6(VAR_3);
 VAR_6 = FUNC_4(FUNC_7(VAR_3));

 FUNC_0(VAR_5, VAR_6, VAR_2, "rxbufs", VAR_1,
         &VAR_4->rxbufs, 0,
         "Number receive buffers to provide");

 FUNC_0(VAR_5, VAR_6, VAR_2, "rxhangwar", VAR_1,
         &VAR_4->rxhangwar, 0,
         "Enable receive hang work-around");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_rxoverruns", VAR_0,
   &VAR_4->rxoverruns, 0,
   "Receive overrun events");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_rxnobufs", VAR_0,
   &VAR_4->rxnobufs, 0,
   "Receive buf queue empty events");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_rxdmamapfails", VAR_0,
   &VAR_4->rxdmamapfails, 0,
   "Receive DMA map failures");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_txfull", VAR_0,
   &VAR_4->txfull, 0,
   "Transmit ring full events");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_txdmamapfails", VAR_0,
   &VAR_4->txdmamapfails, 0,
   "Transmit DMA map failures");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_txdefrags", VAR_0,
   &VAR_4->txdefrags, 0,
   "Transmit m_defrag() calls");

 FUNC_2(VAR_5, VAR_6, VAR_2, "_txdefragfails", VAR_0,
   &VAR_4->txdefragfails, 0,
   "Transmit m_defrag() failures");

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_2, "stats", VAR_0,
          ((void*)0), "GEM statistics");
 VAR_6 = FUNC_4(VAR_7);

 FUNC_3(VAR_5, VAR_6, VAR_2, "tx_bytes", VAR_0,
    &VAR_4->stats.tx_bytes, "Total bytes transmitted");

 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames", VAR_0,
   &VAR_4->stats.tx_frames, 0, "Total frames transmitted");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_bcast", VAR_0,
   &VAR_4->stats.tx_frames_bcast, 0,
   "Number broadcast frames transmitted");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_multi", VAR_0,
   &VAR_4->stats.tx_frames_multi, 0,
   "Number multicast frames transmitted");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_pause",
   VAR_0, &VAR_4->stats.tx_frames_pause, 0,
   "Number pause frames transmitted");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_64b", VAR_0,
   &VAR_4->stats.tx_frames_64b, 0,
   "Number frames transmitted of size 64 bytes or less");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_65to127b", VAR_0,
   &VAR_4->stats.tx_frames_65to127b, 0,
   "Number frames transmitted of size 65-127 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_128to255b",
   VAR_0, &VAR_4->stats.tx_frames_128to255b, 0,
   "Number frames transmitted of size 128-255 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_256to511b",
   VAR_0, &VAR_4->stats.tx_frames_256to511b, 0,
   "Number frames transmitted of size 256-511 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_512to1023b",
   VAR_0, &VAR_4->stats.tx_frames_512to1023b, 0,
   "Number frames transmitted of size 512-1023 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_frames_1024to1536b",
   VAR_0, &VAR_4->stats.tx_frames_1024to1536b, 0,
   "Number frames transmitted of size 1024-1536 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_under_runs",
   VAR_0, &VAR_4->stats.tx_under_runs, 0,
   "Number transmit under-run events");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_single_collisn",
   VAR_0, &VAR_4->stats.tx_single_collisn, 0,
   "Number single-collision transmit frames");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_multi_collisn",
   VAR_0, &VAR_4->stats.tx_multi_collisn, 0,
   "Number multi-collision transmit frames");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_excsv_collisn",
   VAR_0, &VAR_4->stats.tx_excsv_collisn, 0,
   "Number excessive collision transmit frames");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_late_collisn",
   VAR_0, &VAR_4->stats.tx_late_collisn, 0,
   "Number late-collision transmit frames");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_deferred_frames",
   VAR_0, &VAR_4->stats.tx_deferred_frames, 0,
   "Number deferred transmit frames");
 FUNC_2(VAR_5, VAR_6, VAR_2, "tx_carrier_sense_errs",
   VAR_0, &VAR_4->stats.tx_carrier_sense_errs, 0,
   "Number carrier sense errors on transmit");

 FUNC_3(VAR_5, VAR_6, VAR_2, "rx_bytes", VAR_0,
    &VAR_4->stats.rx_bytes, "Total bytes received");

 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames", VAR_0,
   &VAR_4->stats.rx_frames, 0, "Total frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_bcast",
   VAR_0, &VAR_4->stats.rx_frames_bcast, 0,
   "Number broadcast frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_multi",
   VAR_0, &VAR_4->stats.rx_frames_multi, 0,
   "Number multicast frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_pause",
   VAR_0, &VAR_4->stats.rx_frames_pause, 0,
   "Number pause frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_64b",
   VAR_0, &VAR_4->stats.rx_frames_64b, 0,
   "Number frames received of size 64 bytes or less");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_65to127b",
   VAR_0, &VAR_4->stats.rx_frames_65to127b, 0,
   "Number frames received of size 65-127 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_128to255b",
   VAR_0, &VAR_4->stats.rx_frames_128to255b, 0,
   "Number frames received of size 128-255 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_256to511b",
   VAR_0, &VAR_4->stats.rx_frames_256to511b, 0,
   "Number frames received of size 256-511 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_512to1023b",
   VAR_0, &VAR_4->stats.rx_frames_512to1023b, 0,
   "Number frames received of size 512-1023 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_1024to1536b",
   VAR_0, &VAR_4->stats.rx_frames_1024to1536b, 0,
   "Number frames received of size 1024-1536 bytes");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_undersize",
   VAR_0, &VAR_4->stats.rx_frames_undersize, 0,
   "Number undersize frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_oversize",
   VAR_0, &VAR_4->stats.rx_frames_oversize, 0,
   "Number oversize frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_jabber",
   VAR_0, &VAR_4->stats.rx_frames_jabber, 0,
   "Number jabber frames received");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_fcs_errs",
   VAR_0, &VAR_4->stats.rx_frames_fcs_errs, 0,
   "Number frames received with FCS errors");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_length_errs",
   VAR_0, &VAR_4->stats.rx_frames_length_errs, 0,
   "Number frames received with length errors");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_symbol_errs",
   VAR_0, &VAR_4->stats.rx_symbol_errs, 0,
   "Number receive symbol errors");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_align_errs",
   VAR_0, &VAR_4->stats.rx_align_errs, 0,
   "Number receive alignment errors");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_resource_errs",
   VAR_0, &VAR_4->stats.rx_resource_errs, 0,
   "Number frames received when no rx buffer available");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_overrun_errs",
   VAR_0, &VAR_4->stats.rx_overrun_errs, 0,
   "Number frames received but not copied due to "
   "receive overrun");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_ip_hdr_csum_errs",
   VAR_0, &VAR_4->stats.rx_ip_hdr_csum_errs, 0,
   "Number frames received with IP header checksum "
   "errors");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_tcp_csum_errs",
   VAR_0, &VAR_4->stats.rx_tcp_csum_errs, 0,
   "Number frames received with TCP checksum errors");
 FUNC_2(VAR_5, VAR_6, VAR_2, "rx_frames_udp_csum_errs",
   VAR_0, &VAR_4->stats.rx_udp_csum_errs, 0,
   "Number frames received with UDP checksum errors");
}
