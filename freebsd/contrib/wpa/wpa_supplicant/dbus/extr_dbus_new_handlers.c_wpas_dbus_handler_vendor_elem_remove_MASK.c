
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct wpa_supplicant {int ** vendor_elem; } ;
struct ieee802_11_elems {int dummy; } ;
typedef size_t dbus_int32_t ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,char**,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (char*,int,struct ieee802_11_elems*,int ) ;
 int FUNC_7 (int *) ;
 struct wpa_supplicant* FUNC_8 (struct wpa_supplicant*,size_t) ;
 scalar_t__ FUNC_9 (struct wpa_supplicant*,size_t,char*,int) ;
 int FUNC_10 (struct wpa_supplicant*) ;

DBusMessage * FUNC_11(DBusMessage *VAR_3,
         struct wpa_supplicant *VAR_4)
{
 u8 *VAR_5;
 int VAR_6;
 struct ieee802_11_elems VAR_7;
 DBusMessageIter VAR_8, VAR_9;
 dbus_int32_t VAR_10;

 FUNC_2(VAR_3, &VAR_8);
 FUNC_0(&VAR_8, &VAR_10);
 if (VAR_10 < 0 || VAR_10 >= VAR_1) {
  return FUNC_5(VAR_3, VAR_0,
           "Invalid ID");
 }

 FUNC_3(&VAR_8);
 FUNC_4(&VAR_8, &VAR_9);
 FUNC_1(&VAR_9, &VAR_5, &VAR_6);
 if (!VAR_5 || VAR_6 == 0) {
  return FUNC_5(VAR_3, VAR_0,
           "Invalid value");
 }

 VAR_4 = FUNC_8(VAR_4, VAR_10);

 if (VAR_6 == 1 && *VAR_5 == '*') {
  FUNC_7(VAR_4->vendor_elem[VAR_10]);
  VAR_4->vendor_elem[VAR_10] = ((void*)0);
  FUNC_10(VAR_4);
  return ((void*)0);
 }

 if (!VAR_4->vendor_elem[VAR_10]) {
  return FUNC_5(VAR_3, VAR_0,
           "ID value does not exist");
 }

 if (FUNC_6(VAR_5, VAR_6, &VAR_7, 0) == VAR_2) {
  return FUNC_5(VAR_3, VAR_0,
           "Parse error");
 }

 if (FUNC_9(VAR_4, VAR_10, VAR_5, VAR_6) == 0)
  return ((void*)0);

 return FUNC_5(VAR_3, VAR_0,
          "Not found");
}
