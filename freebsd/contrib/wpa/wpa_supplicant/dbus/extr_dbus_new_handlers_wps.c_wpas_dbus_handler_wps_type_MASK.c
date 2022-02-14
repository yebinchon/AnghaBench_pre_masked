
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_start_params {int type; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int * FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(DBusMessage *VAR_2,
          DBusMessageIter *VAR_3,
          struct wps_start_params *VAR_4,
          DBusMessage **VAR_5)
{
 DBusMessageIter VAR_6;
 char *VAR_7;

 FUNC_2(VAR_3, &VAR_6);
 if (FUNC_0(&VAR_6) != VAR_0) {
  FUNC_4(VAR_1,
      "dbus: WPS.Start - Wrong Type type, string required");
  *VAR_5 = FUNC_5(VAR_2,
            "Type must be a string");
  return -1;
 }
 FUNC_1(&VAR_6, &VAR_7);
 if (FUNC_3(VAR_7, "pin") == 0)
  VAR_4->type = 1;
 else if (FUNC_3(VAR_7, "pbc") == 0)
  VAR_4->type = 2;
 else {
  FUNC_4(VAR_1, "dbus: WPS.Start - Unknown type %s",
      VAR_7);
  *VAR_5 = FUNC_5(VAR_2, VAR_7);
  return -1;
 }
 return 0;
}
