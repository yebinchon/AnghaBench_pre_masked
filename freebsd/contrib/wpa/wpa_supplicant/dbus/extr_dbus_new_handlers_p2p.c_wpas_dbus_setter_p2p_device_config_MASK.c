
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_2__* conf; TYPE_1__* global; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; scalar_t__ array_type; scalar_t__ array_len; int uint32_value; int key; int bool_value; int bytearray_value; int str_value; int ** binarray_value; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {char* device_name; int changed_parameters; unsigned int num_sec_device_types; int p2p_go_intent; int p2p_listen_reg_class; int p2p_listen_channel; int p2p_oper_reg_class; int p2p_oper_channel; char* p2p_ssid_postfix; int p2p_group_idle; int disassoc_low_ack; int p2p_search_delay; int p2p_no_group_iface; int ip_addr_end; int ip_addr_start; int ip_addr_mask; int ip_addr_go; int p2p_intra_bss; int persistent_reconnect; int ** wps_vendor_ext; int * sec_device_type; int device_type; } ;
struct TYPE_3__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct wpa_dbus_dict_entry*) ;
 int FUNC_8 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (struct wpa_supplicant*,int *,int *,int *) ;
 int FUNC_12 (struct wpa_supplicant*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct wpa_dbus_dict_entry) ;

