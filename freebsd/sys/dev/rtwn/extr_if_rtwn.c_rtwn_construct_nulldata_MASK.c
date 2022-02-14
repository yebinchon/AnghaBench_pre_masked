
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rtwn_vap {int id; } ;
struct rtwn_tx_desc_common {int offset; void* pktlen; } ;
struct ieee80211com {scalar_t__ ic_curmode; } ;
struct rtwn_softc {int txdesc_len; struct ieee80211com sc_ic; } ;
struct ieee80211vap {TYPE_1__* iv_bss; int iv_myaddr; } ;
struct ieee80211_qosframe {int* i_qos; int * i_fc; } ;
struct ieee80211_frame {int* i_fc; int i_addr3; int i_addr2; int i_addr1; } ;
struct TYPE_2__ {int ni_macaddr; int ni_bssid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 struct rtwn_vap* FUNC_1 (struct ieee80211vap*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct rtwn_softc*,int *,int,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct rtwn_softc *VAR_8, struct ieee80211vap *VAR_9,
    uint8_t *VAR_10, int VAR_11)
{
 struct rtwn_vap *VAR_12 = FUNC_1(VAR_9);
 struct ieee80211com *VAR_13 = &VAR_8->sc_ic;
 struct rtwn_tx_desc_common *VAR_14;
 struct ieee80211_frame *VAR_15;
 int VAR_16;


 VAR_15 = (struct ieee80211_frame *)(VAR_10 + VAR_8->txdesc_len);
 VAR_15->i_fc[0] = VAR_3 | VAR_2;
 VAR_15->i_fc[1] = VAR_4;
 FUNC_0(VAR_15->i_addr1, VAR_9->iv_bss->ni_bssid);
 FUNC_0(VAR_15->i_addr2, VAR_9->iv_myaddr);
 FUNC_0(VAR_15->i_addr3, VAR_9->iv_bss->ni_macaddr);

 VAR_14 = (struct rtwn_tx_desc_common *)VAR_10;
 VAR_14->offset = VAR_8->txdesc_len;
 VAR_16 = VAR_8->txdesc_len;
 if (VAR_11) {
  struct ieee80211_qosframe *VAR_17;
  const int VAR_18 = FUNC_2(VAR_7);

  VAR_17 = (struct ieee80211_qosframe *)VAR_15;
  VAR_17->i_fc[0] |= VAR_1;
  VAR_17->i_qos[0] = VAR_18 & VAR_6;

  VAR_14->pktlen = FUNC_3(sizeof(struct ieee80211_qosframe));
  VAR_16 += sizeof(struct ieee80211_qosframe);
 } else {
  VAR_15->i_fc[0] |= VAR_0;

  VAR_14->pktlen = FUNC_3(sizeof(struct ieee80211_frame));
  VAR_16 += sizeof(struct ieee80211_frame);
 }

 FUNC_4(VAR_8, VAR_10,
     VAR_13->ic_curmode == VAR_5, VAR_11, VAR_12->id);

 return (VAR_16);
}
