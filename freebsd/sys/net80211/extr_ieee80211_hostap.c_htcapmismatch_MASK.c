
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {int ni_vap; } ;
struct ieee80211_frame {int i_addr2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,char*) ;
 int FUNC_1 (struct ieee80211_node*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_node *VAR_2, const struct ieee80211_frame *VAR_3,
 int VAR_4, int VAR_5)
{
 FUNC_0(VAR_2->ni_vap, VAR_0, VAR_3->i_addr2,
     "deny %s request, %s missing HT ie", VAR_4 ? "reassoc" : "assoc");

 FUNC_1(VAR_2, VAR_5, VAR_1);
 FUNC_2(VAR_2);
}
