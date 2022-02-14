
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {char* dbus_new_path; } ;
struct wpa_global {int dummy; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char const**,int ) ;
 int FUNC_1 (int *,int *,int ,char const**,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wpa_supplicant* FUNC_4 (struct wpa_global*,char const*) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

DBusMessage * FUNC_7(DBusMessage *VAR_3,
           struct wpa_global *VAR_4)
{
 DBusMessage *VAR_5 = ((void*)0);
 const char *VAR_6;
 const char *VAR_7;
 struct wpa_supplicant *VAR_8;

 FUNC_1(VAR_3, ((void*)0), VAR_2, &VAR_6,
         VAR_0);

 VAR_8 = FUNC_4(VAR_4, VAR_6);
 if (VAR_8 == ((void*)0) || VAR_8->dbus_new_path == ((void*)0))
  return FUNC_5(VAR_3);

 VAR_7 = VAR_8->dbus_new_path;
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == ((void*)0))
  return FUNC_6(VAR_3);
 if (!FUNC_0(VAR_5, VAR_1, &VAR_7,
          VAR_0)) {
  FUNC_3(VAR_5);
  return FUNC_6(VAR_3);
 }

 return VAR_5;
}
