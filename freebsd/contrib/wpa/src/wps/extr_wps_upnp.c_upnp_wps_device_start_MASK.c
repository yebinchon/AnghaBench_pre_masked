
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int started; int multicast_sd; int ssdp_sd; int mac_addr; int ip_addr_text; int ip_addr; scalar_t__ advertise_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct upnp_wps_device_sm*) ;
 scalar_t__ FUNC_2 (char*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (struct upnp_wps_device_sm*) ;
 scalar_t__ FUNC_4 (struct upnp_wps_device_sm*) ;
 int FUNC_5 (struct upnp_wps_device_sm*) ;
 scalar_t__ FUNC_6 (struct upnp_wps_device_sm*) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_8(struct upnp_wps_device_sm *VAR_1, char *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -1;

 if (VAR_1->started)
  FUNC_5(VAR_1);

 VAR_1->multicast_sd = -1;
 VAR_1->ssdp_sd = -1;
 VAR_1->started = 1;
 VAR_1->advertise_count = 0;


 if (FUNC_0(VAR_2))
  goto fail;


 if (FUNC_2(VAR_2, &VAR_1->ip_addr, &VAR_1->ip_addr_text,
      VAR_1->mac_addr)) {
  FUNC_7(VAR_0, "WPS UPnP: Could not get IP/MAC address "
      "for %s. Does it have IP address?", VAR_2);
  goto fail;
 }




 if (FUNC_6(VAR_1))
  goto fail;


 if (FUNC_3(VAR_1))
  goto fail;


 if (FUNC_4(VAR_1) < 0)
  goto fail;






 if (FUNC_1(VAR_1))
  goto fail;

 return 0;

fail:
 FUNC_5(VAR_1);
 return -1;
}
