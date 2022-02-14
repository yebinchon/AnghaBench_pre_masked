
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_property_desc {int dbus_interface; scalar_t__ dbus_property; } ;
struct wpa_dbus_object_desc {int * prop_changed_flags; struct wpa_dbus_property_desc* properties; } ;
typedef int DBusConnection ;


 int FUNC_0 (int *,char const*,void**) ;
 int FUNC_1 (int ,int *,struct wpa_dbus_object_desc*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char const*,int ,struct wpa_dbus_object_desc*) ;

void FUNC_3(DBusConnection *VAR_1,
           const char *VAR_2)
{
 struct wpa_dbus_object_desc *VAR_3 = ((void*)0);
 const struct wpa_dbus_property_desc *VAR_4;
 int VAR_5;

 FUNC_0(VAR_1, VAR_2, (void **) &VAR_3);
 if (!VAR_3)
  return;
 FUNC_1(VAR_0, VAR_1, VAR_3);

 for (VAR_4 = VAR_3->properties, VAR_5 = 0; VAR_4 && VAR_4->dbus_property;
      VAR_4++, VAR_5++) {
  if (VAR_3->prop_changed_flags == ((void*)0) ||
      !VAR_3->prop_changed_flags[VAR_5])
   continue;
  FUNC_2(VAR_1, VAR_2, VAR_4->dbus_interface,
      VAR_3);
 }
}
