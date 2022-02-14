
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct ifnet {int if_vnet; } ;
struct ieee80211vap {struct ifnet* iv_ifp; } ;
struct ieee80211_replay_event {scalar_t__ iev_keyix; scalar_t__ iev_rsc; scalar_t__ iev_keyrsc; int iev_cipher; int iev_src; int iev_dst; } ;
struct ieee80211_key {scalar_t__ wk_keyix; scalar_t__ wk_rxkeyix; scalar_t__* wk_keyrsc; TYPE_1__* wk_cipher; } ;
struct ieee80211_frame {int i_addr2; int i_addr1; } ;
typedef int intmax_t ;
typedef int iev ;
struct TYPE_2__ {int ic_cipher; int ic_name; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211vap*,int ,int ,char*,int ,int,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (struct ifnet*,int ,struct ieee80211_replay_event*,int) ;

void
FUNC_5(struct ieee80211vap *VAR_3,
 const struct ieee80211_frame *VAR_4, const struct ieee80211_key *VAR_5,
 u_int64_t VAR_6, int VAR_7)
{
 struct ifnet *VAR_8 = VAR_3->iv_ifp;

 FUNC_3(VAR_3, VAR_1, VAR_4->i_addr2,
     "%s replay detected tid %d <rsc %ju, csc %ju, keyix %u rxkeyix %u>",
     VAR_5->wk_cipher->ic_name, VAR_7, (intmax_t) VAR_6,
     (intmax_t) VAR_5->wk_keyrsc[VAR_7],
     VAR_5->wk_keyix, VAR_5->wk_rxkeyix);

 if (VAR_8 != ((void*)0)) {
  struct ieee80211_replay_event VAR_9;

  FUNC_2(VAR_9.iev_dst, VAR_4->i_addr1);
  FUNC_2(VAR_9.iev_src, VAR_4->i_addr2);
  VAR_9.iev_cipher = VAR_5->wk_cipher->ic_cipher;
  if (VAR_5->wk_rxkeyix != VAR_0)
   VAR_9.iev_keyix = VAR_5->wk_rxkeyix;
  else
   VAR_9.iev_keyix = VAR_5->wk_keyix;
  VAR_9.iev_keyrsc = VAR_5->wk_keyrsc[VAR_7];
  VAR_9.iev_rsc = VAR_6;
  FUNC_1(VAR_8->if_vnet);
  FUNC_4(VAR_8, VAR_2, &VAR_9, sizeof(VAR_9));
  FUNC_0();
 }
}
