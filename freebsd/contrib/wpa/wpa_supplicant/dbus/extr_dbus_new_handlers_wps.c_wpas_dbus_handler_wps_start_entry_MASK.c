
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_start_params {int dummy; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *,struct wps_start_params*,int **) ;
 int FUNC_4 (int *,int *,struct wps_start_params*,int **) ;
 int FUNC_5 (int *,int *,struct wps_start_params*,int **) ;
 int FUNC_6 (int *,int *,struct wps_start_params*,int **) ;
 int FUNC_7 (int *,int *,struct wps_start_params*,int **) ;

__attribute__((used)) static int FUNC_8(DBusMessage *VAR_1, char *VAR_2,
          DBusMessageIter *VAR_3,
          struct wps_start_params *VAR_4,
          DBusMessage **VAR_5)
{
 if (FUNC_0(VAR_2, "Role") == 0)
  return FUNC_6(VAR_1, VAR_3,
        VAR_4, VAR_5);
 else if (FUNC_0(VAR_2, "Type") == 0)
  return FUNC_7(VAR_1, VAR_3,
        VAR_4, VAR_5);
 else if (FUNC_0(VAR_2, "Bssid") == 0)
  return FUNC_3(VAR_1, VAR_3,
         VAR_4, VAR_5);
 else if (FUNC_0(VAR_2, "Pin") == 0)
  return FUNC_5(VAR_1, VAR_3,
       VAR_4, VAR_5);






 FUNC_1(VAR_0, "dbus: WPS.Start - unknown key %s", VAR_2);
 *VAR_5 = FUNC_2(VAR_1, VAR_2);
 return -1;
}
