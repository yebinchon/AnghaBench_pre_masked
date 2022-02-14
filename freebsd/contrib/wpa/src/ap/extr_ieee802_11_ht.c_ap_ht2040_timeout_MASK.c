
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {int secondary_ch; TYPE_1__* conf; } ;
struct TYPE_2__ {int secondary_channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void *VAR_1, void *VAR_2)
{
 struct hostapd_iface *VAR_3 = VAR_1;

 FUNC_1(VAR_0, "Switching to 40 MHz operation");

 VAR_3->conf->secondary_channel = VAR_3->secondary_ch;
 FUNC_0(VAR_3);
}
