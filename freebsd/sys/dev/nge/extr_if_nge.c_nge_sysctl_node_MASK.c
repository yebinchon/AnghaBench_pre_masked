
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct nge_stats {int tx_seq_errs; int tx_pause; int rx_pause; int rx_unctl_frames; int rx_len_errs; int rx_pkts_jumbos; int rx_sym_errs; int rx_align_errs; int rx_fifo_oflows; int rx_crc_errs; int rx_pkts_errs; } ;
struct nge_softc {int nge_int_holdoff; struct nge_stats nge_stats; int nge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_6 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (int ,int ,char*,int*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_10(struct nge_softc *VAR_8)
{
 struct sysctl_ctx_list *VAR_9;
 struct sysctl_oid_list *VAR_10, *VAR_11;
 struct sysctl_oid *VAR_12;
 struct nge_stats *VAR_13;
 int VAR_14;

 VAR_9 = FUNC_5(VAR_8->nge_dev);
 VAR_10 = FUNC_3(FUNC_6(VAR_8->nge_dev));
 FUNC_2(VAR_9, VAR_10, VAR_6, "int_holdoff",
     VAR_2 | VAR_1, &VAR_8->nge_int_holdoff, 0,
     VAR_7, "I", "NGE interrupt moderation");

 VAR_8->nge_int_holdoff = VAR_3;
 VAR_14 = FUNC_9(FUNC_4(VAR_8->nge_dev),
     FUNC_7(VAR_8->nge_dev), "int_holdoff", &VAR_8->nge_int_holdoff);
 if (VAR_14 == 0) {
  if (VAR_8->nge_int_holdoff < VAR_5 ||
      VAR_8->nge_int_holdoff > VAR_4 ) {
   FUNC_8(VAR_8->nge_dev,
       "int_holdoff value out of range; "
       "using default: %d(%d us)\n",
       VAR_3,
       VAR_3 * 100);
   VAR_8->nge_int_holdoff = VAR_3;
  }
 }

 VAR_13 = &VAR_8->nge_stats;
 VAR_12 = FUNC_1(VAR_9, VAR_10, VAR_6, "stats", VAR_0,
     ((void*)0), "NGE statistics");
 VAR_11 = FUNC_3(VAR_12);


 VAR_12 = FUNC_1(VAR_9, VAR_11, VAR_6, "rx", VAR_0,
     ((void*)0), "Rx MAC statistics");
 VAR_10 = FUNC_3(VAR_12);
 FUNC_0(VAR_9, VAR_10, "pkts_errs",
     &VAR_13->rx_pkts_errs,
     "Packet errors including both wire errors and FIFO overruns");
 FUNC_0(VAR_9, VAR_10, "crc_errs",
     &VAR_13->rx_crc_errs, "CRC errors");
 FUNC_0(VAR_9, VAR_10, "fifo_oflows",
     &VAR_13->rx_fifo_oflows, "FIFO overflows");
 FUNC_0(VAR_9, VAR_10, "align_errs",
     &VAR_13->rx_align_errs, "Frame alignment errors");
 FUNC_0(VAR_9, VAR_10, "sym_errs",
     &VAR_13->rx_sym_errs, "One or more symbol errors");
 FUNC_0(VAR_9, VAR_10, "pkts_jumbos",
     &VAR_13->rx_pkts_jumbos,
     "Packets received with length greater than 1518 bytes");
 FUNC_0(VAR_9, VAR_10, "len_errs",
     &VAR_13->rx_len_errs, "In Range Length errors");
 FUNC_0(VAR_9, VAR_10, "unctl_frames",
     &VAR_13->rx_unctl_frames, "Control frames with unsupported opcode");
 FUNC_0(VAR_9, VAR_10, "pause",
     &VAR_13->rx_pause, "Pause frames");


 VAR_12 = FUNC_1(VAR_9, VAR_11, VAR_6, "tx", VAR_0,
     ((void*)0), "Tx MAC statistics");
 VAR_10 = FUNC_3(VAR_12);
 FUNC_0(VAR_9, VAR_10, "pause",
     &VAR_13->tx_pause, "Pause frames");
 FUNC_0(VAR_9, VAR_10, "seq_errs",
     &VAR_13->tx_seq_errs,
     "Loss of collision heartbeat during transmission");
}
