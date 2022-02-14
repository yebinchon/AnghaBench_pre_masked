
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int con; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,struct wpas_dbus_priv*,int *) ;
 int FUNC_1 (int ,int ,struct wpas_dbus_priv*,int *) ;
 int FUNC_2 (int ,int ,int ,int ,struct wpas_dbus_priv*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,struct wpas_dbus_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct wpas_dbus_priv *VAR_10)
{
 if (!FUNC_2(VAR_10->con, VAR_3,
       VAR_6, VAR_9,
       VAR_10, ((void*)0)) ||
     !FUNC_0(VAR_10->con, VAR_2,
         VAR_5,
         VAR_7, VAR_10,
         ((void*)0))) {
  FUNC_4(VAR_0, "dbus: Failed to set callback functions");
  return -1;
 }

 if (FUNC_3(VAR_1, VAR_4, VAR_10))
  return -1;
 FUNC_1(VAR_10->con, VAR_8,
       VAR_10, ((void*)0));

 return 0;
}
