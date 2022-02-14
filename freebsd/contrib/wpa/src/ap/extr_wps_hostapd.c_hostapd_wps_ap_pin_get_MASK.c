
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {char const* ap_pin; } ;



const char * FUNC_0(struct hostapd_data *VAR_0)
{
 return VAR_0->conf->ap_pin;
}
