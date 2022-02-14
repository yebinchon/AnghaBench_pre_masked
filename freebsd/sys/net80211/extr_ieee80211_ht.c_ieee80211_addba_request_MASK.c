
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_token; int txa_wnd; int txa_flags; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ieee80211_tx_ampdu*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_node *VAR_3,
 struct ieee80211_tx_ampdu *VAR_4,
 int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;


 VAR_4->txa_token = VAR_5;
 VAR_4->txa_flags |= VAR_1;
 VAR_8 = FUNC_0(VAR_6, VAR_2);
 VAR_4->txa_wnd = (VAR_8 == 0) ?
     VAR_0 : FUNC_2(VAR_8, VAR_0);
 FUNC_1(VAR_4);
 return 1;
}
