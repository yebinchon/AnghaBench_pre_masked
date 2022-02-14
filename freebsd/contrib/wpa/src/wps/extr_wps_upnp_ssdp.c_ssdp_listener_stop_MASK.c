
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int ssdp_sd; scalar_t__ ssdp_sd_registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct upnp_wps_device_sm*,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;

void FUNC_3(struct upnp_wps_device_sm *VAR_3)
{
 if (VAR_3->ssdp_sd_registered) {
  FUNC_2(VAR_3->ssdp_sd, VAR_1);
  VAR_3->ssdp_sd_registered = 0;
 }

 if (VAR_3->ssdp_sd != -1) {
  FUNC_0(VAR_3->ssdp_sd);
  VAR_3->ssdp_sd = -1;
 }

 FUNC_1(VAR_2, VAR_3,
        VAR_0);
}
