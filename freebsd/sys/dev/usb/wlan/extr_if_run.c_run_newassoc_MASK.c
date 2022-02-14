
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct run_softc {scalar_t__ ratectl_run; int ratectl_ch; int cmdq_task; TYPE_1__* cmdq; int cmdq_store; int sc_dev; } ;
struct run_node {size_t* ridx; size_t* ctl_ridx; scalar_t__ mgt_ridx; } ;
struct ieee80211vap {scalar_t__ iv_opmode; TYPE_2__* iv_txparms; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; struct run_softc* ic_softc; } ;
struct ieee80211_rateset {int rs_nrates; scalar_t__* rs_rates; } ;
struct ieee80211_node {scalar_t__ ni_associd; int ni_macaddr; struct ieee80211vap* ni_vap; struct ieee80211_rateset ni_rates; } ;
struct TYPE_6__ {scalar_t__ rate; scalar_t__ phy; size_t ctl_ridx; } ;
struct TYPE_5__ {scalar_t__ mgmtrate; } ;
struct TYPE_4__ {scalar_t__ wcid; struct ieee80211_node* arg1; int * arg0; int func; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct run_softc*,int,char*,scalar_t__,...) ;
 int FUNC_3 (struct run_softc*) ;
 struct run_node* FUNC_4 (struct ieee80211_node*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct run_softc*) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211com*,int *) ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,int ,int ,struct run_softc*) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211_node *VAR_12, int VAR_13)
{
 struct run_node *VAR_14 = FUNC_4(VAR_12);
 struct ieee80211_rateset *VAR_15 = &VAR_12->ni_rates;
 struct ieee80211vap *VAR_16 = VAR_12->ni_vap;
 struct ieee80211com *VAR_17 = VAR_16->iv_ic;
 struct run_softc *VAR_18 = VAR_17->ic_softc;
 uint8_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;
 int VAR_22, VAR_23;

 VAR_21 = (VAR_16->iv_opmode == VAR_0) ?
     1 : FUNC_0(VAR_12->ni_associd);

 if (VAR_21 > VAR_4) {
  FUNC_6(VAR_18->sc_dev, "wcid=%d out of range\n", VAR_21);
  return;
 }


 if (VAR_13 && VAR_12->ni_associd != 0) {





  uint32_t VAR_24 = FUNC_1(&VAR_18->cmdq_store);
  FUNC_2(VAR_18, VAR_6, "cmdq_store=%d\n", VAR_24);
  VAR_18->cmdq[VAR_24].func = VAR_10;
  VAR_18->cmdq[VAR_24].arg0 = ((void*)0);
  VAR_18->cmdq[VAR_24].arg1 = VAR_12;
  VAR_18->cmdq[VAR_24].wcid = VAR_21;
  FUNC_9(VAR_17, &VAR_18->cmdq_task);
 }

 FUNC_2(VAR_18, VAR_6,
     "new assoc isnew=%d associd=%x addr=%s\n",
     VAR_13, VAR_12->ni_associd, FUNC_7(VAR_12->ni_macaddr));

 for (VAR_22 = 0; VAR_22 < VAR_15->rs_nrates; VAR_22++) {
  VAR_19 = VAR_15->rs_rates[VAR_22] & VAR_2;

  for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
   if (VAR_9[VAR_20].rate == VAR_19)
    break;
  VAR_14->ridx[VAR_22] = VAR_20;

  for (VAR_23 = VAR_22; VAR_23 >= 0; VAR_23--) {
   if ((VAR_15->rs_rates[VAR_23] & VAR_1) &&
       VAR_9[VAR_14->ridx[VAR_22]].phy ==
       VAR_9[VAR_14->ridx[VAR_23]].phy)
    break;
  }
  if (VAR_23 >= 0) {
   VAR_14->ctl_ridx[VAR_22] = VAR_14->ridx[VAR_23];
  } else {

   VAR_14->ctl_ridx[VAR_22] = VAR_9[VAR_20].ctl_ridx;
  }
  FUNC_2(VAR_18, VAR_6 | VAR_5,
      "rate=0x%02x ridx=%d ctl_ridx=%d\n",
      VAR_15->rs_rates[VAR_22], VAR_14->ridx[VAR_22], VAR_14->ctl_ridx[VAR_22]);
 }
 VAR_19 = VAR_16->iv_txparms[FUNC_8(VAR_17->ic_curchan)].mgmtrate;
 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
  if (VAR_9[VAR_20].rate == VAR_19)
   break;
 VAR_14->mgt_ridx = VAR_20;
 FUNC_2(VAR_18, VAR_6 | VAR_5,
     "rate=%d, mgmt_ridx=%d\n", VAR_19, VAR_14->mgt_ridx);

 FUNC_3(VAR_18);
 if(VAR_18->ratectl_run != VAR_7)
  FUNC_10(&VAR_18->ratectl_ch, VAR_8, VAR_11, VAR_18);
 FUNC_5(VAR_18);
}
