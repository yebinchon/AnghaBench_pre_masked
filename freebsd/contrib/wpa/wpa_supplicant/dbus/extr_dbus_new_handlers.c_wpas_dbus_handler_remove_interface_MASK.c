
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_global {int dummy; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,char**,int ) ;
 struct wpa_supplicant* FUNC_1 (struct wpa_global*,char*) ;
 scalar_t__ FUNC_2 (struct wpa_global*,struct wpa_supplicant*,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*) ;

DBusMessage * FUNC_5(DBusMessage *VAR_2,
       struct wpa_global *VAR_3)
{
 struct wpa_supplicant *VAR_4;
 char *VAR_5;
 DBusMessage *VAR_6 = ((void*)0);

 FUNC_0(VAR_2, ((void*)0), VAR_1, &VAR_5,
         VAR_0);

 VAR_4 = FUNC_1(VAR_3, VAR_5);
 if (VAR_4 == ((void*)0))
  VAR_6 = FUNC_3(VAR_2);
 else if (FUNC_2(VAR_3, VAR_4, 0)) {
  VAR_6 = FUNC_4(
   VAR_2,
   "wpa_supplicant couldn't remove this interface.");
 }

 return VAR_6;
}
