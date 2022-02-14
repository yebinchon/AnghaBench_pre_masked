
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_eth_lm_init_params {int sfp_detection; int rx_equal; int static_values; int kr_fec_enable; int retimer_channel; int retimer_i2c_addr; int retimer_bus_id; int retimer_exist; struct al_eth_adapter* i2c_context; int link_training; void* default_mode; int sfp_i2c_addr; int sfp_bus_id; int lane; int * serdes_obj; int * adapter; int member_0; } ;
struct TYPE_2__ {int channel; int i2c_addr; int bus_id; int exist; } ;
struct al_eth_adapter {int sfp_detection_needed; int mac_mode; int lm_context; TYPE_1__ retimer; int dont_override_serdes; int lt_en; int an_en; int i2c_adapter_id; int serdes_lane; int serdes_obj; int hal_adapter; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,struct al_eth_lm_init_params*) ;

__attribute__((used)) static void
FUNC_1(struct al_eth_adapter *VAR_4)
{
 struct al_eth_lm_init_params VAR_5 = {0};

 VAR_5.adapter = &VAR_4->hal_adapter;
 VAR_5.serdes_obj = &VAR_4->serdes_obj;
 VAR_5.lane = VAR_4->serdes_lane;
 VAR_5.sfp_detection = VAR_4->sfp_detection_needed;
 if (VAR_4->sfp_detection_needed == 1) {
  VAR_5.sfp_bus_id = VAR_4->i2c_adapter_id;
  VAR_5.sfp_i2c_addr = VAR_3;
 }

 if (VAR_4->sfp_detection_needed == 0) {
  switch (VAR_4->mac_mode) {
  case 129:
   if ((VAR_4->lt_en != 0) && (VAR_4->an_en != 0))
    VAR_5.default_mode = VAR_0;
   else
    VAR_5.default_mode = VAR_1;
   break;
  case 128:
   VAR_5.default_mode = VAR_2;
   break;
  default:
   VAR_5.default_mode = VAR_0;
  }
 } else
  VAR_5.default_mode = VAR_0;

 VAR_5.link_training = VAR_4->lt_en;
 VAR_5.rx_equal = 1;
 VAR_5.static_values = !VAR_4->dont_override_serdes;
 VAR_5.i2c_context = VAR_4;
 VAR_5.kr_fec_enable = 0;

 VAR_5.retimer_exist = VAR_4->retimer.exist;
 VAR_5.retimer_bus_id = VAR_4->retimer.bus_id;
 VAR_5.retimer_i2c_addr = VAR_4->retimer.i2c_addr;
 VAR_5.retimer_channel = VAR_4->retimer.channel;

 FUNC_0(&VAR_4->lm_context, &VAR_5);
}
