
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusTimeout ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct wpas_dbus_priv*,int *) ;
 int FUNC_3 (int ,int,int ,struct wpas_dbus_priv*,int *) ;
 int VAR_1 ;

__attribute__((used)) static dbus_bool_t FUNC_4(DBusTimeout *VAR_2, void *VAR_3)
{
 struct wpas_dbus_priv *VAR_4 = VAR_3;

 if (!FUNC_0(VAR_2))
  return VAR_0;

 FUNC_3(0, FUNC_1(VAR_2) * 1000,
          VAR_1, VAR_4, VAR_2);

 FUNC_2(VAR_2, VAR_4, ((void*)0));

 return VAR_0;
}
