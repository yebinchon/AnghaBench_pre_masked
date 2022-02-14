
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node_table {scalar_t__ nt_count; int nt_node; } ;
struct ieee80211_node {int * ni_table; } ;


 int FUNC_0 (struct ieee80211_node_table*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ieee80211_node*,int ) ;
 int FUNC_3 (int *,struct ieee80211_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_node_table *VAR_2,
    struct ieee80211_node *VAR_3)
{

 FUNC_0(VAR_2);

 FUNC_3(&VAR_2->nt_node, VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_0);
 VAR_2->nt_count--;
 FUNC_1(VAR_2->nt_count >= 0,
     ("nt_count is negative (%d)!\n", VAR_2->nt_count));
 VAR_3->ni_table = ((void*)0);
}
