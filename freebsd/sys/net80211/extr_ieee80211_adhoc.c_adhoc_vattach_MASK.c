
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; int iv_caps; int iv_opdetach; int iv_recv_ctl; int iv_recv_mgmt; int iv_input; int iv_newstate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211vap *VAR_8)
{
 VAR_8->iv_newstate = VAR_3;
 VAR_8->iv_input = VAR_2;
 if (VAR_8->iv_opmode == VAR_1)
  VAR_8->iv_recv_mgmt = VAR_5;
 else
  VAR_8->iv_recv_mgmt = VAR_7;
 VAR_8->iv_recv_ctl = VAR_4;
 VAR_8->iv_opdetach = VAR_6;
}
