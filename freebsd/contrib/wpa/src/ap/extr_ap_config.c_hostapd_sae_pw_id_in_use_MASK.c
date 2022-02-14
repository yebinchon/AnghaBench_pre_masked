
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sae_password_entry {scalar_t__ identifier; struct sae_password_entry* next; } ;
struct TYPE_2__ {scalar_t__ wpa_passphrase; } ;
struct hostapd_bss_config {struct sae_password_entry* sae_passwords; TYPE_1__ ssid; } ;



int FUNC_0(struct hostapd_bss_config *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;
 struct sae_password_entry *VAR_3;

 if (VAR_0->ssid.wpa_passphrase)
  VAR_2 = 1;

 for (VAR_3 = VAR_0->sae_passwords; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->identifier)
   VAR_1 = 1;
  else
   VAR_2 = 1;
  if (VAR_1 && VAR_2)
   break;
 }

 if (VAR_1 && !VAR_2)
  return 2;
 return VAR_1;
}
