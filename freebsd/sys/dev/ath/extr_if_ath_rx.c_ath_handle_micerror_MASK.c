
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_node {int ni_vap; } ;
struct ieee80211_frame_min {int dummy; } ;
struct ieee80211_frame {int dummy; } ;


 struct ieee80211_node* FUNC_0 (struct ieee80211com*,struct ieee80211_frame_min const*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ,struct ieee80211_frame*,int) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_0,
 struct ieee80211_frame *VAR_1, int VAR_2)
{
 struct ieee80211_node *VAR_3;



 VAR_3 = FUNC_0(VAR_0, (const struct ieee80211_frame_min *) VAR_1);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3->ni_vap, VAR_1, VAR_2);
  FUNC_1(VAR_3);
 }
}