dbus_bool_t FUNC_17(
 const struct wpa_dbus_property_desc *VAR_22,
 DBusMessageIter *VAR_23, DBusError *VAR_24, void *VAR_25)
{
 struct wpa_supplicant *VAR_26 = VAR_25;
 DBusMessageIter VAR_27, VAR_28;
 struct wpa_dbus_dict_entry VAR_29 = {.type = VAR_13 };
 unsigned int VAR_30;

 if (!FUNC_11(VAR_26, ((void*)0), ((void*)0), VAR_24))
  return VAR_15;

 VAR_26 = VAR_26->global->p2p_init_wpa_s;

 FUNC_0(VAR_23, &VAR_27);
 if (!FUNC_10(&VAR_27, &VAR_28, VAR_24))
  return VAR_15;

 while (FUNC_9(&VAR_28)) {
  if (!FUNC_8(&VAR_28, &VAR_29)) {
   FUNC_1(VAR_24, VAR_8,
          "invalid message format");
   return VAR_15;
  }

  if (FUNC_4(VAR_29.key, "DeviceName") == 0) {
   char *VAR_31;

   if (VAR_29.type != VAR_13 ||
       FUNC_6(VAR_29.str_value) > VAR_20)
    goto error;

   VAR_31 = FUNC_5(VAR_29.str_value);
   if (VAR_31 == ((void*)0))
    goto err_no_mem_clear;

   FUNC_2(VAR_26->conf->device_name);
   VAR_26->conf->device_name = VAR_31;

   VAR_26->conf->changed_parameters |=
    VAR_0;
  } else if (FUNC_4(VAR_29.key, "PrimaryDeviceType") == 0) {
   if (VAR_29.type != VAR_10 ||
       VAR_29.array_type != VAR_12 ||
       VAR_29.array_len != VAR_21)
    goto error;

   FUNC_3(VAR_26->conf->device_type,
      VAR_29.bytearray_value,
      VAR_21);
   VAR_26->conf->changed_parameters |=
    VAR_1;
  } else if (FUNC_4(VAR_29.key, "SecondaryDeviceTypes") == 0) {
   if (VAR_29.type != VAR_10 ||
       VAR_29.array_type != VAR_19 ||
       VAR_29.array_len > VAR_16)
    goto error;

   for (VAR_30 = 0; VAR_30 < VAR_29.array_len; VAR_30++)
    if (FUNC_15(VAR_29.binarray_value[VAR_30]) !=
        VAR_21)
     goto err_no_mem_clear;
   for (VAR_30 = 0; VAR_30 < VAR_29.array_len; VAR_30++)
    FUNC_3(VAR_26->conf->sec_device_type[VAR_30],
       FUNC_14(VAR_29.binarray_value[VAR_30]),
       VAR_21);
   VAR_26->conf->num_sec_device_types = VAR_29.array_len;
   VAR_26->conf->changed_parameters |=
     VAR_6;
  } else if (FUNC_4(VAR_29.key, "VendorExtension") == 0) {
   if (VAR_29.type != VAR_10 ||
       VAR_29.array_type != VAR_19 ||
       (VAR_29.array_len > VAR_17))
    goto error;

   VAR_26->conf->changed_parameters |=
    VAR_7;

   for (VAR_30 = 0; VAR_30 < VAR_17; VAR_30++) {
    FUNC_13(VAR_26->conf->wps_vendor_ext[VAR_30]);
    if (VAR_30 < VAR_29.array_len) {
     VAR_26->conf->wps_vendor_ext[VAR_30] =
      VAR_29.binarray_value[VAR_30];
     VAR_29.binarray_value[VAR_30] = ((void*)0);
    } else
     VAR_26->conf->wps_vendor_ext[VAR_30] = ((void*)0);
   }
  } else if (FUNC_4(VAR_29.key, "GOIntent") == 0 &&
      VAR_29.type == VAR_14 &&
      (VAR_29.uint32_value <= 15))
   VAR_26->conf->p2p_go_intent = VAR_29.uint32_value;
  else if (FUNC_4(VAR_29.key, "PersistentReconnect") == 0 &&
    VAR_29.type == VAR_11)
   VAR_26->conf->persistent_reconnect = VAR_29.bool_value;
  else if (FUNC_4(VAR_29.key, "ListenRegClass") == 0 &&
    VAR_29.type == VAR_14) {
   VAR_26->conf->p2p_listen_reg_class = VAR_29.uint32_value;
   VAR_26->conf->changed_parameters |=
    VAR_3;
  } else if (FUNC_4(VAR_29.key, "ListenChannel") == 0 &&
      VAR_29.type == VAR_14) {
   VAR_26->conf->p2p_listen_channel = VAR_29.uint32_value;
   VAR_26->conf->changed_parameters |=
    VAR_3;
  } else if (FUNC_4(VAR_29.key, "OperRegClass") == 0 &&
      VAR_29.type == VAR_14) {
   VAR_26->conf->p2p_oper_reg_class = VAR_29.uint32_value;
   VAR_26->conf->changed_parameters |=
    VAR_4;
  } else if (FUNC_4(VAR_29.key, "OperChannel") == 0 &&
      VAR_29.type == VAR_14) {
   VAR_26->conf->p2p_oper_channel = VAR_29.uint32_value;
   VAR_26->conf->changed_parameters |=
    VAR_4;
  } else if (FUNC_4(VAR_29.key, "SsidPostfix") == 0) {
   char *VAR_32;

   if (VAR_29.type != VAR_13)
    goto error;

   VAR_32 = FUNC_5(VAR_29.str_value);
   if (!VAR_32)
    goto err_no_mem_clear;

   FUNC_2(VAR_26->conf->p2p_ssid_postfix);
   VAR_26->conf->p2p_ssid_postfix = VAR_32;

   VAR_26->conf->changed_parameters |=
     VAR_5;
  } else if (FUNC_4(VAR_29.key, "IntraBss") == 0 &&
      VAR_29.type == VAR_11) {
   VAR_26->conf->p2p_intra_bss = VAR_29.bool_value;
   VAR_26->conf->changed_parameters |=
    VAR_2;
  } else if (FUNC_4(VAR_29.key, "IpAddrGo") == 0) {
   if (!FUNC_16(VAR_29))
    goto error;
   FUNC_3(VAR_26->conf->ip_addr_go,
      VAR_29.bytearray_value, 4);
  } else if (FUNC_4(VAR_29.key, "IpAddrMask") == 0) {
   if (!FUNC_16(VAR_29))
    goto error;
   FUNC_3(VAR_26->conf->ip_addr_mask,
      VAR_29.bytearray_value, 4);
  } else if (FUNC_4(VAR_29.key, "IpAddrStart") == 0) {
   if (!FUNC_16(VAR_29))
    goto error;
   FUNC_3(VAR_26->conf->ip_addr_start,
      VAR_29.bytearray_value, 4);
  } else if (FUNC_4(VAR_29.key, "IpAddrEnd") == 0) {
   if (!FUNC_16(VAR_29))
    goto error;
   FUNC_3(VAR_26->conf->ip_addr_end,
      VAR_29.bytearray_value, 4);
  } else if (FUNC_4(VAR_29.key, "GroupIdle") == 0 &&
      VAR_29.type == VAR_14)
   VAR_26->conf->p2p_group_idle = VAR_29.uint32_value;
  else if (FUNC_4(VAR_29.key, "disassoc_low_ack") == 0 &&
    VAR_29.type == VAR_14)
   VAR_26->conf->disassoc_low_ack = VAR_29.uint32_value;
  else if (FUNC_4(VAR_29.key, "NoGroupIface") == 0 &&
    VAR_29.type == VAR_11)
   VAR_26->conf->p2p_no_group_iface = VAR_29.bool_value;
  else if (FUNC_4(VAR_29.key, "p2p_search_delay") == 0 &&
    VAR_29.type == VAR_14)
   VAR_26->conf->p2p_search_delay = VAR_29.uint32_value;
  else
   goto error;

  FUNC_7(&VAR_29);
 }

 if (VAR_26->conf->changed_parameters) {

  FUNC_12(VAR_26);
 }

 return VAR_18;

 error:
 FUNC_1(VAR_24, VAR_8,
        "invalid message format");
 FUNC_7(&VAR_29);
 return VAR_15;

 err_no_mem_clear:
 FUNC_1(VAR_24, VAR_9, "no memory");
 FUNC_7(&VAR_29);
 return VAR_15;
}
