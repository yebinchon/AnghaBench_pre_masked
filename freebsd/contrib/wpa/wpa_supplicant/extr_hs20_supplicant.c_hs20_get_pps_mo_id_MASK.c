
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {int update_identifier; struct wpa_cred* parent_cred; } ;
struct wpa_cred {int update_identifier; struct wpa_cred* next; } ;
struct TYPE_2__ {struct wpa_cred* cred; } ;



int FUNC_0(struct wpa_supplicant *VAR_0, struct wpa_ssid *VAR_1)
{
 struct wpa_cred *VAR_2;

 if (VAR_1 == ((void*)0))
  return 0;

 if (VAR_1->update_identifier)
  return VAR_1->update_identifier;

 if (VAR_1->parent_cred == ((void*)0))
  return 0;

 for (VAR_2 = VAR_0->conf->cred; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_1->parent_cred == VAR_2)
   return VAR_2->update_identifier;
 }

 return 0;
}
