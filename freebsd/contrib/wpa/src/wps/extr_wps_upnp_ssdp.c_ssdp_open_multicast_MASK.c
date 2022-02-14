
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {scalar_t__ multicast_sd; int ip_addr; } ;


 scalar_t__ FUNC_0 (int ,int *) ;

int FUNC_1(struct upnp_wps_device_sm *VAR_0)
{
 VAR_0->multicast_sd = FUNC_0(VAR_0->ip_addr, ((void*)0));
 if (VAR_0->multicast_sd < 0)
  return -1;
 return 0;
}
