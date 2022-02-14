
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct wpa_supplicant {int dbus_new_path; TYPE_1__* global; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {struct wpas_dbus_priv* dbus; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int * FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(struct wpa_supplicant *VAR_6, int VAR_7)
{
 struct wpas_dbus_priv *VAR_8;
 DBusMessage *VAR_9;
 dbus_bool_t VAR_10;

 VAR_8 = VAR_6->global->dbus;


 if (VAR_8 == ((void*)0) || !VAR_6->dbus_new_path)
  return;

 VAR_9 = FUNC_2(VAR_6->dbus_new_path,
          VAR_5,
          "ScanDone");
 if (VAR_9 == ((void*)0))
  return;

 VAR_10 = VAR_7 ? VAR_4 : VAR_2;
 if (FUNC_1(VAR_9, VAR_0, &VAR_10,
         VAR_1))
  FUNC_0(VAR_8->con, VAR_9, ((void*)0));
 else
  FUNC_4(VAR_3, "dbus: Failed to construct signal");
 FUNC_3(VAR_9);
}
