
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostapd_data {TYPE_3__* iface; TYPE_1__* conf; } ;
struct dpp_relay_config {int pkhash; int * ipaddr; int gas_resp_tx; int tx; struct hostapd_data* cb_ctx; } ;
struct dpp_controller_conf {int pkhash; int ipaddr; struct dpp_controller_conf* next; } ;
typedef int config ;
struct TYPE_6__ {TYPE_2__* interfaces; } ;
struct TYPE_5__ {int dpp; } ;
struct TYPE_4__ {struct dpp_controller_conf* dpp_controller; } ;


 scalar_t__ FUNC_0 (int ,struct dpp_relay_config*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dpp_relay_config*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_2)
{
 return 0;
}
