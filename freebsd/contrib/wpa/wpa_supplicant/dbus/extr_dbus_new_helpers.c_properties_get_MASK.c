
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_property_desc {scalar_t__ (* getter ) (struct wpa_dbus_property_desc const*,int *,int *,void*) ;} ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct wpa_dbus_property_desc const*,int *,int *,void*) ;
 int * FUNC_9 (int *,int *,int ,char*) ;

__attribute__((used)) static DBusMessage * FUNC_10(DBusMessage *VAR_3,
        const struct wpa_dbus_property_desc *VAR_4,
        void *VAR_5)
{
 DBusMessage *VAR_6;
 DBusMessageIter VAR_7;
 DBusError VAR_8;

 if (FUNC_7(FUNC_2(VAR_3), "ss")) {
  return FUNC_4(VAR_3, VAR_1,
           ((void*)0));
 }

 if (VAR_4->getter == ((void*)0)) {
  return FUNC_4(VAR_3, VAR_1,
           "Property is write-only");
 }

 VAR_6 = FUNC_5(VAR_3);
 FUNC_3(VAR_6, &VAR_7);

 FUNC_1(&VAR_8);
 if (VAR_4->getter(VAR_4, &VAR_7, &VAR_8, VAR_5) == VAR_2) {
  FUNC_6(VAR_6);
  VAR_6 = FUNC_9(
   VAR_3, &VAR_8, VAR_0,
   "Failed to read property");
  FUNC_0(&VAR_8);
 }

 return VAR_6;
}
