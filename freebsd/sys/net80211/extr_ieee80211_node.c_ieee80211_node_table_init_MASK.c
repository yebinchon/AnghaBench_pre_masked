
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_name; } ;
struct ieee80211_node_table {char const* nt_name; int nt_inact_init; int nt_keyixmax; struct ieee80211_node** nt_keyixmap; scalar_t__ nt_count; int nt_node; struct ieee80211com* nt_ic; } ;
struct ieee80211_node {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_node_table*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211com*,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_3,
 struct ieee80211_node_table *VAR_4,
 const char *VAR_5, int VAR_6, int VAR_7)
{

 VAR_4->nt_ic = VAR_3;
 FUNC_1(VAR_4, VAR_3->ic_name);
 FUNC_2(&VAR_4->nt_node);
 VAR_4->nt_count = 0;
 VAR_4->nt_name = VAR_5;
 VAR_4->nt_inact_init = VAR_6;
 VAR_4->nt_keyixmax = VAR_7;
 if (VAR_4->nt_keyixmax > 0) {
  VAR_4->nt_keyixmap = (struct ieee80211_node **) FUNC_0(
   VAR_7 * sizeof(struct ieee80211_node *),
   VAR_2,
   VAR_0 | VAR_1);
  if (VAR_4->nt_keyixmap == ((void*)0))
   FUNC_3(VAR_3,
       "Cannot allocate key index map with %u entries\n",
       VAR_7);
 } else
  VAR_4->nt_keyixmap = ((void*)0);
}
