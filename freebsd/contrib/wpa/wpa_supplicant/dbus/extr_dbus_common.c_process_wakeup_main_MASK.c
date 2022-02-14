
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int con; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(int VAR_2, void *VAR_3)
{
 struct wpas_dbus_priv *VAR_4 = VAR_3;

 if (VAR_2 != VAR_1 || !VAR_4->con)
  return;

 if (FUNC_1(VAR_4->con) !=
     VAR_0)
  return;


 FUNC_2(VAR_4->con);
 FUNC_0(VAR_4->con);
 FUNC_3(VAR_4->con);
}
