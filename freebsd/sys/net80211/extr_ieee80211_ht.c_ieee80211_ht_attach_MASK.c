
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_curhtprotmode; int ic_htprotmode; int ic_ampdu_rx_stop; int ic_ampdu_rx_start; int ic_bar_response; int ic_addba_stop; int ic_addba_response_timeout; int ic_addba_response; int ic_addba_request; int ic_ampdu_enable; int ic_send_action; int ic_recv_action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_0(struct ieee80211com *VAR_12)
{

 VAR_12->ic_recv_action = VAR_9;
 VAR_12->ic_send_action = VAR_10;
 VAR_12->ic_ampdu_enable = VAR_7;
 VAR_12->ic_addba_request = VAR_4;
 VAR_12->ic_addba_response = VAR_5;
 VAR_12->ic_addba_response_timeout = VAR_11;
 VAR_12->ic_addba_stop = VAR_6;
 VAR_12->ic_bar_response = VAR_8;
 VAR_12->ic_ampdu_rx_start = VAR_2;
 VAR_12->ic_ampdu_rx_stop = VAR_3;

 VAR_12->ic_htprotmode = VAR_1;
 VAR_12->ic_curhtprotmode = VAR_0;
}
