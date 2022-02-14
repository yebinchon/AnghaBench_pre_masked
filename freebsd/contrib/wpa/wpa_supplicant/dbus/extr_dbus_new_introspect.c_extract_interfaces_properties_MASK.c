
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_property_desc {int dbus_interface; scalar_t__ dbus_property; } ;
struct interfaces {int xml; } ;
struct dl_list {int dummy; } ;


 struct interfaces* FUNC_0 (struct dl_list*,int ) ;
 int FUNC_1 (int ,struct wpa_dbus_property_desc const*) ;

__attribute__((used)) static void FUNC_2(
 struct dl_list *VAR_0, const struct wpa_dbus_property_desc *VAR_1)
{
 const struct wpa_dbus_property_desc *VAR_2;
 struct interfaces *VAR_3;

 for (VAR_2 = VAR_1; VAR_2 && VAR_2->dbus_property; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_2->dbus_interface);
  if (VAR_3)
   FUNC_1(VAR_3->xml, VAR_2);
 }
}
