
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int ssdp_sd_registered; int ssdp_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,struct upnp_wps_device_sm*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct upnp_wps_device_sm*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct upnp_wps_device_sm *VAR_3)
{
 VAR_3->ssdp_sd = FUNC_1();

 if (FUNC_0(VAR_3->ssdp_sd, VAR_0,
    VAR_2, ((void*)0), VAR_3))
  goto fail;
 VAR_3->ssdp_sd_registered = 1;
 return 0;

fail:

 FUNC_3(VAR_1, "WPS UPnP: ssdp_listener_start failed");
 FUNC_2(VAR_3);
 return -1;
}
