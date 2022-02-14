
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int * vendor_elem; } ;
typedef size_t dbus_int32_t ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int ,int const**,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,size_t*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int * FUNC_6 (int *,int ,char*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 size_t FUNC_10 (int ) ;
 int * FUNC_11 (int *) ;
 struct wpa_supplicant* FUNC_12 (struct wpa_supplicant*,size_t) ;

DBusMessage * FUNC_13(DBusMessage *VAR_5,
      struct wpa_supplicant *VAR_6)
{
 DBusMessage *VAR_7;
 DBusMessageIter VAR_8, VAR_9;
 dbus_int32_t VAR_10;
 const u8 *VAR_11;
 size_t VAR_12;

 FUNC_3(VAR_5, &VAR_8);
 FUNC_2(&VAR_8, &VAR_10);

 if (VAR_10 < 0 || VAR_10 >= VAR_4) {
  return FUNC_6(VAR_5, VAR_0,
           "Invalid ID");
 }

 VAR_6 = FUNC_12(VAR_6, VAR_10);
 if (!VAR_6->vendor_elem[VAR_10]) {
  return FUNC_6(VAR_5, VAR_0,
           "ID value does not exist");
 }

 VAR_7 = FUNC_7(VAR_5);
 if (!VAR_7)
  return FUNC_11(VAR_5);

 FUNC_4(VAR_7, &VAR_8);

 VAR_11 = FUNC_9(VAR_6->vendor_elem[VAR_10]);
 VAR_12 = FUNC_10(VAR_6->vendor_elem[VAR_10]);

 if (!FUNC_5(&VAR_8, VAR_1,
           VAR_3,
           &VAR_9) ||
     !FUNC_0(&VAR_9, VAR_2,
        &VAR_11, VAR_12) ||
     !FUNC_1(&VAR_8, &VAR_9)) {
  FUNC_8(VAR_7);
  VAR_7 = FUNC_11(VAR_5);
 }

 return VAR_7;
}
