
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_cred {scalar_t__ roaming_consortium_len; scalar_t__ realm; int eap_method; scalar_t__ imsi; scalar_t__ pcsc; struct wpa_cred* next; } ;
struct TYPE_2__ {struct wpa_cred* cred; } ;



__attribute__((used)) static int FUNC_0(struct wpa_supplicant *VAR_0)
{
 struct wpa_cred *VAR_1;

 for (VAR_1 = VAR_0->conf->cred; VAR_1; VAR_1 = VAR_1->next) {
  if (VAR_1->pcsc || VAR_1->imsi)
   continue;
  if (!VAR_1->eap_method)
   return 1;
  if (VAR_1->realm && VAR_1->roaming_consortium_len == 0)
   return 1;
 }
 return 0;
}
