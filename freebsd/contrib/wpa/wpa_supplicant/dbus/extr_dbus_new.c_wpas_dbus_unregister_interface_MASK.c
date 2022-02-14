
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int dummy; } ;
struct wpa_supplicant {int * dbus_new_path; int * preq_notify_peer; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpas_dbus_priv* dbus; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct wpas_dbus_priv*,int *) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpas_dbus_priv*) ;

int FUNC_5(struct wpa_supplicant *VAR_1)
{
 struct wpas_dbus_priv *VAR_2;


 if (VAR_1 == ((void*)0) || VAR_1->global == ((void*)0))
  return 0;
 VAR_2 = VAR_1->global->dbus;
 if (VAR_2 == ((void*)0) || VAR_1->dbus_new_path == ((void*)0))
  return 0;

 FUNC_2(VAR_0, "dbus: Unregister interface object '%s'",
     VAR_1->dbus_new_path);
 if (FUNC_1(VAR_2,
       VAR_1->dbus_new_path))
  return -1;

 FUNC_3(VAR_1);

 FUNC_0(VAR_1->dbus_new_path);
 VAR_1->dbus_new_path = ((void*)0);

 return 0;
}
