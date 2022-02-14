
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_node_table {int nt_count; int * nt_hash; int nt_node; struct ieee80211com* nt_ic; } ;
struct ieee80211_node {struct ieee80211_node_table* ni_table; int ni_macaddr; } ;


 int FUNC_0 (struct ieee80211com*,int ) ;
 int FUNC_1 (struct ieee80211_node_table*) ;
 int FUNC_2 (int *,struct ieee80211_node*,int ) ;
 int FUNC_3 (int *,struct ieee80211_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_node_table *VAR_2,
    struct ieee80211_node *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_2->nt_ic;
 int VAR_5;

 FUNC_1(VAR_2);

 VAR_5 = FUNC_0(VAR_4, VAR_3->ni_macaddr);
 (void) VAR_4;
 FUNC_3(&VAR_2->nt_node, VAR_3, VAR_1);
 FUNC_2(&VAR_2->nt_hash[VAR_5], VAR_3, VAR_0);
 VAR_2->nt_count++;
 VAR_3->ni_table = VAR_2;
}
