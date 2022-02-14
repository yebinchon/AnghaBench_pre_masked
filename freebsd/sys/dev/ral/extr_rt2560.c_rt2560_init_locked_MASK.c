
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int physaddr; } ;
struct TYPE_11__ {int physaddr; } ;
struct TYPE_10__ {int physaddr; } ;
struct TYPE_9__ {int physaddr; } ;
struct TYPE_8__ {int physaddr; } ;
struct ieee80211com {scalar_t__ ic_opmode; scalar_t__ ic_promisc; int ic_curchan; int ic_macaddr; int ic_vaps; } ;
struct rt2560_softc {int watchdog_ch; int sc_flags; int rx_ant; int tx_ant; TYPE_5__ rxq; TYPE_4__ bcnq; TYPE_3__ atimq; TYPE_2__ prioq; TYPE_1__ txq; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_myaddr; } ;
struct TYPE_13__ {int val; int reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rt2560_softc*) ;
 int FUNC_1 (struct rt2560_softc*,int ) ;
 int FUNC_2 (struct rt2560_softc*,int ,int) ;
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
 struct ieee80211vap* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,struct rt2560_softc*) ;
 int VAR_33 ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (struct rt2560_softc*) ;
 TYPE_6__* VAR_34 ;
 int FUNC_7 (struct rt2560_softc*,int ) ;
 int FUNC_8 (struct rt2560_softc*,int ) ;
 int FUNC_9 (struct rt2560_softc*,int ) ;
 int FUNC_10 (struct rt2560_softc*,int ) ;
 int FUNC_11 (struct rt2560_softc*) ;
 int FUNC_12 (struct rt2560_softc*,int ,int ) ;
 int FUNC_13 (struct rt2560_softc*) ;
 int FUNC_14 (struct ieee80211com*) ;
 int VAR_35 ;

__attribute__((used)) static void
FUNC_15(struct rt2560_softc *VAR_36)
{
 struct ieee80211com *VAR_37 = &VAR_36->sc_ic;
 struct ieee80211vap *VAR_38 = FUNC_3(&VAR_37->ic_vaps);
 uint32_t VAR_39;
 int VAR_40;

 FUNC_0(VAR_36);

 FUNC_11(VAR_36);


 VAR_39 = VAR_19 << 24 |
       VAR_4 << 16 |
       VAR_32 << 8 |
       VAR_31;


 FUNC_2(VAR_36, VAR_26, VAR_39);
 FUNC_2(VAR_36, VAR_27, VAR_36->txq.physaddr);
 FUNC_2(VAR_36, VAR_29, VAR_36->prioq.physaddr);
 FUNC_2(VAR_36, VAR_28, VAR_36->atimq.physaddr);
 FUNC_2(VAR_36, VAR_30, VAR_36->bcnq.physaddr);


 VAR_39 = VAR_25 << 8 | VAR_24;

 FUNC_2(VAR_36, VAR_22, VAR_39);
 FUNC_2(VAR_36, VAR_23, VAR_36->rxq.physaddr);


 for (VAR_40 = 0; VAR_40 < FUNC_5(VAR_34); VAR_40++)
  FUNC_2(VAR_36, VAR_34[VAR_40].reg, VAR_34[VAR_40].val);

 FUNC_8(VAR_36, VAR_38 ? VAR_38->iv_myaddr : VAR_37->ic_macaddr);


 FUNC_2(VAR_36, VAR_3, 0x153);

 FUNC_14(VAR_37);
 FUNC_13(VAR_36);
 FUNC_12(VAR_36, 0, 0);

 FUNC_2(VAR_36, VAR_7, VAR_20);
 FUNC_2(VAR_36, VAR_7, VAR_17);

 if (FUNC_6(VAR_36) != 0) {
  FUNC_11(VAR_36);
  return;
 }

 FUNC_10(VAR_36, VAR_36->tx_ant);
 FUNC_9(VAR_36, VAR_36->rx_ant);


 FUNC_7(VAR_36, VAR_37->ic_curchan);


 VAR_39 = VAR_13 | VAR_10;
 if (VAR_37->ic_opmode != VAR_2) {
  VAR_39 |= VAR_11 | VAR_15;
  if (VAR_37->ic_opmode != VAR_0 &&
      VAR_37->ic_opmode != VAR_1)
   VAR_39 |= VAR_14;
  if (VAR_37->ic_promisc == 0)
   VAR_39 |= VAR_12;
 }
 FUNC_2(VAR_36, VAR_21, VAR_39);


 FUNC_1(VAR_36, VAR_5);
 FUNC_1(VAR_36, VAR_6);


 FUNC_2(VAR_36, VAR_8, 0xffffffff);


 FUNC_2(VAR_36, VAR_9, VAR_18);

 VAR_36->sc_flags |= VAR_16;

 FUNC_4(&VAR_36->watchdog_ch, VAR_33, VAR_35, VAR_36);
}
