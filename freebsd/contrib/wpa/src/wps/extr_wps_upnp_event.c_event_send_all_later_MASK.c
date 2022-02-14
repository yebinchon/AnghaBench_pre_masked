
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int event_send_all_queued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *,struct upnp_wps_device_sm*) ;
 int VAR_2 ;

void FUNC_1(struct upnp_wps_device_sm *VAR_3)
{




 if (VAR_3->event_send_all_queued)
  return;
 VAR_3->event_send_all_queued = 1;
 FUNC_0(VAR_1, VAR_0,
          VAR_2, ((void*)0), VAR_3);
}
