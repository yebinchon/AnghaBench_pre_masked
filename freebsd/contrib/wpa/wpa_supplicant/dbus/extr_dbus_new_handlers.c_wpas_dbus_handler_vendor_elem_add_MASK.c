
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int * vendor_elem; } ;
struct ieee802_11_elems {int dummy; } ;
typedef size_t dbus_int32_t ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,int **,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int,struct ieee802_11_elems*,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 struct wpa_supplicant* FUNC_10 (struct wpa_supplicant*,size_t) ;
 int FUNC_11 (struct wpa_supplicant*) ;

DBusMessage * FUNC_12(DBusMessage *VAR_3,
      struct wpa_supplicant *VAR_4)
{
 u8 *VAR_5;
 int VAR_6;
 struct ieee802_11_elems VAR_7;
 dbus_int32_t VAR_8;
 DBusMessageIter VAR_9, VAR_10;

 FUNC_2(VAR_3, &VAR_9);
 FUNC_0(&VAR_9, &VAR_8);
 if (VAR_8 < 0 || VAR_8 >= VAR_1) {
  return FUNC_5(VAR_3, VAR_0,
           "Invalid ID");
 }

 FUNC_3(&VAR_9);
 FUNC_4(&VAR_9, &VAR_10);
 FUNC_1(&VAR_10, &VAR_5, &VAR_6);
 if (!VAR_5 || VAR_6 == 0) {
  return FUNC_5(
   VAR_3, VAR_0, "Invalid value");
 }

 if (FUNC_6(VAR_5, VAR_6, &VAR_7, 0) == VAR_2) {
  return FUNC_5(VAR_3, VAR_0,
           "Parse error");
 }

 VAR_4 = FUNC_10(VAR_4, VAR_8);
 if (!VAR_4->vendor_elem[VAR_8]) {
  VAR_4->vendor_elem[VAR_8] = FUNC_7(VAR_5, VAR_6);
  FUNC_11(VAR_4);
  return ((void*)0);
 }

 if (FUNC_9(&VAR_4->vendor_elem[VAR_8], VAR_6) < 0) {
  return FUNC_5(VAR_3, VAR_0,
           "Resize error");
 }

 FUNC_8(VAR_4->vendor_elem[VAR_8], VAR_5, VAR_6);
 FUNC_11(VAR_4);
 return ((void*)0);
}
