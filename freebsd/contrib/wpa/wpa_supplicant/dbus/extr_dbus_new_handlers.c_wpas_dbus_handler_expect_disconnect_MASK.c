
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;

DBusMessage * FUNC_0(DBusMessage *VAR_1,
        struct wpa_global *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_2->ifaces;

 for (; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->wpa_state >= VAR_0)
   VAR_3->own_disconnect_req = 1;
 return ((void*)0);
}
