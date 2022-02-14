
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_eth_lm_init_params {scalar_t__ sfp_detection; scalar_t__ retimer_exist; int led_config; int lm_pause; int sfp_detect_force_mode; int max_speed; int gpio_present; int gpio_get; int kr_fec_enable; int get_random_byte; int i2c_context; int * i2c_write; int * i2c_read; int static_values; int rx_equal; int link_training; int default_dac_len; int default_mode; int retimer_tx_channel; int retimer_channel; int retimer_i2c_addr; int retimer_bus_id; int retimer_type; int sfp_i2c_addr; int sfp_bus_id; int lane; int serdes_obj; int adapter; } ;
struct TYPE_2__ {int selector_field; int fec_capability; int technology; scalar_t__ next_page; scalar_t__ acknowledge; scalar_t__ remote_fault; scalar_t__ capability; } ;
struct al_eth_lm_context {scalar_t__ sfp_detection; scalar_t__ retimer_exist; int rx_param_dirty; int tx_param_dirty; int link_state; scalar_t__ retimer_configured; int led_config; int lm_pause; int sfp_detect_force_mode; int max_speed; int gpio_present; int gpio_get; scalar_t__ serdes_rx_params_valid; scalar_t__ serdes_tx_params_valid; int mode; TYPE_1__ local_adv; int * i2c_write; int * i2c_read; int get_random_byte; int i2c_context; int static_values; int rx_equal; int link_training; int default_dac_len; int default_mode; int retimer_tx_channel; int retimer_channel; int retimer_i2c_addr; int retimer_bus_id; int retimer_type; int sfp_i2c_addr; int sfp_bus_id; int lane; int serdes_obj; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;

int
FUNC_1(struct al_eth_lm_context *VAR_4,
    struct al_eth_lm_init_params *VAR_5)
{

 VAR_4->adapter = VAR_5->adapter;
 VAR_4->serdes_obj = VAR_5->serdes_obj;
 VAR_4->lane = VAR_5->lane;
 VAR_4->sfp_detection = VAR_5->sfp_detection;
 VAR_4->sfp_bus_id = VAR_5->sfp_bus_id;
 VAR_4->sfp_i2c_addr = VAR_5->sfp_i2c_addr;

 VAR_4->retimer_exist = VAR_5->retimer_exist;
 VAR_4->retimer_type = VAR_5->retimer_type;
 VAR_4->retimer_bus_id = VAR_5->retimer_bus_id;
 VAR_4->retimer_i2c_addr = VAR_5->retimer_i2c_addr;
 VAR_4->retimer_channel = VAR_5->retimer_channel;
 VAR_4->retimer_tx_channel = VAR_5->retimer_tx_channel;

 VAR_4->default_mode = VAR_5->default_mode;
 VAR_4->default_dac_len = VAR_5->default_dac_len;
 VAR_4->link_training = VAR_5->link_training;
 VAR_4->rx_equal = VAR_5->rx_equal;
 VAR_4->static_values = VAR_5->static_values;
 VAR_4->i2c_read = VAR_5->i2c_read;
 VAR_4->i2c_write = VAR_5->i2c_write;
 VAR_4->i2c_context = VAR_5->i2c_context;
 VAR_4->get_random_byte = VAR_5->get_random_byte;


 FUNC_0((VAR_4->sfp_detection == VAR_3) ||
     (VAR_4->i2c_read != ((void*)0)));

 FUNC_0((VAR_4->retimer_exist == VAR_3) ||
     (VAR_4->i2c_write != ((void*)0)));

 VAR_4->local_adv.selector_field = 1;
 VAR_4->local_adv.capability = 0;
 VAR_4->local_adv.remote_fault = 0;
 VAR_4->local_adv.acknowledge = 0;
 VAR_4->local_adv.next_page = 0;
 VAR_4->local_adv.technology = VAR_0;
 VAR_4->local_adv.fec_capability = VAR_5->kr_fec_enable;

 VAR_4->mode = VAR_2;
 VAR_4->serdes_tx_params_valid = VAR_3;
 VAR_4->serdes_rx_params_valid = VAR_3;

 VAR_4->rx_param_dirty = 1;
 VAR_4->tx_param_dirty = 1;

 VAR_4->gpio_get = VAR_5->gpio_get;
 VAR_4->gpio_present = VAR_5->gpio_present;

 VAR_4->max_speed = VAR_5->max_speed;
 VAR_4->sfp_detect_force_mode = VAR_5->sfp_detect_force_mode;

 VAR_4->lm_pause = VAR_5->lm_pause;

 VAR_4->led_config = VAR_5->led_config;

 VAR_4->retimer_configured = VAR_3;

 VAR_4->link_state = VAR_1;

 return (0);
}
