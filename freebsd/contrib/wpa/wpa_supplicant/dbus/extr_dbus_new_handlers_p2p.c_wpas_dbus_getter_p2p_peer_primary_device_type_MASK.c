
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_dbus_property_desc {int dummy; } ;
struct peer_handler_args {int p2p_device_addr; TYPE_2__* wpa_s; } ;
struct p2p_peer_info {scalar_t__ pri_dev_type; } ;
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
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 struct p2p_peer_info* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,char*,int ,int *) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_6,
 DBusMessageIter *VAR_7, DBusError *VAR_8, void *VAR_9)
{
 struct peer_handler_args *VAR_10 = VAR_9;
 const struct p2p_peer_info *VAR_11;

 VAR_11 = FUNC_2(VAR_10->wpa_s->global->p2p,
      VAR_10->p2p_device_addr, 0);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_8, VAR_0,
          "failed to find peer");
  return VAR_3;
 }

 if (!FUNC_3(VAR_7, VAR_2,
          (char *)
          VAR_11->pri_dev_type,
          VAR_5, VAR_8)) {
  FUNC_1(VAR_8, VAR_1, "no memory");
  return VAR_3;
 }

 return VAR_4;
}
