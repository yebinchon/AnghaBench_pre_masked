
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct wpa_supplicant {int dbus_new_path; TYPE_1__* global; } ;
typedef scalar_t__ dbus_bool_t ;
struct TYPE_2__ {struct wpas_dbus_priv* dbus; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wpas_dbus_priv*,int ,int ,int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_5,
           const char *VAR_6,
           dbus_bool_t VAR_7)
{
 struct wpas_dbus_priv *VAR_8;
 DBusMessage *VAR_9;
 DBusMessageIter VAR_10;

 VAR_8 = VAR_5->global->dbus;


 if (VAR_8 == ((void*)0) || !VAR_5->dbus_new_path)
  return;

 VAR_9 = FUNC_3(VAR_4,
          VAR_3, VAR_6);
 if (VAR_9 == ((void*)0))
  return;

 FUNC_2(VAR_9, &VAR_10);
 if (!FUNC_1(&VAR_10, VAR_0,
         &VAR_5->dbus_new_path) ||
     (VAR_7 &&
      !FUNC_5(
       VAR_8, VAR_5->dbus_new_path,
       VAR_2, &VAR_10)))
  FUNC_6(VAR_1, "dbus: Failed to construct signal");
 else
  FUNC_0(VAR_8->con, VAR_9, ((void*)0));
 FUNC_4(VAR_9);
}
