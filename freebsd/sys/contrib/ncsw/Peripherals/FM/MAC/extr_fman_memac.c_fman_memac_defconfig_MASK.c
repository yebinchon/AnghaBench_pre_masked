
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memac_cfg {void* wake_on_lan; void* debug_mode; void* tx_pbl_fwd; void* rx_pbl_fwd; void* rx_sfd_any; void* phy_tx_ena_on; void* pad_enable; int pause_quanta; int max_frame_length; int tx_ipg_length; void* time_stamp_enable; void* lgth_check_nostdr; void* no_length_check_enable; void* send_idle_enable; void* rx_error_discard; void* cmd_frame_enable; void* loopback_enable; void* tx_addr_ins_enable; void* pause_ignore; void* pause_forward_enable; void* promiscuous_mode_enable; void* wan_mode_enable; void* reset_on_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

void FUNC_0(struct memac_cfg *VAR_5)
{
    VAR_5->reset_on_init = VAR_3;
    VAR_5->wan_mode_enable = VAR_3;
    VAR_5->promiscuous_mode_enable = VAR_3;
    VAR_5->pause_forward_enable = VAR_3;
    VAR_5->pause_ignore = VAR_3;
    VAR_5->tx_addr_ins_enable = VAR_3;
    VAR_5->loopback_enable = VAR_3;
    VAR_5->cmd_frame_enable = VAR_3;
    VAR_5->rx_error_discard = VAR_3;
    VAR_5->send_idle_enable = VAR_3;
    VAR_5->no_length_check_enable = VAR_4;
    VAR_5->lgth_check_nostdr = VAR_3;
    VAR_5->time_stamp_enable = VAR_3;
    VAR_5->tx_ipg_length = VAR_2;
    VAR_5->max_frame_length = VAR_0;
    VAR_5->pause_quanta = VAR_1;
    VAR_5->pad_enable = VAR_4;
    VAR_5->phy_tx_ena_on = VAR_3;
    VAR_5->rx_sfd_any = VAR_3;
    VAR_5->rx_pbl_fwd = VAR_3;
    VAR_5->tx_pbl_fwd = VAR_3;
    VAR_5->debug_mode = VAR_3;
    VAR_5->wake_on_lan = VAR_3;
}
