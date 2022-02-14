
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wpas_dbus_priv {int con; } ;
struct wpa_dbus_object_desc {int path; int connection; } ;
struct TYPE_8__ {int message; int name; } ;
struct TYPE_7__ {int * member_5; int * member_4; int * member_3; int * member_2; int * member_1; int * member_0; } ;
typedef TYPE_1__ DBusObjectPathVTable ;
typedef TYPE_2__ DBusError ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*,TYPE_1__*,struct wpa_dbus_object_desc*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct wpas_dbus_priv *VAR_4,
        char *VAR_5, char *VAR_6,
        struct wpa_dbus_object_desc *VAR_7)
{
 DBusError VAR_8;
 int VAR_9 = -1;
 DBusObjectPathVTable VAR_10 = {
  &VAR_2, &VAR_3,
  ((void*)0), ((void*)0), ((void*)0), ((void*)0)
 };

 VAR_7->connection = VAR_4->con;
 VAR_7->path = FUNC_4(VAR_5);


 if (!FUNC_1(VAR_4->con, VAR_5,
        &VAR_10, VAR_7)) {
  FUNC_5(VAR_1, "dbus: Could not set up message handler");
  return -1;
 }


 FUNC_3(&VAR_8);
 switch (FUNC_0(VAR_4->con, VAR_6, 0, &VAR_8)) {
 case 128:
  VAR_9 = 0;
  break;
 case 130:
 case 129:
 case 131:
  FUNC_5(VAR_1,
      "dbus: Could not request service name: already registered");
  break;
 default:
  FUNC_5(VAR_1,
      "dbus: Could not request service name: %s %s",
      VAR_8.name, VAR_8.message);
  break;
 }
 FUNC_2(&VAR_8);

 if (VAR_9 != 0)
  return -1;

 FUNC_5(VAR_0, "Providing DBus service '%s'.", VAR_6);

 return 0;
}
