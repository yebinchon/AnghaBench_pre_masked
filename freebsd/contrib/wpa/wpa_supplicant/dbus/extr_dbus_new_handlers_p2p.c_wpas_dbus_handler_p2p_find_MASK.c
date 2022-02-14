
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; unsigned int uint32_value; scalar_t__ array_type; unsigned int array_len; int * key; int * str_value; int * binarray_value; } ;
typedef enum p2p_discovery_type { ____Placeholder_p2p_discovery_type } p2p_discovery_type ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (struct wpa_dbus_dict_entry*) ;
 int FUNC_6 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*,unsigned int,int,int,int *,int *,int ,int ,int *,unsigned int) ;

DBusMessage * FUNC_14(DBusMessage *VAR_9,
      struct wpa_supplicant *VAR_10)
{
 struct wpa_dbus_dict_entry VAR_11;
 DBusMessage *VAR_12 = ((void*)0);
 DBusMessageIter VAR_13;
 DBusMessageIter VAR_14;
 unsigned int VAR_15 = 0;
 enum p2p_discovery_type VAR_16 = VAR_6;
 int VAR_17 = 0;
 unsigned int VAR_18;
 u8 *VAR_19 = ((void*)0);
 unsigned int VAR_20 = 0;

 FUNC_0(VAR_9, &VAR_13);
 VAR_11.key = ((void*)0);

 if (!FUNC_8(&VAR_13, &VAR_14, ((void*)0)))
  goto error;

 while (FUNC_7(&VAR_14)) {
  if (!FUNC_6(&VAR_14, &VAR_11))
   goto error;

  if (FUNC_4(VAR_11.key, "Timeout") == 0 &&
      VAR_11.type == VAR_1) {
   VAR_15 = VAR_11.uint32_value;
  } else if (FUNC_4(VAR_11.key, "RequestedDeviceTypes") == 0) {
   if (VAR_11.type != VAR_0 ||
       VAR_11.array_type != VAR_7)
    goto error_clear;

   FUNC_1(VAR_19);
   VAR_19 =
    FUNC_2(VAR_8 * VAR_11.array_len);
   if (!VAR_19)
    goto error_clear;

   for (VAR_18 = 0; VAR_18 < VAR_11.array_len; VAR_18++) {
    if (FUNC_10(VAR_11.binarray_value[VAR_18]) !=
        VAR_8)
     goto error_clear;
    FUNC_3(VAR_19 + VAR_18 * VAR_8,
       FUNC_9(VAR_11.binarray_value[VAR_18]),
       VAR_8);
   }
   VAR_17 = VAR_11.array_len;
  } else if (FUNC_4(VAR_11.key, "DiscoveryType") == 0 &&
      VAR_11.type == VAR_2) {
   if (FUNC_4(VAR_11.str_value, "start_with_full") == 0)
    VAR_16 = VAR_6;
   else if (FUNC_4(VAR_11.str_value, "social") == 0)
    VAR_16 = VAR_4;
   else if (FUNC_4(VAR_11.str_value, "progressive") == 0)
    VAR_16 = VAR_5;
   else
    goto error_clear;
  } else if (FUNC_4(VAR_11.key, "freq") == 0 &&
      (VAR_11.type == VAR_1 ||
       VAR_11.type == VAR_3)) {
   VAR_20 = VAR_11.uint32_value;
  } else
   goto error_clear;
  FUNC_5(&VAR_11);
 }

 VAR_10 = VAR_10->global->p2p_init_wpa_s;

 if (FUNC_13(VAR_10, VAR_15, VAR_16, VAR_17,
     VAR_19, ((void*)0), 0, 0, ((void*)0), VAR_20))
  VAR_12 = FUNC_12(
   VAR_9, "Could not start P2P find");

 FUNC_1(VAR_19);
 return VAR_12;

error_clear:
 FUNC_5(&VAR_11);
error:
 FUNC_1(VAR_19);
 VAR_12 = FUNC_11(VAR_9, VAR_11.key);
 return VAR_12;
}
