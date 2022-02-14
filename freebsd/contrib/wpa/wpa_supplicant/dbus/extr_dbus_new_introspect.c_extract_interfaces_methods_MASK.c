
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_method_desc {int args; scalar_t__ dbus_method; int dbus_interface; } ;
struct interfaces {int xml; } ;
struct dl_list {int dummy; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ,int) ;
 struct interfaces* FUNC_1 (struct dl_list*,int ) ;

__attribute__((used)) static void FUNC_2(
 struct dl_list *VAR_0, const struct wpa_dbus_method_desc *VAR_1)
{
 const struct wpa_dbus_method_desc *VAR_2;
 struct interfaces *VAR_3;

 for (VAR_2 = VAR_1; VAR_2 && VAR_2->dbus_method; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0, VAR_2->dbus_interface);
  if (VAR_3)
   FUNC_0(VAR_3->xml, "method", VAR_2->dbus_method,
      VAR_2->args, 1);
 }
}
