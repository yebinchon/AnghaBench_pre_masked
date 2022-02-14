
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_dbus_property_desc {int dummy; } ;
struct peer_handler_args {int p2p_device_addr; TYPE_2__* wpa_s; } ;
struct p2p_peer_info {int group_capab; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {TYPE_1__* global; } ;
struct TYPE_3__ {int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 struct p2p_peer_info* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,int *,int *) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct peer_handler_args *VAR_9 = VAR_8;
 const struct p2p_peer_info *VAR_10;

 VAR_10 = FUNC_2(VAR_9->wpa_s->global->p2p,
      VAR_9->p2p_device_addr, 0);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_0,
          "failed to find peer");
  return VAR_3;
 }

 if (!FUNC_3(VAR_6, VAR_2,
           &VAR_10->group_capab, VAR_7)) {
  FUNC_1(VAR_7, VAR_1, "no memory");
  return VAR_3;
 }

 return VAR_4;
}
