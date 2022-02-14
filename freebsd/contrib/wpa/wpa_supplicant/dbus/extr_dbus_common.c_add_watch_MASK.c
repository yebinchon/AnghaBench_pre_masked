
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusWatch ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct wpas_dbus_priv*,int *) ;
 int FUNC_4 (int,int ,int ,struct wpas_dbus_priv*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static dbus_bool_t FUNC_5(DBusWatch *VAR_9, void *VAR_10)
{
 struct wpas_dbus_priv *VAR_11 = VAR_10;
 unsigned int VAR_12;
 int VAR_13;

 if (!FUNC_0(VAR_9))
  return VAR_5;

 VAR_12 = FUNC_1(VAR_9);
 VAR_13 = FUNC_2(VAR_9);

 FUNC_4(VAR_13, VAR_2, VAR_6,
       VAR_11, VAR_9);

 if (VAR_12 & VAR_0) {
  FUNC_4(VAR_13, VAR_3, VAR_7,
        VAR_11, VAR_9);
 }
 if (VAR_12 & VAR_1) {
  FUNC_4(VAR_13, VAR_4, VAR_8,
        VAR_11, VAR_9);
 }

 FUNC_3(VAR_9, VAR_11, ((void*)0));

 return VAR_5;
}
