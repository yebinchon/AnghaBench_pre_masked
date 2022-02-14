
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dbus_priv {int con; scalar_t__ should_dispatch; } ;
typedef scalar_t__ eloop_event_type ;
typedef int DBusWatch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct wpas_dbus_priv *VAR_6,
     DBusWatch *VAR_7, eloop_event_type VAR_8)
{
 FUNC_0(VAR_6->con);

 VAR_6->should_dispatch = 0;

 if (VAR_8 == VAR_4)
  FUNC_2(VAR_7, VAR_1);
 else if (VAR_8 == VAR_5)
  FUNC_2(VAR_7, VAR_2);
 else if (VAR_8 == VAR_3)
  FUNC_2(VAR_7, VAR_0);

 if (VAR_6->should_dispatch) {
  FUNC_3(VAR_6->con);
  VAR_6->should_dispatch = 0;
 }

 FUNC_1(VAR_6->con);
}
