
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_context {int dummy; } ;
struct upnp_wps_device_sm {int interfaces; int subscriptions; int msearch_replies; } ;
struct upnp_wps_device_interface {int list; struct upnp_wps_device_interface* ap_pin; void* priv; struct wps_context* wps; struct upnp_wps_device_interface* ctx; int peers; } ;
struct upnp_wps_device_ctx {int list; struct upnp_wps_device_ctx* ap_pin; void* priv; struct wps_context* wps; struct upnp_wps_device_ctx* ctx; int peers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct upnp_wps_device_interface*) ;
 void* FUNC_3 (int) ;
 struct upnp_wps_device_sm* VAR_2 ;
 int FUNC_4 (struct upnp_wps_device_sm*,void*) ;
 scalar_t__ FUNC_5 (struct upnp_wps_device_sm*,char*) ;
 int FUNC_6 (int ,char*,...) ;

struct upnp_wps_device_sm *
FUNC_7(struct upnp_wps_device_ctx *VAR_3, struct wps_context *VAR_4,
       void *VAR_5, char *VAR_6)
{
 struct upnp_wps_device_sm *VAR_7;
 struct upnp_wps_device_interface *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_3(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_3->ap_pin);
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 FUNC_6(VAR_0, "WPS UPnP: Init interface instance %p", VAR_8);

 FUNC_1(&VAR_8->peers);
 VAR_8->ctx = VAR_3;
 VAR_8->wps = VAR_4;
 VAR_8->priv = VAR_5;

 if (VAR_2) {
  FUNC_6(VAR_0, "WPS UPnP: Share existing device "
      "context");
  VAR_7 = VAR_2;
 } else {
  FUNC_6(VAR_0, "WPS UPnP: Initialize device context");
  VAR_7 = FUNC_3(sizeof(*VAR_7));
  if (!VAR_7) {
   FUNC_6(VAR_1, "WPS UPnP: upnp_wps_device_init "
       "failed");
   FUNC_2(VAR_8);
   FUNC_2(VAR_3->ap_pin);
   FUNC_2(VAR_3);
   return ((void*)0);
  }
  VAR_2 = VAR_7;

  FUNC_1(&VAR_7->msearch_replies);
  FUNC_1(&VAR_7->subscriptions);
  FUNC_1(&VAR_7->interfaces);
  VAR_9 = 1;
 }

 FUNC_0(&VAR_7->interfaces, &VAR_8->list);

 if (VAR_9 && FUNC_5(VAR_7, VAR_6)) {
  FUNC_4(VAR_7, VAR_5);
  return ((void*)0);
 }


 return VAR_7;
}
