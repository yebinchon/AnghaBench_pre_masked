
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_4__ {int sae_groups; } ;
struct TYPE_3__ {scalar_t__* sae_groups; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,scalar_t__*,size_t) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_0,
      struct wpa_supplicant *VAR_1)
{
 int VAR_2;
 size_t VAR_3;

 for (VAR_2 = 0; VAR_1->conf->sae_groups[VAR_2] > 0;
      VAR_2++)
  ;

 VAR_3 = (VAR_2 + 1) * sizeof(VAR_1->conf->sae_groups[0]);
 VAR_0->conf->sae_groups = FUNC_0(VAR_3);
 if (VAR_0->conf->sae_groups)
  FUNC_1(VAR_0->conf->sae_groups, VAR_1->conf->sae_groups,
     VAR_3);
}
