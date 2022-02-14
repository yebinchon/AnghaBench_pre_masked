
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memac_regs {int tx_fifo_sections; int if_mode; int * pause_thresh; int * pause_quanta; int maxfrm; int command_config; } ;
struct memac_cfg {scalar_t__ loopback_enable; scalar_t__ pause_quanta; scalar_t__ max_frame_length; scalar_t__ wake_on_lan; scalar_t__ pad_enable; scalar_t__ rx_sfd_any; scalar_t__ no_length_check_enable; scalar_t__ send_idle_enable; scalar_t__ cmd_frame_enable; scalar_t__ tx_addr_ins_enable; scalar_t__ pause_ignore; scalar_t__ pause_forward_enable; scalar_t__ promiscuous_mode_enable; scalar_t__ wan_mode_enable; } ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;
typedef enum enet_interface { ____Placeholder_enet_interface } enet_interface ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct memac_regs*,int) ;
 int FUNC_1 (struct memac_regs*,int,int ) ;
 int FUNC_2 (int,int *) ;

int FUNC_3(struct memac_regs *VAR_24,
        struct memac_cfg *VAR_25,
        enum enet_interface VAR_26,
        enum enet_speed VAR_27,
 bool VAR_28,
        uint32_t VAR_29)
{
    uint32_t VAR_30;


    VAR_30 = 0;
    if (VAR_25->wan_mode_enable)
        VAR_30 |= VAR_12;
    if (VAR_25->promiscuous_mode_enable)
        VAR_30 |= VAR_7;
    if (VAR_25->pause_forward_enable)
        VAR_30 |= VAR_5;
    if (VAR_25->pause_ignore)
        VAR_30 |= VAR_6;
    if (VAR_25->tx_addr_ins_enable)
        VAR_30 |= VAR_10;
    if (VAR_25->loopback_enable)
        VAR_30 |= VAR_2;
    if (VAR_25->cmd_frame_enable)
        VAR_30 |= VAR_0;
    if (VAR_25->send_idle_enable)
        VAR_30 |= VAR_8;
    if (VAR_25->no_length_check_enable)
        VAR_30 |= VAR_4;
    if (VAR_25->rx_sfd_any)
        VAR_30 |= VAR_9;
    if (VAR_25->pad_enable)
        VAR_30 |= VAR_11;
    if (VAR_25->wake_on_lan)
        VAR_30 |= VAR_3;

    VAR_30 |= VAR_1;

    FUNC_2(VAR_30, &VAR_24->command_config);


    FUNC_2((uint32_t)VAR_25->max_frame_length, &VAR_24->maxfrm);


    FUNC_2((uint32_t)VAR_25->pause_quanta, &VAR_24->pause_quanta[0]);
    FUNC_2((uint32_t)0, &VAR_24->pause_thresh[0]);


    VAR_30 = 0;
    switch (VAR_26) {
    case 128:
    case 129:
        VAR_30 |= VAR_17;
        break;
    default:
        VAR_30 |= VAR_14;
        if (VAR_26 == VAR_13 && !VAR_25->loopback_enable)
            VAR_30 |= VAR_15 | VAR_16;
    }
    FUNC_2(VAR_30, &VAR_24->if_mode);


 VAR_30 = 0;
 if (VAR_26 == 128 ||
  VAR_26 == 129) {
  if(VAR_28) {
   VAR_30 |= (VAR_21 |
    VAR_22);
  } else {
   VAR_30 |= (VAR_19 |
    VAR_22);
  }
 } else {
  VAR_30 |= (VAR_20 |
    VAR_23);
 }
 FUNC_2(VAR_30, &VAR_24->tx_fifo_sections);


    FUNC_0(VAR_24, 0xffffffff);
    FUNC_1(VAR_24, VAR_29, VAR_18);

    return 0;
}
