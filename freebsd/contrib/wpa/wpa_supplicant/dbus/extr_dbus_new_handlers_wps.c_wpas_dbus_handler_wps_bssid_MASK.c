
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_start_params {int bssid; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int * FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(DBusMessage *VAR_4,
           DBusMessageIter *VAR_5,
           struct wps_start_params *VAR_6,
           DBusMessage **VAR_7)
{
 DBusMessageIter VAR_8, VAR_9;
 int VAR_10;

 FUNC_3(VAR_5, &VAR_8);
 if (FUNC_0(&VAR_8) != VAR_0 ||
     FUNC_1(&VAR_8) !=
     VAR_1) {
  FUNC_4(VAR_3,
      "dbus: WPS.Start - Wrong Bssid type, byte array required");
  *VAR_7 = FUNC_5(
   VAR_4, "Bssid must be a byte array");
  return -1;
 }
 FUNC_3(&VAR_8, &VAR_9);
 FUNC_2(&VAR_9, &VAR_6->bssid, &VAR_10);
 if (VAR_10 != VAR_2) {
  FUNC_4(VAR_3, "dbus: WPS.Start - Wrong Bssid length %d",
      VAR_10);
  *VAR_7 = FUNC_5(VAR_4,
            "Bssid is wrong length");
  return -1;
 }
 return 0;
}
