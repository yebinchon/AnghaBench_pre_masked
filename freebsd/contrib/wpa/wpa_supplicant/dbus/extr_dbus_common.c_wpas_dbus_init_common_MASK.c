
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct TYPE_5__ {int message; int name; } ;
typedef TYPE_1__ DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,struct wpas_dbus_priv*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct wpas_dbus_priv *VAR_3)
{
 DBusError VAR_4;
 int VAR_5 = 0;


 FUNC_3(&VAR_4);
 VAR_3->con = FUNC_0(VAR_0, &VAR_4);
 if (VAR_3->con) {
  FUNC_1(VAR_3->con, VAR_2, VAR_3,
        ((void*)0));
 } else {
  FUNC_4(VAR_1,
      "dbus: Could not acquire the system bus: %s - %s",
      VAR_4.name, VAR_4.message);
  VAR_5 = -1;
 }
 FUNC_2(&VAR_4);

 return VAR_5;
}
