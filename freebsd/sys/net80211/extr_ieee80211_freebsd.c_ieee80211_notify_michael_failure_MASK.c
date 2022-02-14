
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ifnet {int if_vnet; } ;
struct TYPE_2__ {int is_rx_tkipmic; } ;
struct ieee80211vap {TYPE_1__ iv_stats; struct ifnet* iv_ifp; } ;
struct ieee80211_michael_event {int iev_keyix; int iev_cipher; int iev_src; int iev_dst; } ;
struct ieee80211_frame {int i_addr2; int i_addr1; } ;
typedef int iev ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211vap*,int ,int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct ifnet*,int ,struct ieee80211_michael_event*,int) ;

void
FUNC_5(struct ieee80211vap *VAR_3,
 const struct ieee80211_frame *VAR_4, u_int VAR_5)
{
 struct ifnet *VAR_6 = VAR_3->iv_ifp;

 FUNC_3(VAR_3, VAR_1, VAR_4->i_addr2,
     "michael MIC verification failed <keyix %u>", VAR_5);
 VAR_3->iv_stats.is_rx_tkipmic++;

 if (VAR_6 != ((void*)0)) {
  struct ieee80211_michael_event VAR_7;

  FUNC_2(VAR_7.iev_dst, VAR_4->i_addr1);
  FUNC_2(VAR_7.iev_src, VAR_4->i_addr2);
  VAR_7.iev_cipher = VAR_0;
  VAR_7.iev_keyix = VAR_5;
  FUNC_1(VAR_6->if_vnet);
  FUNC_4(VAR_6, VAR_2, &VAR_7, sizeof(VAR_7));
  FUNC_0();
 }
}
