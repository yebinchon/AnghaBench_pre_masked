
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node_table {int dummy; } ;
struct ieee80211com {struct ieee80211_node_table ic_sta; } ;


 int FUNC_0 (struct ieee80211_node_table*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_1)
{
 struct ieee80211_node_table *VAR_2 = &VAR_1->ic_sta;

 FUNC_0(VAR_2, VAR_0, ((void*)0));
}
