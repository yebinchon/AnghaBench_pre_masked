
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {int user_data; int properties; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;
typedef int DBusError ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *,int ,char*) ;

__attribute__((used)) static DBusMessage * FUNC_10(DBusMessage *VAR_1, char *VAR_2,
     struct wpa_dbus_object_desc *VAR_3)
{
 DBusMessage *VAR_4;
 DBusMessageIter VAR_5, VAR_6;
 DBusError VAR_7;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_8(VAR_1);

 FUNC_2(VAR_4, &VAR_5);
 if (!FUNC_7(&VAR_5, &VAR_6)) {
  FUNC_4(VAR_4);
  return FUNC_8(VAR_1);
 }

 FUNC_1(&VAR_7);
 if (!FUNC_5(&VAR_6, VAR_3->properties,
           VAR_2, VAR_3->user_data, &VAR_7)) {
  FUNC_6(&VAR_5, &VAR_6);
  FUNC_4(VAR_4);
  VAR_4 = FUNC_9(
   VAR_1, &VAR_7, VAR_0,
   "No readable properties in this interface");
  FUNC_0(&VAR_7);
  return VAR_4;
 }

 if (!FUNC_6(&VAR_5, &VAR_6)) {
  FUNC_4(VAR_4);
  return FUNC_8(VAR_1);
 }

 return VAR_4;
}
