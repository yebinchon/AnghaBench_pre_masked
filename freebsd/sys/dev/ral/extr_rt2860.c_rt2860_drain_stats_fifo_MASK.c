
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct ieee80211_ratectl_tx_status {int long_retries; int status; int flags; } ;
struct rt2860_softc {struct ieee80211_node** wcid2ni; struct ieee80211_ratectl_tx_status sc_txs; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_2__ {int iv_ifp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (struct ieee80211_node*,struct ieee80211_ratectl_tx_status*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_12)
{
 struct ieee80211_ratectl_tx_status *VAR_13 = &VAR_12->sc_txs;
 struct ieee80211_node *VAR_14;
 uint32_t VAR_15;
 uint8_t VAR_16, VAR_17, VAR_18;


 VAR_13->flags = VAR_0;
 while ((VAR_15 = FUNC_1(VAR_12, VAR_10)) & VAR_8) {
  FUNC_0(4, ("tx stat 0x%08x\n", VAR_15));

  VAR_16 = (VAR_15 >> VAR_9) & 0xff;
  if (VAR_16 > VAR_11)
   continue;
  VAR_14 = VAR_12->wcid2ni[VAR_16];


  if (!(VAR_15 & VAR_4) || VAR_14 == ((void*)0))
   continue;


  if (VAR_15 & VAR_6) {






   VAR_17 = (VAR_15 >> VAR_5) & 0x7f;
   VAR_18 = (VAR_15 >> VAR_7) & 0xf;
   if (VAR_17 + 1 != VAR_18)
    VAR_13->long_retries = 1;
   else
    VAR_13->long_retries = 0;
   VAR_13->status = VAR_2;
   FUNC_2(VAR_14, VAR_13);
  } else {
   VAR_13->status = VAR_1;
   VAR_13->long_retries = 1;
   FUNC_2(VAR_14, VAR_13);
   FUNC_3(VAR_14->ni_vap->iv_ifp,
       VAR_3, 1);
  }
 }
}
