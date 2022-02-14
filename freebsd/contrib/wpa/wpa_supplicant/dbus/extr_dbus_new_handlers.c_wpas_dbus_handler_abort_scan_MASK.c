
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;

DBusMessage * FUNC_2(DBusMessage *VAR_1,
        struct wpa_supplicant *VAR_2)
{
 if (FUNC_1(VAR_2) < 0)
  return FUNC_0(
   VAR_1, VAR_0,
   "Abort failed or no scan in progress");

 return ((void*)0);
}
