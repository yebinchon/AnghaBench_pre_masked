
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; int dbus_new_path; } ;
struct wpa_ssid {int dummy; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,char const**,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int *,int) ;
 struct wpa_ssid* FUNC_4 (int ,int) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int * FUNC_6 (int *,char const*) ;
 int * FUNC_7 (int *) ;
 char* FUNC_8 (char const*,int ,char**) ;

DBusMessage * FUNC_9(DBusMessage *VAR_4,
            struct wpa_supplicant *VAR_5)
{
 DBusMessage *VAR_6 = ((void*)0);
 const char *VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;
 struct wpa_ssid *VAR_11;

 FUNC_0(VAR_4, ((void*)0), VAR_1, &VAR_7,
         VAR_0);



 VAR_8 = FUNC_8(VAR_7,
          VAR_2,
          &VAR_9);
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || !VAR_5->dbus_new_path ||
     FUNC_2(VAR_8, VAR_5->dbus_new_path) != 0) {
  VAR_6 = FUNC_6(VAR_4, VAR_7);
  goto out;
 }

 VAR_3 = 0;
 VAR_10 = FUNC_3(VAR_9, ((void*)0), 10);
 if (VAR_3 != 0) {
  VAR_6 = FUNC_6(VAR_4, VAR_7);
  goto out;
 }

 VAR_11 = FUNC_4(VAR_5->conf, VAR_10);
 if (VAR_11 == ((void*)0)) {
  VAR_6 = FUNC_7(VAR_4);
  goto out;
 }


 FUNC_5(VAR_5, VAR_11);

out:
 FUNC_1(VAR_8);
 return VAR_6;
}
