
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tgec_regs {int pause_quant; int maxfrm; int command_config; } ;
struct tgec_cfg {int pause_quant; scalar_t__ max_frame_length; scalar_t__ time_stamp_enable; scalar_t__ no_length_check_enable; scalar_t__ send_idle_enable; scalar_t__ rx_error_discard; scalar_t__ cmd_frame_enable; scalar_t__ loopback_enable; scalar_t__ tx_addr_ins_enable; scalar_t__ pause_ignore; scalar_t__ pause_forward_enable; scalar_t__ promiscuous_mode_enable; scalar_t__ wan_mode_enable; } ;


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
 int FUNC_0 (struct tgec_regs*,int) ;
 int FUNC_1 (struct tgec_regs*,int) ;
 int FUNC_2 (int,int *) ;

int FUNC_3(struct tgec_regs *VAR_11, struct tgec_cfg *VAR_12,
  uint32_t VAR_13)
{
 uint32_t VAR_14;


 VAR_14 = 0x40;
 if (VAR_12->wan_mode_enable)
  VAR_14 |= VAR_10;
 if (VAR_12->promiscuous_mode_enable)
  VAR_14 |= VAR_6;
 if (VAR_12->pause_forward_enable)
  VAR_14 |= VAR_4;
 if (VAR_12->pause_ignore)
  VAR_14 |= VAR_5;
 if (VAR_12->tx_addr_ins_enable)
  VAR_14 |= VAR_9;
 if (VAR_12->loopback_enable)
  VAR_14 |= VAR_2;
 if (VAR_12->cmd_frame_enable)
  VAR_14 |= VAR_0;
 if (VAR_12->rx_error_discard)
  VAR_14 |= VAR_7;
 if (VAR_12->send_idle_enable)
  VAR_14 |= VAR_8;
 if (VAR_12->no_length_check_enable)
  VAR_14 |= VAR_3;
 if (VAR_12->time_stamp_enable)
  VAR_14 |= VAR_1;
 FUNC_2(VAR_14, &VAR_11->command_config);


 FUNC_2((uint32_t)VAR_12->max_frame_length, &VAR_11->maxfrm);

 FUNC_2(VAR_12->pause_quant, &VAR_11->pause_quant);


 FUNC_0(VAR_11, 0xffffffff);
 FUNC_1(VAR_11, VAR_13);

 return 0;
}
