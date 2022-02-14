
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int conf; } ;
struct wpa_config_blob {int len; struct wpa_config_blob* data; struct wpa_config_blob* name; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int **,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (struct wpa_config_blob*) ;
 struct wpa_config_blob* FUNC_7 (int *,int) ;
 struct wpa_config_blob* FUNC_8 (char*) ;
 struct wpa_config_blob* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,struct wpa_config_blob*) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (struct wpa_supplicant*,struct wpa_config_blob*) ;

DBusMessage * FUNC_14(DBusMessage *VAR_1,
      struct wpa_supplicant *VAR_2)
{
 DBusMessage *VAR_3 = ((void*)0);
 DBusMessageIter VAR_4, VAR_5;

 char *VAR_6;
 u8 *VAR_7;
 int VAR_8;
 struct wpa_config_blob *VAR_9 = ((void*)0);

 FUNC_2(VAR_1, &VAR_4);
 FUNC_0(&VAR_4, &VAR_6);

 if (FUNC_10(VAR_2->conf, VAR_6)) {
  return FUNC_5(VAR_1,
           VAR_0,
           ((void*)0));
 }

 FUNC_3(&VAR_4);
 FUNC_4(&VAR_4, &VAR_5);

 FUNC_1(&VAR_5, &VAR_7, &VAR_8);

 VAR_9 = FUNC_9(sizeof(*VAR_9));
 if (!VAR_9) {
  VAR_3 = FUNC_12(VAR_1);
  goto err;
 }

 VAR_9->data = FUNC_7(VAR_7, VAR_8);
 VAR_9->name = FUNC_8(VAR_6);
 if (!VAR_9->data || !VAR_9->name) {
  VAR_3 = FUNC_12(VAR_1);
  goto err;
 }
 VAR_9->len = VAR_8;

 FUNC_11(VAR_2->conf, VAR_9);
 FUNC_13(VAR_2, VAR_9->name);

 return VAR_3;

err:
 if (VAR_9) {
  FUNC_6(VAR_9->name);
  FUNC_6(VAR_9->data);
  FUNC_6(VAR_9);
 }
 return VAR_3;
}
