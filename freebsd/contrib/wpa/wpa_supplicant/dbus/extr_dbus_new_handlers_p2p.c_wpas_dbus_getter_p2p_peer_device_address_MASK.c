
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_dbus_property_desc {int dummy; } ;
struct peer_handler_args {int p2p_device_addr; TYPE_2__* wpa_s; } ;
struct p2p_peer_info {scalar_t__ p2p_device_addr; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {TYPE_1__* global; } ;
struct TYPE_3__ {int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 struct p2p_peer_info* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,char*,int ,int *) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_4,
 DBusMessageIter *VAR_5, DBusError *VAR_6, void *VAR_7)
{
 struct peer_handler_args *VAR_8 = VAR_7;
 const struct p2p_peer_info *VAR_9;

 VAR_9 = FUNC_1(VAR_8->wpa_s->global->p2p,
      VAR_8->p2p_device_addr, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_0,
          "failed to find peer");
  return VAR_3;
 }

 return FUNC_2(
  VAR_5, VAR_1, (char *) VAR_9->p2p_device_addr,
  VAR_2, VAR_6);
}
