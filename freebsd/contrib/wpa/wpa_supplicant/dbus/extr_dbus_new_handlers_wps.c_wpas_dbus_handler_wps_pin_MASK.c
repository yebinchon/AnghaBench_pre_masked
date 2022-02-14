
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_start_params {int pin; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(DBusMessage *VAR_2,
         DBusMessageIter *VAR_3,
         struct wps_start_params *VAR_4,
         DBusMessage **VAR_5)
{
 DBusMessageIter VAR_6;

 FUNC_2(VAR_3, &VAR_6);
 if (FUNC_0(&VAR_6) != VAR_0) {
  FUNC_3(VAR_1,
      "dbus: WPS.Start - Wrong Pin type, string required");
  *VAR_5 = FUNC_4(VAR_2,
            "Pin must be a string");
  return -1;
 }
 FUNC_1(&VAR_6, &VAR_4->pin);
 return 0;
}
