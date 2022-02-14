
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgec_cfg {int skip_fman11_workaround; int pause_quant; int max_frame_length; int tx_ipg_length; int time_stamp_enable; int lgth_check_nostdr; int no_length_check_enable; int send_idle_enable; int rx_error_discard; int cmd_frame_enable; int loopback_enable; int tx_addr_ins_enable; int pause_ignore; int pause_forward_enable; int promiscuous_mode_enable; int wan_mode_enable; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_0(struct tgec_cfg *VAR_16)
{
 VAR_16->wan_mode_enable = VAR_14;
 VAR_16->promiscuous_mode_enable = VAR_8;
 VAR_16->pause_forward_enable = VAR_5;
 VAR_16->pause_ignore = VAR_6;
 VAR_16->tx_addr_ins_enable = VAR_12;
 VAR_16->loopback_enable = VAR_2;
 VAR_16->cmd_frame_enable = VAR_0;
 VAR_16->rx_error_discard = VAR_9;
 VAR_16->send_idle_enable = VAR_10;
 VAR_16->no_length_check_enable = VAR_4;
 VAR_16->lgth_check_nostdr = VAR_1;
 VAR_16->time_stamp_enable = VAR_11;
 VAR_16->tx_ipg_length = VAR_13;
 VAR_16->max_frame_length = VAR_3;
 VAR_16->pause_quant = VAR_7;



}
