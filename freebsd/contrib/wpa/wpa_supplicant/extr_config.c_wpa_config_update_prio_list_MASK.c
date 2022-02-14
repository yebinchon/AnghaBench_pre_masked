
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {struct wpa_ssid* next; int * pnext; } ;
struct wpa_config {struct wpa_ssid* ssid; scalar_t__ num_prio; int * pssid; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct wpa_config*,struct wpa_ssid*) ;

int FUNC_2(struct wpa_config *VAR_0)
{
 struct wpa_ssid *VAR_1;
 int VAR_2 = 0;

 FUNC_0(VAR_0->pssid);
 VAR_0->pssid = ((void*)0);
 VAR_0->num_prio = 0;

 VAR_1 = VAR_0->ssid;
 while (VAR_1) {
  VAR_1->pnext = ((void*)0);
  if (FUNC_1(VAR_0, VAR_1) < 0)
   VAR_2 = -1;
  VAR_1 = VAR_1->next;
 }

 return VAR_2;
}
