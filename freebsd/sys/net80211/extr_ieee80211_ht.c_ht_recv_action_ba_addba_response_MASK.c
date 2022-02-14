
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int is_addba_badbawinsize; int is_addba_badpolicy; int is_addba_badtoken; int is_addba_norequest; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211com {int (* ic_addba_response ) (struct ieee80211_node*,struct ieee80211_tx_ampdu*,int ,int ,int ) ;} ;
struct ieee80211_tx_ampdu {int txa_flags; int txa_token; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211_tx_ampdu* ni_tx_ampdu; struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211vap*,int,int ,char*,char*,int,int,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ieee80211vap*,int,struct ieee80211_node*,char*,int,int ,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct ieee80211_node*,struct ieee80211_tx_ampdu*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_8,
 const struct ieee80211_frame *VAR_9,
 const uint8_t *VAR_10, const uint8_t *VAR_11)
{
 struct ieee80211com *VAR_12 = VAR_8->ni_ic;
 struct ieee80211vap *VAR_13 = VAR_8->ni_vap;
 struct ieee80211_tx_ampdu *VAR_14;
 uint8_t VAR_15, VAR_16;
 uint16_t VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 VAR_15 = VAR_10[2];
 VAR_19 = FUNC_3(VAR_10+3);
 VAR_17 = FUNC_3(VAR_10+5);
 VAR_20 = FUNC_2(VAR_17, VAR_5);
 VAR_21 = FUNC_2(VAR_17, VAR_3);
 VAR_16 = FUNC_2(VAR_17, VAR_4);
 VAR_18 = FUNC_3(VAR_10+7);

 VAR_14 = &VAR_8->ni_tx_ampdu[VAR_20];
 if ((VAR_14->txa_flags & VAR_2) == 0) {
  FUNC_0(VAR_13,
      VAR_7 | VAR_6,
      VAR_8->ni_macaddr, "ADDBA response",
      "no pending ADDBA, tid %d dialogtoken %u "
      "code %d", VAR_20, VAR_15, VAR_19);
  VAR_13->iv_stats.is_addba_norequest++;
  return 0;
 }
 if (VAR_15 != VAR_14->txa_token) {
  FUNC_0(VAR_13,
      VAR_7 | VAR_6,
      VAR_8->ni_macaddr, "ADDBA response",
      "dialogtoken mismatch: waiting for %d, "
      "received %d, tid %d code %d",
      VAR_14->txa_token, VAR_15, VAR_20, VAR_19);
  VAR_13->iv_stats.is_addba_badtoken++;
  return 0;
 }

 if (VAR_16 != (VAR_14->txa_flags & VAR_1)) {
  FUNC_0(VAR_13,
      VAR_7 | VAR_6,
      VAR_8->ni_macaddr, "ADDBA response",
      "policy mismatch: expecting %s, "
      "received %s, tid %d code %d",
      VAR_14->txa_flags & VAR_1,
      VAR_16, VAR_20, VAR_19);
  VAR_13->iv_stats.is_addba_badpolicy++;
  return 0;
 }
 FUNC_1(VAR_13, VAR_7 | VAR_6, VAR_8,
     "recv ADDBA response: dialogtoken %u code %d "
     "baparamset 0x%x (tid %d bufsiz %d) batimeout %d",
     VAR_15, VAR_19, VAR_17, VAR_20, VAR_21,
     VAR_18);
 VAR_12->ic_addba_response(VAR_8, VAR_14, VAR_19, VAR_17, VAR_18);
 return 0;
}
