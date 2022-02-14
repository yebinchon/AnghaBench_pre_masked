
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_rx_auth_unsupported; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
struct ieee80211_frame {int i_addr2; } ;


 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_frame const*,int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_node*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_2, const struct ieee80211_frame *VAR_3,
 int VAR_4, int VAR_5, int VAR_6)
{
 struct ieee80211vap *VAR_7 = VAR_2->ni_vap;

 FUNC_0(VAR_7, VAR_1,
     VAR_3, ((void*)0), "unsupported alg %d", VAR_4);
 VAR_7->iv_stats.is_rx_auth_unsupported++;
 FUNC_1(VAR_2, VAR_3->i_addr2, VAR_0,
     VAR_5 | (VAR_6 << 16));
}
