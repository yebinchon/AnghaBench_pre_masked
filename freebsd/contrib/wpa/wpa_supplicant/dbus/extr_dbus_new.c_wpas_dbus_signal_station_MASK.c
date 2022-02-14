
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
 int FUNC_1 (int *,int ,char const**) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wpas_dbus_priv*,char const*,int ,int *) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_5,
         const char *VAR_6,
         const char *VAR_7,
         dbus_bool_t VAR_8)
{
 struct wpas_dbus_priv *VAR_9;
 DBusMessage *VAR_10;
 DBusMessageIter VAR_11;

 VAR_9 = VAR_5->global->dbus;


 if (!VAR_9 || !VAR_5->dbus_new_path)
  return;

 FUNC_6(VAR_1, "dbus: STA signal %s", VAR_7);
 VAR_10 = FUNC_3(VAR_5->dbus_new_path,
          VAR_3, VAR_7);
 if (!VAR_10)
  return;

 FUNC_2(VAR_10, &VAR_11);
 if (!FUNC_1(&VAR_11, VAR_0,
         &VAR_6) ||
     (VAR_8 &&
      !FUNC_5(VAR_9, VAR_6,
          VAR_4,
          &VAR_11)))
  FUNC_6(VAR_2, "dbus: Failed to construct signal");
 else
  FUNC_0(VAR_9->con, VAR_10, ((void*)0));
 FUNC_4(VAR_10);
}
