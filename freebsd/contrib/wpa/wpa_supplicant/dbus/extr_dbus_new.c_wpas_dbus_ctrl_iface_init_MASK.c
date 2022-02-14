
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int dbus_new_initialized; int global; } ;
struct wpa_dbus_object_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_dbus_object_desc*) ;
 struct wpa_dbus_object_desc* FUNC_1 (int) ;
 int FUNC_2 (struct wpas_dbus_priv*,int ,int ,struct wpa_dbus_object_desc*) ;
 int FUNC_3 (struct wpas_dbus_priv*) ;
 int FUNC_4 (struct wpas_dbus_priv*) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct wpa_dbus_object_desc*,int ,int *,int ,int ,int ) ;

int FUNC_7(struct wpas_dbus_priv *VAR_7)
{
 struct wpa_dbus_object_desc *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 < 0) {
  FUNC_5(VAR_1,
      "dbus: Not enough memory to init interface properties");
  return -1;
 }

 VAR_8 = FUNC_1(sizeof(struct wpa_dbus_object_desc));
 if (!VAR_8) {
  FUNC_5(VAR_1,
      "Not enough memory to create object description");
  goto error;
 }

 FUNC_6(VAR_8, VAR_7->global, ((void*)0),
      VAR_4,
      VAR_5,
      VAR_6);

 FUNC_5(VAR_0, "dbus: Register D-Bus object '%s'",
     VAR_2);
 VAR_9 = FUNC_2(VAR_7, VAR_2,
           VAR_3,
           VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8);
  goto error;
 }

 VAR_7->dbus_new_initialized = 1;
 return 0;

error:
 FUNC_3(VAR_7);
 return -1;
}
