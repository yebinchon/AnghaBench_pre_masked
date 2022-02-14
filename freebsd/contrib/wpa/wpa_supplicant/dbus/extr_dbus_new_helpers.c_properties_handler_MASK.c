
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {int dummy; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,char const*,int ) ;
 int * FUNC_6 (int *,char*,struct wpa_dbus_object_desc*) ;
 int * FUNC_7 (int *,int *,char*,struct wpa_dbus_object_desc*) ;

__attribute__((used)) static DBusMessage * FUNC_8(DBusMessage *VAR_7,
     struct wpa_dbus_object_desc *VAR_8)
{
 DBusMessageIter VAR_9;
 char *VAR_10;
 const char *VAR_11;

 VAR_11 = FUNC_0(VAR_7);
 FUNC_3(VAR_7, &VAR_9);

 if (!FUNC_5(VAR_4, VAR_11,
   VAR_3) ||
     !FUNC_5(VAR_6, VAR_11,
   VAR_3) ||
     !FUNC_5(VAR_5, VAR_11,
   VAR_3)) {

  if (FUNC_1(&VAR_9) != VAR_2) {
   return FUNC_4(VAR_7,
            VAR_0,
            ((void*)0));
  }

  FUNC_2(&VAR_9, &VAR_10);

  if (!FUNC_5(VAR_5, VAR_11,
    VAR_3)) {

   return FUNC_6(VAR_7, VAR_10, VAR_8);
  }

  return FUNC_7(VAR_7, &VAR_9, VAR_10,
          VAR_8);
 }
 return FUNC_4(VAR_7, VAR_1,
          ((void*)0));
}
