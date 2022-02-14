
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wpas_dbus_priv {int * con; } ;
struct wpa_dbus_object_desc {int path; int * connection; } ;
struct TYPE_8__ {int message; int name; } ;
struct TYPE_7__ {int * member_5; int * member_4; int * member_3; int * member_2; int * member_1; int * member_0; } ;
typedef TYPE_1__ DBusObjectPathVTable ;
typedef TYPE_2__ DBusError ;
typedef int DBusConnection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,TYPE_1__*,struct wpa_dbus_object_desc*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*,...) ;

int FUNC_6(struct wpas_dbus_priv *VAR_5,
           const char *VAR_6, const char *VAR_7,
           struct wpa_dbus_object_desc *VAR_8)
{
 DBusConnection *VAR_9;
 DBusError VAR_10;
 DBusObjectPathVTable VAR_11 = {
  &VAR_3, &VAR_4,
  ((void*)0), ((void*)0), ((void*)0), ((void*)0)
 };


 if (VAR_5 == ((void*)0))
  return 0;

 VAR_9 = VAR_5->con;
 VAR_8->connection = VAR_9;
 VAR_8->path = FUNC_4(VAR_6);

 FUNC_2(&VAR_10);

 if (!FUNC_0(VAR_9, VAR_6, &VAR_11,
            VAR_8, &VAR_10)) {
  if (FUNC_3(VAR_10.name, VAR_0) == 0) {
   FUNC_5(VAR_1, "dbus: %s", VAR_10.message);
  } else {
   FUNC_5(VAR_2,
       "dbus: Could not set up message handler for interface %s object %s (error: %s message: %s)",
       VAR_7, VAR_6, VAR_10.name, VAR_10.message);
  }
  FUNC_1(&VAR_10);
  return -1;
 }

 FUNC_1(&VAR_10);
 return 0;
}
