
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct jme_hw_stats {int tx_bad_frames; int tx_good_frames; int rx_bad_frames; int rx_desc_empty; int rx_fifo_oflows; int rx_mii_errs; int rx_crc_errs; int rx_good_frames; } ;
struct jme_softc {scalar_t__ jme_tx_coal_to; scalar_t__ jme_tx_coal_pkt; scalar_t__ jme_rx_coal_to; scalar_t__ jme_rx_coal_pkt; scalar_t__ jme_process_limit; int jme_flags; int jme_dev; struct jme_hw_stats jme_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,scalar_t__*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,void*) ;
 int FUNC_9 (int ,int ,char*,scalar_t__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_10(struct jme_softc *VAR_25)
{
 struct sysctl_ctx_list *VAR_26;
 struct sysctl_oid_list *VAR_27, *VAR_28;
 struct sysctl_oid *VAR_29;
 struct jme_hw_stats *VAR_30;
 int VAR_31;

 VAR_30 = &VAR_25->jme_stats;
 VAR_26 = FUNC_5(VAR_25->jme_dev);
 VAR_27 = FUNC_3(FUNC_6(VAR_25->jme_dev));

 FUNC_2(VAR_26, VAR_27, VAR_7, "tx_coal_to",
     VAR_2 | VAR_1, &VAR_25->jme_tx_coal_to, 0,
     VAR_24, "I", "jme tx coalescing timeout");

 FUNC_2(VAR_26, VAR_27, VAR_7, "tx_coal_pkt",
     VAR_2 | VAR_1, &VAR_25->jme_tx_coal_pkt, 0,
     VAR_23, "I", "jme tx coalescing packet");

 FUNC_2(VAR_26, VAR_27, VAR_7, "rx_coal_to",
     VAR_2 | VAR_1, &VAR_25->jme_rx_coal_to, 0,
     VAR_22, "I", "jme rx coalescing timeout");

 FUNC_2(VAR_26, VAR_27, VAR_7, "rx_coal_pkt",
     VAR_2 | VAR_1, &VAR_25->jme_rx_coal_pkt, 0,
     VAR_21, "I", "jme rx coalescing packet");

 FUNC_2(VAR_26, VAR_27, VAR_7, "process_limit",
     VAR_2 | VAR_1, &VAR_25->jme_process_limit, 0,
     VAR_20, "I",
     "max number of Rx events to process");


 VAR_25->jme_process_limit = VAR_4;
 VAR_31 = FUNC_9(FUNC_4(VAR_25->jme_dev),
     FUNC_7(VAR_25->jme_dev), "process_limit",
     &VAR_25->jme_process_limit);
 if (VAR_31 == 0) {
  if (VAR_25->jme_process_limit < VAR_6 ||
      VAR_25->jme_process_limit > VAR_5) {
   FUNC_8(VAR_25->jme_dev,
       "process_limit value out of range; "
       "using default: %d\n", VAR_4);
   VAR_25->jme_process_limit = VAR_4;
  }
 }

 VAR_25->jme_tx_coal_to = VAR_17;
 VAR_31 = FUNC_9(FUNC_4(VAR_25->jme_dev),
     FUNC_7(VAR_25->jme_dev), "tx_coal_to", &VAR_25->jme_tx_coal_to);
 if (VAR_31 == 0) {
  if (VAR_25->jme_tx_coal_to < VAR_19 ||
      VAR_25->jme_tx_coal_to > VAR_18) {
   FUNC_8(VAR_25->jme_dev,
       "tx_coal_to value out of range; "
       "using default: %d\n", VAR_17);
   VAR_25->jme_tx_coal_to = VAR_17;
  }
 }

 VAR_25->jme_tx_coal_pkt = VAR_14;
 VAR_31 = FUNC_9(FUNC_4(VAR_25->jme_dev),
     FUNC_7(VAR_25->jme_dev), "tx_coal_pkt", &VAR_25->jme_tx_coal_to);
 if (VAR_31 == 0) {
  if (VAR_25->jme_tx_coal_pkt < VAR_16 ||
      VAR_25->jme_tx_coal_pkt > VAR_15) {
   FUNC_8(VAR_25->jme_dev,
       "tx_coal_pkt value out of range; "
       "using default: %d\n", VAR_14);
   VAR_25->jme_tx_coal_pkt = VAR_14;
  }
 }

 VAR_25->jme_rx_coal_to = VAR_11;
 VAR_31 = FUNC_9(FUNC_4(VAR_25->jme_dev),
     FUNC_7(VAR_25->jme_dev), "rx_coal_to", &VAR_25->jme_rx_coal_to);
 if (VAR_31 == 0) {
  if (VAR_25->jme_rx_coal_to < VAR_13 ||
      VAR_25->jme_rx_coal_to > VAR_12) {
   FUNC_8(VAR_25->jme_dev,
       "rx_coal_to value out of range; "
       "using default: %d\n", VAR_11);
   VAR_25->jme_rx_coal_to = VAR_11;
  }
 }

 VAR_25->jme_rx_coal_pkt = VAR_8;
 VAR_31 = FUNC_9(FUNC_4(VAR_25->jme_dev),
     FUNC_7(VAR_25->jme_dev), "rx_coal_pkt", &VAR_25->jme_rx_coal_to);
 if (VAR_31 == 0) {
  if (VAR_25->jme_rx_coal_pkt < VAR_10 ||
      VAR_25->jme_rx_coal_pkt > VAR_9) {
   FUNC_8(VAR_25->jme_dev,
       "tx_coal_pkt value out of range; "
       "using default: %d\n", VAR_8);
   VAR_25->jme_rx_coal_pkt = VAR_8;
  }
 }

 if ((VAR_25->jme_flags & VAR_3) == 0)
  return;

 VAR_29 = FUNC_1(VAR_26, VAR_27, VAR_7, "stats", VAR_0,
     ((void*)0), "JME statistics");
 VAR_28 = FUNC_3(VAR_29);


 VAR_29 = FUNC_1(VAR_26, VAR_28, VAR_7, "rx", VAR_0,
     ((void*)0), "Rx MAC statistics");
 VAR_27 = FUNC_3(VAR_29);
 FUNC_0(VAR_26, VAR_27, "good_frames",
     &VAR_30->rx_good_frames, "Good frames");
 FUNC_0(VAR_26, VAR_27, "crc_errs",
     &VAR_30->rx_crc_errs, "CRC errors");
 FUNC_0(VAR_26, VAR_27, "mii_errs",
     &VAR_30->rx_mii_errs, "MII errors");
 FUNC_0(VAR_26, VAR_27, "fifo_oflows",
     &VAR_30->rx_fifo_oflows, "FIFO overflows");
 FUNC_0(VAR_26, VAR_27, "desc_empty",
     &VAR_30->rx_desc_empty, "Descriptor empty");
 FUNC_0(VAR_26, VAR_27, "bad_frames",
     &VAR_30->rx_bad_frames, "Bad frames");


 VAR_29 = FUNC_1(VAR_26, VAR_28, VAR_7, "tx", VAR_0,
     ((void*)0), "Tx MAC statistics");
 VAR_27 = FUNC_3(VAR_29);
 FUNC_0(VAR_26, VAR_27, "good_frames",
     &VAR_30->tx_good_frames, "Good frames");
 FUNC_0(VAR_26, VAR_27, "bad_frames",
     &VAR_30->tx_bad_frames, "Bad frames");
}
