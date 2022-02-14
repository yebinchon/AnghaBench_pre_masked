
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; int dbus_groupobj_path; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct peer_handler_args {struct wpa_supplicant* wpa_s; int p2p_device_addr; } ;
struct peer_group_data {int nb_paths; int * paths; scalar_t__ error; struct p2p_peer_info const* info; struct wpa_supplicant* wpa_s; } ;
struct p2p_peer_info {int p2p_device_addr; } ;
typedef int dbus_bool_t ;
typedef int data ;
struct TYPE_2__ {int p2p; struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_4 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct peer_group_data*,int ,int) ;
 struct p2p_peer_info* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,struct peer_group_data*) ;
 int FUNC_7 (int *,int ,int *,int,int *) ;
 struct wpa_supplicant* FUNC_8 (struct wpa_supplicant*,int ) ;

dbus_bool_t FUNC_9(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct peer_handler_args *VAR_9 = VAR_8;
 const struct p2p_peer_info *VAR_10;
 struct peer_group_data VAR_11;
 struct wpa_supplicant *VAR_12, *VAR_13;
 dbus_bool_t VAR_14 = VAR_3;

 VAR_10 = FUNC_5(VAR_9->wpa_s->global->p2p,
      VAR_9->p2p_device_addr, 0);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_0,
          "failed to find peer");
  return VAR_3;
 }

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));

 VAR_12 = VAR_9->wpa_s;
 VAR_12 = VAR_12->global->p2p_init_wpa_s;

 VAR_13 = FUNC_8(VAR_12, VAR_10->p2p_device_addr);
 if (VAR_13) {
  VAR_11.paths = FUNC_2(1, sizeof(char *));
  if (VAR_11.paths == ((void*)0))
   goto out_of_memory;
  VAR_11.paths[0] = VAR_13->dbus_groupobj_path;
  VAR_11.nb_paths = 1;
 }

 VAR_11.wpa_s = VAR_9->wpa_s;
 VAR_11.info = VAR_10;

 FUNC_6(VAR_9->wpa_s->global->p2p,
          VAR_4, &VAR_11);
 if (VAR_11.error)
  goto out_of_memory;

 if (VAR_11.paths == ((void*)0)) {
  return FUNC_7(
   VAR_6, VAR_2, ((void*)0), 0, VAR_7);
 }

 VAR_14 = FUNC_7(VAR_6,
        VAR_2,
        VAR_11.paths,
        VAR_11.nb_paths, VAR_7);
 goto out;

out_of_memory:
 FUNC_1(VAR_7, VAR_1, "no memory");
out:
 FUNC_3(VAR_11.paths);
 return VAR_14;
}
