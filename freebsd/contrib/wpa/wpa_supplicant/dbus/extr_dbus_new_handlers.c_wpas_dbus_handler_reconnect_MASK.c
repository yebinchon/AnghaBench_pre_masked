
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; scalar_t__ disconnected; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

DBusMessage * FUNC_2(DBusMessage *VAR_2,
  struct wpa_supplicant *VAR_3)
{
 if (VAR_3->wpa_state == VAR_1) {
  return FUNC_0(VAR_2,
           VAR_0,
           "This interface is disabled");
 }

 if (VAR_3->disconnected)
  FUNC_1(VAR_3);
 return ((void*)0);
}
