
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct run_softc {int dummy; } ;
struct run_node {size_t fix_ridx; } ;
struct ifnet {int if_flags; int if_drv_flags; struct ieee80211vap* if_softc; } ;
struct ieee80211vap {int iv_bss; struct ieee80211_txparam* iv_txparms; struct ieee80211com* iv_ic; } ;
struct ieee80211com {size_t ic_curmode; TYPE_1__* ic_sup_rates; int ic_curchan; struct run_softc* ic_softc; } ;
struct ieee80211_txparam {size_t ucastrate; } ;
struct ieee80211_node {int dummy; } ;
struct TYPE_4__ {size_t rate; } ;
struct TYPE_3__ {size_t* rs_rates; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct run_softc*,int ,char*,size_t,size_t) ;
 int FUNC_1 (struct run_softc*) ;
 struct run_node* FUNC_2 (struct ieee80211_node*) ;
 int VAR_6 ;
 int FUNC_3 (struct run_softc*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (struct ifnet*) ;
 struct ieee80211_node* FUNC_7 (int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_8 (struct run_softc*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_8)
{
 struct ieee80211vap *VAR_9 = VAR_8->if_softc;
 struct ieee80211com *VAR_10 = VAR_9->iv_ic;
 const struct ieee80211_txparam *VAR_11;
 struct run_softc *VAR_12 = VAR_10->ic_softc;
 uint8_t VAR_13, VAR_14;
 int VAR_15;

 FUNC_1(VAR_12);

 VAR_15 = FUNC_6(VAR_8);
 if (VAR_15 != VAR_0) {
  FUNC_3(VAR_12);
  return (VAR_15);
 }

 VAR_11 = &VAR_9->iv_txparms[FUNC_4(VAR_10->ic_curchan)];
 if (VAR_11->ucastrate != VAR_1) {
  struct ieee80211_node *VAR_16;
  struct run_node *VAR_17;

  VAR_13 = VAR_10->ic_sup_rates[VAR_10->ic_curmode].
      rs_rates[VAR_11->ucastrate] & VAR_2;
  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
   if (VAR_7[VAR_14].rate == VAR_13)
    break;
  VAR_16 = FUNC_7(VAR_9->iv_bss);
  VAR_17 = FUNC_2(VAR_16);
  VAR_17->fix_ridx = VAR_14;
  FUNC_0(VAR_12, VAR_5, "rate=%d, fix_ridx=%d\n",
      VAR_13, VAR_17->fix_ridx);
  FUNC_5(VAR_16);
 }
 FUNC_3(VAR_12);

 return (0);
}
