
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int dummy; } ;
struct ieee80211_node {int ni_mlhtimer; int ni_mltimer; int ni_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

void
FUNC_1(struct ieee80211vap *VAR_1, struct ieee80211_node *VAR_2)
{
 VAR_2->ni_flags |= VAR_0;
 FUNC_0(&VAR_2->ni_mltimer, 1);
 FUNC_0(&VAR_2->ni_mlhtimer, 1);
}
