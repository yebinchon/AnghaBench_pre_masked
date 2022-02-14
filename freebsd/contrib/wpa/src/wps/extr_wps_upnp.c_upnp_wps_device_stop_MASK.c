
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int multicast_sd; scalar_t__ started; int * ip_addr_text; int * wlanevent; int subscriptions; int msearch_replies; } ;


 int VAR_0 ;
 int FUNC_0 (struct upnp_wps_device_sm*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct upnp_wps_device_sm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct upnp_wps_device_sm*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct upnp_wps_device_sm*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct upnp_wps_device_sm *VAR_1)
{
 if (!VAR_1 || !VAR_1->started)
  return;

 FUNC_8(VAR_0, "WPS UPnP: Stop device");
 FUNC_7(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(&VAR_1->msearch_replies);
 FUNC_6(&VAR_1->subscriptions, ((void*)0));

 FUNC_0(VAR_1, 1);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1->wlanevent);
 VAR_1->wlanevent = ((void*)0);
 FUNC_3(VAR_1->ip_addr_text);
 VAR_1->ip_addr_text = ((void*)0);
 if (VAR_1->multicast_sd >= 0)
  FUNC_1(VAR_1->multicast_sd);
 VAR_1->multicast_sd = -1;

 VAR_1->started = 0;
}
