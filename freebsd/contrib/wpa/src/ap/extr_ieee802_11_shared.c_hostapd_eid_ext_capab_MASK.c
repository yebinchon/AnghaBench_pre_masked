
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_3__* iface; TYPE_4__* conf; TYPE_1__* iconf; } ;
struct TYPE_6__ {scalar_t__ utf8_ssid; } ;
struct TYPE_8__ {int tdls; int wpa; int wpa_key_mgmt; scalar_t__ mbo_enabled; scalar_t__ hs20; scalar_t__ ftm_responder; scalar_t__ ftm_initiator; TYPE_2__ ssid; scalar_t__ wnm_sleep_mode; scalar_t__ interworking; } ;
struct TYPE_7__ {int extended_capa_len; int* extended_capa_mask; int* extended_capa; } ;
struct TYPE_5__ {scalar_t__ obss_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*,int*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

u8 * FUNC_4(struct hostapd_data *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6 = VAR_5;
 u8 VAR_7 = 0, VAR_8;

 if (VAR_4->conf->tdls & (VAR_0 | VAR_1))
  VAR_7 = 5;
 if (VAR_7 < 4 && VAR_4->conf->interworking)
  VAR_7 = 4;
 if (VAR_7 < 3 && VAR_4->conf->wnm_sleep_mode)
  VAR_7 = 3;
 if (VAR_7 < 1 && VAR_4->iconf->obss_interval)
  VAR_7 = 1;
 if (VAR_7 < 7 && VAR_4->conf->ssid.utf8_ssid)
  VAR_7 = 7;
 if (VAR_7 < 9 &&
     (VAR_4->conf->ftm_initiator || VAR_4->conf->ftm_responder))
  VAR_7 = 9;
 if (VAR_7 < VAR_4->iface->extended_capa_len)
  VAR_7 = VAR_4->iface->extended_capa_len;
 if (VAR_7 == 0)
  return VAR_5;

 *VAR_6++ = VAR_2;
 *VAR_6++ = VAR_7;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_6++) {
  FUNC_0(VAR_4, VAR_6, VAR_8);

  if (VAR_8 < VAR_4->iface->extended_capa_len) {
   *VAR_6 &= ~VAR_4->iface->extended_capa_mask[VAR_8];
   *VAR_6 |= VAR_4->iface->extended_capa[VAR_8];
  }
 }

 while (VAR_7 > 0 && VAR_5[1 + VAR_7] == 0) {
  VAR_7--;
  VAR_5[1] = VAR_7;
 }
 if (VAR_7 == 0)
  return VAR_5;

 return VAR_5 + 2 + VAR_7;
}
