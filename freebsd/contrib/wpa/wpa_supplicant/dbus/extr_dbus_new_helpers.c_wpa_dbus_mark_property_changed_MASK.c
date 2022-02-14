
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int con; } ;
struct wpa_dbus_property_desc {scalar_t__ dbus_property; scalar_t__ dbus_interface; } ;
struct wpa_dbus_object_desc {int* prop_changed_flags; struct wpa_dbus_property_desc* properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,void**) ;
 int FUNC_1 (int ,int ,struct wpa_dbus_object_desc*) ;
 int FUNC_2 (int ,int ,int ,int ,struct wpa_dbus_object_desc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,scalar_t__) ;
 int FUNC_4 (int ,char*,char const*,...) ;

void FUNC_5(struct wpas_dbus_priv *VAR_3,
        const char *VAR_4, const char *VAR_5,
        const char *VAR_6)
{
 struct wpa_dbus_object_desc *VAR_7 = ((void*)0);
 const struct wpa_dbus_property_desc *VAR_8;
 int VAR_9 = 0;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_3->con, VAR_4,
          (void **) &VAR_7);
 if (!VAR_7) {
  FUNC_4(VAR_0,
      "dbus: wpa_dbus_property_changed: could not obtain object's private data: %s",
      VAR_4);
  return;
 }

 for (VAR_8 = VAR_7->properties; VAR_8 && VAR_8->dbus_property; VAR_8++, VAR_9++)
  if (FUNC_3(VAR_6, VAR_8->dbus_property) == 0 &&
      FUNC_3(VAR_5, VAR_8->dbus_interface) == 0) {
   if (VAR_7->prop_changed_flags)
    VAR_7->prop_changed_flags[VAR_9] = 1;
   break;
  }

 if (!VAR_8 || !VAR_8->dbus_property) {
  FUNC_4(VAR_0,
      "dbus: wpa_dbus_property_changed: no property %s in object %s",
      VAR_6, VAR_4);
  return;
 }

 if (!FUNC_1(VAR_2,
      VAR_3->con, VAR_7)) {
  FUNC_2(0, VAR_1,
           VAR_2,
           VAR_3->con, VAR_7);
 }
}
