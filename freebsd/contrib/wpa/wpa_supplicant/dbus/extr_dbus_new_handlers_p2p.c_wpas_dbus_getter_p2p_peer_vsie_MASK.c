
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_dbus_property_desc {int dummy; } ;
struct peer_handler_args {int p2p_device_addr; TYPE_3__* wpa_s; } ;
struct p2p_peer_info {TYPE_1__* vendor_elems; } ;
typedef int dbus_bool_t ;
struct TYPE_6__ {TYPE_2__* global; } ;
struct TYPE_5__ {int p2p; } ;
struct TYPE_4__ {int used; scalar_t__ buf; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 struct p2p_peer_info* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,char*,int ,int *) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct peer_handler_args *VAR_7 = VAR_6;
 const struct p2p_peer_info *VAR_8;

 VAR_8 = FUNC_1(VAR_7->wpa_s->global->p2p,
      VAR_7->p2p_device_addr, 0);
 if (!VAR_8) {
  FUNC_0(VAR_5, VAR_0, "failed to find peer");
  return VAR_2;
 }

 if (!VAR_8->vendor_elems)
  return FUNC_2(VAR_4,
             VAR_1,
             ((void*)0), 0, VAR_5);

 return FUNC_2(
  VAR_4, VAR_1, (char *) VAR_8->vendor_elems->buf,
  VAR_8->vendor_elems->used, VAR_5);
}
