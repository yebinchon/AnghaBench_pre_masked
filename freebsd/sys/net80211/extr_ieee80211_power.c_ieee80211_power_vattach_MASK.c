
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; int iv_sta_ps; int iv_node_ps; int iv_set_tim; int iv_update_ps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_0(struct ieee80211vap *VAR_6)
{
 if (VAR_6->iv_opmode == VAR_0 ||
     VAR_6->iv_opmode == VAR_1) {

  VAR_6->iv_update_ps = VAR_5;
  VAR_6->iv_set_tim = VAR_3;
 }
 VAR_6->iv_node_ps = VAR_2;
 VAR_6->iv_sta_ps = VAR_4;
}
