
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_ampdu {int txa_flags; scalar_t__ txa_attempts; int txa_wnd; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ieee80211_tx_ampdu*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_node *VAR_6,
 struct ieee80211_tx_ampdu *VAR_7,
 int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;


 FUNC_1(VAR_7);
 if (VAR_8 == VAR_5) {
  VAR_11 = FUNC_0(VAR_9, VAR_3);

  VAR_7->txa_wnd = (VAR_11 == 0) ?
      VAR_0 : FUNC_2(VAR_11, VAR_0);

  VAR_12 = FUNC_0(VAR_9, VAR_4);
  VAR_7->txa_flags |= VAR_2;
  VAR_7->txa_attempts = 0;
 } else {

  VAR_7->txa_flags |= VAR_1;
 }
 return 1;
}
