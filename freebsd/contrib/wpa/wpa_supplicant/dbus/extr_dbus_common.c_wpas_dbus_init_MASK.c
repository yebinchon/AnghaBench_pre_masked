
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {struct wpa_global* global; } ;
struct wpa_global {int dummy; } ;


 struct wpas_dbus_priv* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wpas_dbus_priv*) ;
 int FUNC_2 (struct wpas_dbus_priv*) ;
 scalar_t__ FUNC_3 (struct wpas_dbus_priv*) ;
 scalar_t__ FUNC_4 (struct wpas_dbus_priv*) ;

struct wpas_dbus_priv * FUNC_5(struct wpa_global *VAR_0)
{
 struct wpas_dbus_priv *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1->global = VAR_0;

 if (FUNC_3(VAR_1) < 0 ||



     FUNC_4(VAR_1) < 0) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
