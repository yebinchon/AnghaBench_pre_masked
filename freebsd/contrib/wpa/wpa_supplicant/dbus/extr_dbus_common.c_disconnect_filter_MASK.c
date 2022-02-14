
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int global; } ;
typedef int DBusMessage ;
typedef int DBusHandlerResult ;
typedef int DBusConnection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static DBusHandlerResult FUNC_4(DBusConnection *VAR_5,
        DBusMessage *VAR_6, void *VAR_7)
{
 struct wpas_dbus_priv *VAR_8 = VAR_7;

 if (FUNC_1(VAR_6, VAR_2,
       "Disconnected")) {
  FUNC_2(VAR_4, "dbus: bus disconnected, terminating");
  FUNC_0(VAR_5, VAR_3);
  FUNC_3(VAR_8->global);
  return VAR_0;
 } else
  return VAR_1;
}
