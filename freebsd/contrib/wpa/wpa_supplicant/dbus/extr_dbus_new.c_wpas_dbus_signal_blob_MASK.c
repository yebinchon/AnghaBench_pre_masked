
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct wpa_supplicant {int dbus_new_path; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpas_dbus_priv* dbus; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,char const**,int ) ;
 int * FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_4,
      const char *VAR_5, const char *VAR_6)
{
 struct wpas_dbus_priv *VAR_7;
 DBusMessage *VAR_8;

 VAR_7 = VAR_4->global->dbus;


 if (VAR_7 == ((void*)0) || !VAR_4->dbus_new_path)
  return;

 VAR_8 = FUNC_2(VAR_4->dbus_new_path,
          VAR_3,
          VAR_6);
 if (VAR_8 == ((void*)0))
  return;

 if (FUNC_1(VAR_8, VAR_1, &VAR_5,
         VAR_0))
  FUNC_0(VAR_7->con, VAR_8, ((void*)0));
 else
  FUNC_4(VAR_2, "dbus: Failed to construct signal");
 FUNC_3(VAR_8);
}
