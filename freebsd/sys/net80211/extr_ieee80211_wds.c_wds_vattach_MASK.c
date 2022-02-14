
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_opdetach; int iv_recv_mgmt; int iv_input; int iv_newstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct ieee80211vap *VAR_4)
{
 VAR_4->iv_newstate = VAR_1;
 VAR_4->iv_input = VAR_0;
 VAR_4->iv_recv_mgmt = VAR_2;
 VAR_4->iv_opdetach = VAR_3;
}
