
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_config_blob {int len; int data; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int ,char**,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int * FUNC_5 (int *,int ,char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct wpa_config_blob* FUNC_8 (int ,char*) ;
 int * FUNC_9 (int *) ;

DBusMessage * FUNC_10(DBusMessage *VAR_6,
      struct wpa_supplicant *VAR_7)
{
 DBusMessage *VAR_8 = ((void*)0);
 DBusMessageIter VAR_9, VAR_10;

 char *VAR_11;
 const struct wpa_config_blob *VAR_12;

 FUNC_0(VAR_6, ((void*)0), VAR_4, &VAR_11,
         VAR_3);

 VAR_12 = FUNC_8(VAR_7->conf, VAR_11);
 if (!VAR_12) {
  return FUNC_5(VAR_6,
           VAR_5,
           "Blob id not set");
 }

 VAR_8 = FUNC_6(VAR_6);
 if (!VAR_8)
  return FUNC_9(VAR_6);

 FUNC_3(VAR_8, &VAR_9);

 if (!FUNC_4(&VAR_9, VAR_0,
           VAR_2,
           &VAR_10) ||
     !FUNC_1(&VAR_10, VAR_1,
        &(VAR_12->data), VAR_12->len) ||
     !FUNC_2(&VAR_9, &VAR_10)) {
  FUNC_7(VAR_8);
  VAR_8 = FUNC_9(VAR_6);
 }

 return VAR_8;
}
