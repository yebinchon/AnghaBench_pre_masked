
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct al_eth_flow_control_params {int obay_enable; int gen_enable; int** prio_q_map; int quanta_th; int quanta; int rx_fifo_th_low; int rx_fifo_th_high; int type; } ;
struct TYPE_2__ {int flow_ctrl_active; } ;
struct al_eth_adapter {int hal_adapter; struct al_eth_flow_control_params flow_ctrl_params; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct al_eth_flow_control_params*) ;

__attribute__((used)) static int
FUNC_1(struct al_eth_adapter *VAR_8)
{
 struct al_eth_flow_control_params *VAR_9;
 uint8_t VAR_10 = VAR_8->link_config.flow_ctrl_active;
 int VAR_11;

 VAR_9 = &VAR_8->flow_ctrl_params;

 VAR_9->type = VAR_0;
 VAR_9->obay_enable =
     ((VAR_10 & VAR_5) != 0);
 VAR_9->gen_enable =
     ((VAR_10 & VAR_6) != 0);

 VAR_9->rx_fifo_th_high = VAR_3;
 VAR_9->rx_fifo_th_low = VAR_4;
 VAR_9->quanta = VAR_1;
 VAR_9->quanta_th = VAR_2;


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_9->prio_q_map[0][VAR_11] = 1 << (VAR_11 >> 1);

 FUNC_0(&VAR_8->hal_adapter, VAR_9);

 return (0);
}
