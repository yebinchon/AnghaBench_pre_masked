
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int reattach; int * current_ssid; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

DBusMessage * FUNC_2(DBusMessage *VAR_1,
      struct wpa_supplicant *VAR_2)
{
 if (VAR_2->current_ssid != ((void*)0)) {
  VAR_2->reattach = 1;
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return FUNC_0(VAR_1, VAR_0,
          "This interface is not connected");
}
