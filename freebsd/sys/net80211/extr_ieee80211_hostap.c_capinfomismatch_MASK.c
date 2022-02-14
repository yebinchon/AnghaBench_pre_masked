
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_rx_assoc_capmismatch; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
struct ieee80211_frame {int i_addr2; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,int ,int ,char*,char*,char const*,int) ;
 int FUNC_1 (struct ieee80211_node*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_node *VAR_2, const struct ieee80211_frame *VAR_3,
 int VAR_4, int VAR_5, const char *VAR_6, int VAR_7)
{
 struct ieee80211vap *VAR_8 = VAR_2->ni_vap;

 FUNC_0(VAR_8, VAR_0, VAR_3->i_addr2,
     "deny %s request, %s mismatch 0x%x",
     VAR_4 ? "reassoc" : "assoc", VAR_6, VAR_7);
 FUNC_1(VAR_2, VAR_5, VAR_1);
 FUNC_2(VAR_2);
 VAR_8->iv_stats.is_rx_assoc_capmismatch++;
}
