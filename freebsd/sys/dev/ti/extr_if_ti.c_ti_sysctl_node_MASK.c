
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tname ;
struct ti_softc {int ti_dac; int ti_rx_coal_ticks; int ti_rx_max_coal_bds; int ti_tx_coal_ticks; int ti_tx_max_coal_bds; int ti_tx_buf_ratio; int ti_stat_ticks; int ti_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,char*,int*) ;
 int FUNC_8 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_9(struct ti_softc *VAR_3)
{
 struct sysctl_ctx_list *VAR_4;
 struct sysctl_oid_list *VAR_5;
 char VAR_6[32];

 VAR_4 = FUNC_4(VAR_3->ti_dev);
 VAR_5 = FUNC_1(FUNC_5(VAR_3->ti_dev));


 VAR_3->ti_dac = 1;
 FUNC_8(VAR_6, sizeof(VAR_6), "dev.ti.%d.dac",
     FUNC_6(VAR_3->ti_dev));
 FUNC_2(VAR_6, &VAR_3->ti_dac);

 FUNC_0(VAR_4, VAR_5, VAR_1, "rx_coal_ticks", VAR_0,
     &VAR_3->ti_rx_coal_ticks, 0, "Receive coalcesced ticks");
 FUNC_0(VAR_4, VAR_5, VAR_1, "rx_max_coal_bds", VAR_0,
     &VAR_3->ti_rx_max_coal_bds, 0, "Receive max coalcesced BDs");

 FUNC_0(VAR_4, VAR_5, VAR_1, "tx_coal_ticks", VAR_0,
     &VAR_3->ti_tx_coal_ticks, 0, "Send coalcesced ticks");
 FUNC_0(VAR_4, VAR_5, VAR_1, "tx_max_coal_bds", VAR_0,
     &VAR_3->ti_tx_max_coal_bds, 0, "Send max coalcesced BDs");
 FUNC_0(VAR_4, VAR_5, VAR_1, "tx_buf_ratio", VAR_0,
     &VAR_3->ti_tx_buf_ratio, 0,
     "Ratio of NIC memory devoted to TX buffer");

 FUNC_0(VAR_4, VAR_5, VAR_1, "stat_ticks", VAR_0,
     &VAR_3->ti_stat_ticks, 0,
     "Number of clock ticks for statistics update interval");


 VAR_3->ti_rx_coal_ticks = 170;
 FUNC_7(FUNC_3(VAR_3->ti_dev),
     FUNC_6(VAR_3->ti_dev), "rx_coal_ticks",
     &VAR_3->ti_rx_coal_ticks);
 VAR_3->ti_rx_max_coal_bds = 64;
 FUNC_7(FUNC_3(VAR_3->ti_dev),
     FUNC_6(VAR_3->ti_dev), "rx_max_coal_bds",
     &VAR_3->ti_rx_max_coal_bds);

 VAR_3->ti_tx_coal_ticks = VAR_2 / 500;
 FUNC_7(FUNC_3(VAR_3->ti_dev),
     FUNC_6(VAR_3->ti_dev), "tx_coal_ticks",
     &VAR_3->ti_tx_coal_ticks);
 VAR_3->ti_tx_max_coal_bds = 32;
 FUNC_7(FUNC_3(VAR_3->ti_dev),
     FUNC_6(VAR_3->ti_dev), "tx_max_coal_bds",
     &VAR_3->ti_tx_max_coal_bds);
 VAR_3->ti_tx_buf_ratio = 21;
 FUNC_7(FUNC_3(VAR_3->ti_dev),
     FUNC_6(VAR_3->ti_dev), "tx_buf_ratio",
     &VAR_3->ti_tx_buf_ratio);

 VAR_3->ti_stat_ticks = 2 * VAR_2;
 FUNC_7(FUNC_3(VAR_3->ti_dev),
     FUNC_6(VAR_3->ti_dev), "stat_ticks",
     &VAR_3->ti_stat_ticks);
}
