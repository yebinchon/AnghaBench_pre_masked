
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct wpa_supplicant {int dbus_new_path; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpas_dbus_priv* dbus; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int ,char const**) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

void FUNC_6(struct wpa_supplicant *VAR_3,
     const char *VAR_4, const char *VAR_5)
{
 struct wpas_dbus_priv *VAR_6;
 DBusMessage *VAR_7;
 DBusMessageIter VAR_8;

 VAR_6 = VAR_3->global->dbus;


 if (VAR_6 == ((void*)0) || !VAR_3->dbus_new_path)
  return;

 VAR_7 = FUNC_3(VAR_3->dbus_new_path,
          VAR_2,
          "EAP");
 if (VAR_7 == ((void*)0))
  return;

 FUNC_2(VAR_7, &VAR_8);

 if (!FUNC_1(&VAR_8, VAR_0, &VAR_4) ||
     !FUNC_1(&VAR_8, VAR_0,
         &VAR_5))
  FUNC_5(VAR_1, "dbus: Failed to construct signal");
 else
  FUNC_0(VAR_6->con, VAR_7, ((void*)0));
 FUNC_4(VAR_7);
}
