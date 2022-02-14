
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct malo_txrec {int dummy; } ;
struct TYPE_5__ {int wr_ihdr; } ;
struct TYPE_4__ {int wt_ihdr; } ;
struct TYPE_6__ {int macaddr; int * wcbbase; int ul_fw_awakecookie; int rxdesc_write; int rxdesc_read; int wcbbase0; int fw_releasenum; int num_antenna; int regioncode; int maxnum_tx_wcb; int maxnum_mcaddr; int maxnum_wcb; int hostinterface; int hwversion; } ;
struct ieee80211com {int ic_caps; int ic_headroom; int ic_transmit; int ic_parent; int ic_set_channel; int ic_scan_end; int ic_scan_start; int ic_updateslot; int ic_raw_xmit; int ic_vap_delete; int ic_vap_create; int ic_macaddr; int ic_opmode; int ic_phytype; int ic_name; struct malo_softc* ic_softc; } ;
struct malo_softc {int malo_txantenna; int malo_rxantenna; int malo_invalid; TYPE_2__ malo_rx_th; TYPE_1__ malo_tx_th; TYPE_3__ malo_hwspecs; int malo_dev; int malo_txtask; int malo_rxtask; int malo_tq; struct malo_hal* malo_mh; int malo_dmat; int malo_io1t; int malo_io1h; int malo_snd; int malo_mtx; int malo_watchdog_timer; struct ieee80211com malo_ic; } ;
struct malo_hal {int dummy; } ;
struct ieee80211_frame {int dummy; } ;
typedef int bands ;


 int FUNC_0 (struct malo_softc*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
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
 int FUNC_2 (struct malo_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *,int ,int ,struct malo_softc*) ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*) ;
 int FUNC_9 (struct ieee80211com*,int *,int *) ;
 int FUNC_10 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_19 ;
 int FUNC_11 (struct malo_softc*) ;
 int FUNC_12 (struct malo_softc*) ;
 int FUNC_13 (struct malo_softc*) ;
 struct malo_hal* FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (struct malo_hal*) ;
 int FUNC_16 (struct malo_hal*,char*,char*) ;
 int FUNC_17 (struct malo_hal*,TYPE_3__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_18 (struct malo_softc*) ;
 int FUNC_19 (struct malo_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ,int) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (char*,int ,int ,int *) ;
 int FUNC_24 (int *,int,int ,char*,int ) ;
 int VAR_31 ;

int
FUNC_25(uint16_t VAR_32, struct malo_softc *VAR_33)
{
 struct ieee80211com *VAR_34 = &VAR_33->malo_ic;
 struct malo_hal *VAR_35;
 int VAR_36;
 uint8_t VAR_37[VAR_10];

 FUNC_2(VAR_33);
 FUNC_4(&VAR_33->malo_watchdog_timer, &VAR_33->malo_mtx, 0);
 FUNC_20(&VAR_33->malo_snd, VAR_19);

 VAR_35 = FUNC_14(VAR_33->malo_dev, VAR_32,
     VAR_33->malo_io1h, VAR_33->malo_io1t, VAR_33->malo_dmat);
 if (VAR_35 == ((void*)0)) {
  FUNC_6(VAR_33->malo_dev, "unable to attach HAL\n");
  VAR_36 = VAR_0;
  goto bad;
 }
 VAR_33->malo_mh = VAR_35;






 VAR_36 = FUNC_16(VAR_35, "malo8335-h", "malo8335-m");
 if (VAR_36 != 0) {
  FUNC_6(VAR_33->malo_dev, "unable to setup firmware\n");
  goto bad1;
 }

 VAR_36 = FUNC_17(VAR_35, &VAR_33->malo_hwspecs);
 if (VAR_36 != 0) {
  FUNC_6(VAR_33->malo_dev, "unable to fetch h/w specs\n");
  goto bad1;
 }

 FUNC_0(VAR_33, VAR_13,
     "malo_hal_gethwspecs: hwversion 0x%x hostif 0x%x"
     "maxnum_wcb 0x%x maxnum_mcaddr 0x%x maxnum_tx_wcb 0x%x"
     "regioncode 0x%x num_antenna 0x%x fw_releasenum 0x%x"
     "wcbbase0 0x%x rxdesc_read 0x%x rxdesc_write 0x%x"
     "ul_fw_awakecookie 0x%x w[4] = %x %x %x %x",
     VAR_33->malo_hwspecs.hwversion,
     VAR_33->malo_hwspecs.hostinterface, VAR_33->malo_hwspecs.maxnum_wcb,
     VAR_33->malo_hwspecs.maxnum_mcaddr, VAR_33->malo_hwspecs.maxnum_tx_wcb,
     VAR_33->malo_hwspecs.regioncode, VAR_33->malo_hwspecs.num_antenna,
     VAR_33->malo_hwspecs.fw_releasenum, VAR_33->malo_hwspecs.wcbbase0,
     VAR_33->malo_hwspecs.rxdesc_read, VAR_33->malo_hwspecs.rxdesc_write,
     VAR_33->malo_hwspecs.ul_fw_awakecookie,
     VAR_33->malo_hwspecs.wcbbase[0], VAR_33->malo_hwspecs.wcbbase[1],
     VAR_33->malo_hwspecs.wcbbase[2], VAR_33->malo_hwspecs.wcbbase[3]);


 FUNC_21(VAR_37, 0, sizeof(VAR_37));
 FUNC_22(VAR_37, VAR_8);
 FUNC_22(VAR_37, VAR_9);
 FUNC_9(VAR_34, ((void*)0), VAR_37);

 VAR_33->malo_txantenna = 0x2;
 VAR_33->malo_rxantenna = 0xffff;






 VAR_36 = FUNC_13(VAR_33);
 if (VAR_36 != 0) {
  FUNC_6(VAR_33->malo_dev,
      "failed to setup descriptors: %d\n", VAR_36);
  goto bad1;
 }
 VAR_36 = FUNC_18(VAR_33);
 if (VAR_36 != 0)
  goto bad2;

 VAR_33->malo_tq = FUNC_23("malo_taskq", VAR_16,
  VAR_31, &VAR_33->malo_tq);
 FUNC_24(&VAR_33->malo_tq, 1, VAR_17,
  "%s taskq", FUNC_5(VAR_33->malo_dev));

 FUNC_3(&VAR_33->malo_rxtask, 0, VAR_22, VAR_33);
 FUNC_3(&VAR_33->malo_txtask, 0, VAR_27, VAR_33);

 VAR_34->ic_softc = VAR_33;
 VAR_34->ic_name = FUNC_5(VAR_33->malo_dev);

 VAR_34->ic_phytype = VAR_12;
 VAR_34->ic_opmode = VAR_11;
 VAR_34->ic_caps =
       VAR_5
     | VAR_1
     | VAR_2
     | VAR_3
     | VAR_4
     | VAR_6
     | VAR_7
     ;
 FUNC_1(VAR_34->ic_macaddr, VAR_33->malo_hwspecs.macaddr);







 VAR_34->ic_headroom = sizeof(struct malo_txrec) -
  sizeof(struct ieee80211_frame);


 FUNC_8(VAR_34);

 VAR_34->ic_vap_create = VAR_29;
 VAR_34->ic_vap_delete = VAR_30;
 VAR_34->ic_raw_xmit = VAR_21;
 VAR_34->ic_updateslot = VAR_28;
 VAR_34->ic_scan_start = VAR_24;
 VAR_34->ic_scan_end = VAR_23;
 VAR_34->ic_set_channel = VAR_25;
 VAR_34->ic_parent = VAR_20;
 VAR_34->ic_transmit = VAR_26;

 VAR_33->malo_invalid = 0;

 FUNC_10(VAR_34,
     &VAR_33->malo_tx_th.wt_ihdr, sizeof(VAR_33->malo_tx_th),
  VAR_15,
     &VAR_33->malo_rx_th.wr_ihdr, sizeof(VAR_33->malo_rx_th),
  VAR_14);




 FUNC_19(VAR_33);

 if (VAR_18)
  FUNC_7(VAR_34);
 FUNC_11(VAR_33);

 return 0;
bad2:
 FUNC_12(VAR_33);
bad1:
 FUNC_15(VAR_35);
bad:
 VAR_33->malo_invalid = 1;

 return VAR_36;
}
