
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_opmode; struct ieee80211_node* iv_bss; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_node_table {int dummy; } ;
struct ieee80211_node {int ni_chan; int ni_rates; struct ieee80211_node_table* ni_table; int ni_macaddr; struct ieee80211com* ni_ic; struct ieee80211vap* ni_vap; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ieee80211_node_table*) ;
 int FUNC_2 (struct ieee80211_node_table*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ieee80211_node*,struct ieee80211_node*) ;
 int FUNC_4 (struct ieee80211_node*,int *,int) ;
 int FUNC_5 (struct ieee80211vap*,scalar_t__,int) ;
 int FUNC_6 (struct ieee80211_node*) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*,int ) ;
 int FUNC_9 (struct ieee80211vap*) ;
 int FUNC_10 (struct ieee80211_node_table*,struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_11(struct ieee80211_node *VAR_7)
{
 struct ieee80211vap *VAR_8 = VAR_7->ni_vap;
 struct ieee80211com *VAR_9 = VAR_7->ni_ic;
 struct ieee80211_node *VAR_10;
 int VAR_11;




 VAR_10 = VAR_8->iv_bss;




 VAR_11 = (VAR_10 != ((void*)0) &&
  VAR_8->iv_state == VAR_6 &&
  FUNC_0(VAR_10->ni_macaddr, VAR_7->ni_macaddr));
 VAR_8->iv_bss = VAR_7;
 if (VAR_10 != ((void*)0)) {
  struct ieee80211_node_table *VAR_12 = VAR_10->ni_table;

  FUNC_3(VAR_7, VAR_10);
  FUNC_6(VAR_10);

  FUNC_1(VAR_12);
  FUNC_10(VAR_12, VAR_10);
  FUNC_2(VAR_12);

  VAR_10 = ((void*)0);
 }





 FUNC_4(VAR_8->iv_bss, &VAR_8->iv_bss->ni_rates,
  VAR_1 | VAR_2);

 FUNC_8(VAR_9, VAR_7->ni_chan);





 FUNC_7(VAR_9);
 FUNC_9(VAR_8);

 if (VAR_8->iv_opmode == VAR_3) {
  if (VAR_11) {

   FUNC_5(VAR_8, VAR_4, 1);
  } else {






   FUNC_5(VAR_8, VAR_5,
    VAR_0);
  }
 } else
  FUNC_5(VAR_8, VAR_6, -1);
 return 1;
}
