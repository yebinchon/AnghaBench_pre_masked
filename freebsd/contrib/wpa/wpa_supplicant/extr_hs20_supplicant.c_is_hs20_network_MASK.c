
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {int key_mgmt; int pairwise_cipher; scalar_t__ proto; scalar_t__ parent_cred; } ;
struct wpa_bss {int dummy; } ;
struct TYPE_2__ {int hs20; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wpa_bss*,int ) ;

int FUNC_1(struct wpa_supplicant *VAR_4, struct wpa_ssid *VAR_5,
      struct wpa_bss *VAR_6)
{
 if (!VAR_4->conf->hs20 || !VAR_5)
  return 0;

 if (VAR_5->parent_cred)
  return 1;

 if (VAR_6 && !FUNC_0(VAR_6, VAR_0))
  return 0;







 if (!(VAR_5->key_mgmt & VAR_2))
  return 0;
 if (!(VAR_5->pairwise_cipher & VAR_1))
  return 0;
 if (VAR_5->proto != VAR_3)
  return 0;

 return 1;
}
