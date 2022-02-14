
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int dummy; } ;
typedef enum hostapd_chan_status { ____Placeholder_hostapd_chan_status } hostapd_chan_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline enum hostapd_chan_status FUNC_1(struct hostapd_iface *VAR_2)
{
 FUNC_0(VAR_1, "ACS was disabled on your build, rebuild hostapd with CONFIG_ACS=y or set channel");
 return VAR_0;
}
