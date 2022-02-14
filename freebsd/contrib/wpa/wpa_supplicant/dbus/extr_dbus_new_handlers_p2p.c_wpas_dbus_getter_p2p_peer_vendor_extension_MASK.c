
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vendor_extension ;
struct wpabuf {int dummy; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct peer_handler_args {int p2p_device_addr; TYPE_2__* wpa_s; } ;
struct p2p_peer_info {struct wpabuf** wps_vendor_ext; } ;
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
 int FUNC_1 (struct wpabuf**,int ,int) ;
 struct p2p_peer_info* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,struct wpabuf**,unsigned int,int *) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct wpabuf *VAR_9[VAR_3];
 unsigned int VAR_10, VAR_11 = 0;
 struct peer_handler_args *VAR_12 = VAR_8;
 const struct p2p_peer_info *VAR_13;

 VAR_13 = FUNC_2(VAR_12->wpa_s->global->p2p,
      VAR_12->p2p_device_addr, 0);
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_0,
          "failed to find peer");
  return VAR_2;
 }


 FUNC_1(VAR_9, 0, sizeof(VAR_9));
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_13->wps_vendor_ext[VAR_10] == ((void*)0))
   continue;
  VAR_9[VAR_11] = VAR_13->wps_vendor_ext[VAR_10];
  VAR_11++;
 }

 if (!FUNC_3(VAR_6, VAR_1,
         VAR_9,
         VAR_11, VAR_7))
  return VAR_2;

 return VAR_4;
}
