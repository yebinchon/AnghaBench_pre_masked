
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node_table {int dummy; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_frame_min {int i_addr2; } ;


 scalar_t__ FUNC_0 (struct ieee80211_frame_min const*) ;
 struct ieee80211_node* FUNC_1 (struct ieee80211_node_table*,int ) ;

__attribute__((used)) static __inline struct ieee80211_node *
FUNC_2(struct ieee80211_node_table *VAR_0,
    const struct ieee80211_frame_min *VAR_1)
{
 if (FUNC_0(VAR_1))
  return ((void*)0);
 return FUNC_1(VAR_0, VAR_1->i_addr2);
}
