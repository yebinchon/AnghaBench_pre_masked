
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; scalar_t__ sched_scanning; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

DBusMessage * FUNC_2(
 DBusMessage *VAR_1, struct wpa_supplicant *VAR_2)
{
 if (VAR_2->sched_scanning)
  FUNC_1(VAR_2);


 FUNC_0(VAR_2->conf, VAR_0, VAR_2);
 return ((void*)0);
}
