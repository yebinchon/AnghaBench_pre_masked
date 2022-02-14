
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {int dummy; } ;
typedef int DBusMessage ;
typedef int DBusHandlerResult ;
typedef int DBusConnection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *,int *) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,char*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,struct wpa_dbus_object_desc*) ;
 int FUNC_10 (int ,char const*,int ) ;
 int * FUNC_11 (int *,struct wpa_dbus_object_desc*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,struct wpa_dbus_object_desc*) ;
 int FUNC_14 (int ,char*,char const*,char const*,char const*,int ) ;

__attribute__((used)) static DBusHandlerResult FUNC_15(DBusConnection *VAR_9,
      DBusMessage *VAR_10, void *VAR_11)
{
 struct wpa_dbus_object_desc *VAR_12 = VAR_11;
 const char *VAR_13;
 const char *VAR_14;
 const char *VAR_15;
 DBusMessage *VAR_16;


 VAR_13 = FUNC_2(VAR_10);
 VAR_14 = FUNC_4(VAR_10);
 VAR_15 = FUNC_1(VAR_10);
 if (!VAR_13 || !VAR_14 || !VAR_15)
  return VAR_2;

 FUNC_14(VAR_3, "dbus: %s.%s (%s) [%s]",
     VAR_15, VAR_13, VAR_14,
     FUNC_5(VAR_10));


 if (!FUNC_10(VAR_7, VAR_13,
   VAR_5) &&
     !FUNC_10(VAR_6, VAR_15,
   VAR_4)) {



  VAR_16 = FUNC_6(
   VAR_10, VAR_0,
   "wpa_supplicant was compiled without introspection support.");

 } else if (!FUNC_10(VAR_8, VAR_15,
        VAR_4)) {

  VAR_16 = FUNC_11(VAR_10, VAR_12);
 } else {
  VAR_16 = FUNC_9(VAR_10, VAR_12);
 }


 if (!VAR_16)
  VAR_16 = FUNC_7(VAR_10);
 if (VAR_16) {
  if (!FUNC_3(VAR_10))
   FUNC_0(VAR_9, VAR_16, ((void*)0));
  FUNC_8(VAR_16);
 }

 FUNC_12(VAR_9);

 return VAR_1;
}
