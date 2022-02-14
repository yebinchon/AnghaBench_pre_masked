
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {scalar_t__ event_send_all_queued; } ;


 int FUNC_0 (int ,int *,struct upnp_wps_device_sm*) ;
 int VAR_0 ;

void FUNC_1(struct upnp_wps_device_sm *VAR_1)
{
 if (VAR_1->event_send_all_queued)
  FUNC_0(VAR_0, ((void*)0), VAR_1);
 VAR_1->event_send_all_queued = 0;
}
