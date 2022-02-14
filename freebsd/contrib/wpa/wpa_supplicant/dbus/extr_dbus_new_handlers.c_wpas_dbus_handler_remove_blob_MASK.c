
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,char**,int ) ;
 int * FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,char*) ;

DBusMessage * FUNC_4(DBusMessage *VAR_3,
         struct wpa_supplicant *VAR_4)
{
 DBusMessage *VAR_5 = ((void*)0);
 char *VAR_6;

 FUNC_0(VAR_3, ((void*)0), VAR_1, &VAR_6,
         VAR_0);

 if (FUNC_2(VAR_4->conf, VAR_6)) {
  return FUNC_1(VAR_3,
           VAR_2,
           "Blob id not set");
 }
 FUNC_3(VAR_4, VAR_6);

 return VAR_5;

}
