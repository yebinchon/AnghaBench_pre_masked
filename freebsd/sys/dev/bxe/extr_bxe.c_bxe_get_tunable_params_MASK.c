
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int max_rx_bufs; int hc_rx_ticks; int hc_tx_ticks; int max_aggregation_size; int mrrs; int autogreeen; int udp_rss; int num_queues; scalar_t__ interrupt_mode; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,scalar_t__,scalar_t__,int,int,int ,int,int,int,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_19)
{


    if ((VAR_11 != VAR_1) &&
        (VAR_11 != VAR_2) &&
        (VAR_11 != VAR_3)) {
        FUNC_1(VAR_19, "invalid interrupt_mode value (%d)\n", VAR_11);
        VAR_11 = VAR_3;
    }

    if ((VAR_15 < 0) || (VAR_15 > VAR_4)) {
        FUNC_1(VAR_19, "invalid queue_count value (%d)\n", VAR_15);
        VAR_15 = 0;
    }

    if ((VAR_13 < 1) || (VAR_13 > VAR_5)) {
        if (VAR_13 == 0) {
            VAR_13 = VAR_5;
        } else {
            FUNC_1(VAR_19, "invalid max_rx_bufs (%d)\n", VAR_13);
            VAR_13 = 2048;
        }
    }

    if ((VAR_9 < 1) || (VAR_9 > 100)) {
        FUNC_1(VAR_19, "invalid hc_rx_ticks (%d)\n", VAR_9);
        VAR_9 = 25;
    }

    if ((VAR_10 < 1) || (VAR_10 > 100)) {
        FUNC_1(VAR_19, "invalid hc_tx_ticks (%d)\n", VAR_10);
        VAR_10 = 50;
    }

    if (VAR_12 == 0) {
        VAR_12 = VAR_6;
    }

    if (VAR_12 > 0xffff) {
        FUNC_1(VAR_19, "invalid max_aggregation_size (%d)\n",
              VAR_12);
        VAR_12 = VAR_6;
    }

    if ((VAR_14 < -1) || (VAR_14 > 3)) {
        FUNC_1(VAR_19, "invalid mrrs (%d)\n", VAR_14);
        VAR_14 = -1;
    }

    if ((VAR_7 < 0) || (VAR_7 > 2)) {
        FUNC_1(VAR_19, "invalid autogreeen (%d)\n", VAR_7);
        VAR_7 = 0;
    }

    if ((VAR_17 < 0) || (VAR_17 > 1)) {
        FUNC_1(VAR_19, "invalid udp_rss (%d)\n", VAR_17);
        VAR_17 = 0;
    }



    VAR_19->interrupt_mode = VAR_11;
    VAR_19->max_rx_bufs = VAR_13;
    VAR_19->hc_rx_ticks = VAR_9;
    VAR_19->hc_tx_ticks = VAR_10;
    VAR_19->max_aggregation_size = VAR_12;
    VAR_19->mrrs = VAR_14;
    VAR_19->autogreeen = VAR_7;
    VAR_19->udp_rss = VAR_17;

    if (VAR_11 == VAR_1) {
        VAR_19->num_queues = 1;
    } else {
        VAR_19->num_queues =
            FUNC_2((VAR_15 ? VAR_15 : VAR_18),
                VAR_4);
        if (VAR_19->num_queues > VAR_18) {
            VAR_19->num_queues = VAR_18;
        }
    }

    FUNC_0(VAR_19, VAR_0,
          "User Config: "
          "debug=0x%lx "
          "interrupt_mode=%d "
          "queue_count=%d "
          "hc_rx_ticks=%d "
          "hc_tx_ticks=%d "
          "rx_budget=%d "
          "max_aggregation_size=%d "
          "mrrs=%d "
          "autogreeen=%d "
          "udp_rss=%d\n",
          VAR_8,
          VAR_19->interrupt_mode,
          VAR_19->num_queues,
          VAR_19->hc_rx_ticks,
          VAR_19->hc_tx_ticks,
          VAR_16,
          VAR_19->max_aggregation_size,
          VAR_19->mrrs,
          VAR_19->autogreeen,
          VAR_19->udp_rss);
}
