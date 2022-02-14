
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct hostapd_config* range; } ;
struct hostapd_config {size_t num_bss; int civic; int lci; struct hostapd_config* acs_chan_bias; struct hostapd_config* driver_params; TYPE_1__ acs_ch_list; struct hostapd_config* basic_rates; struct hostapd_config* supported_rates; struct hostapd_config* bss; } ;


 int FUNC_0 (struct hostapd_config) ;
 int FUNC_1 (struct hostapd_config*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct hostapd_config *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_bss; VAR_1++)
  FUNC_0(VAR_0->bss[VAR_1]);
 FUNC_1(VAR_0->bss);
 FUNC_1(VAR_0->supported_rates);
 FUNC_1(VAR_0->basic_rates);
 FUNC_1(VAR_0->acs_ch_list.range);
 FUNC_1(VAR_0->driver_params);



 FUNC_2(VAR_0->lci);
 FUNC_2(VAR_0->civic);

 FUNC_1(VAR_0);
}
