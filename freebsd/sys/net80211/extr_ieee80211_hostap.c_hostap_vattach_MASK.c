
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_recv_pspoll; int iv_deliver_data; int iv_opdetach; int iv_recv_ctl; int iv_recv_mgmt; int iv_input; int iv_newstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct ieee80211vap *VAR_7)
{
 VAR_7->iv_newstate = VAR_2;
 VAR_7->iv_input = VAR_1;
 VAR_7->iv_recv_mgmt = VAR_4;
 VAR_7->iv_recv_ctl = VAR_3;
 VAR_7->iv_opdetach = VAR_5;
 VAR_7->iv_deliver_data = VAR_0;
 VAR_7->iv_recv_pspoll = VAR_6;
}
