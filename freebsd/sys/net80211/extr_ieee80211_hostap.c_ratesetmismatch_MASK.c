
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {int ni_vap; } ;
struct ieee80211_frame {int i_addr2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_node*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_node *VAR_3, const struct ieee80211_frame *VAR_4,
 int VAR_5, int VAR_6, const char *VAR_7, int VAR_8)
{
 FUNC_0(VAR_3->ni_vap, VAR_0, VAR_4->i_addr2,
     "deny %s request, %s rate set mismatch, rate/MCS %d",
     VAR_5 ? "reassoc" : "assoc", VAR_7, VAR_8 & VAR_1);
 FUNC_1(VAR_3, VAR_6, VAR_2);
 FUNC_2(VAR_3);
}
