
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int con; int dbus_new_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wpas_dbus_priv*) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(struct wpas_dbus_priv *VAR_2)
{
 if (!VAR_2->dbus_new_initialized)
  return;
 FUNC_2(VAR_0, "dbus: Unregister D-Bus object '%s'",
     VAR_1);
 FUNC_0(VAR_2->con, VAR_1);
 FUNC_1(VAR_2);
}
