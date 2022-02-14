
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_4__* conf; TYPE_2__* iface; TYPE_1__* iconf; } ;
struct TYPE_7__ {int utf8_ssid; } ;
struct TYPE_8__ {int time_advertisement; int tdls; int wpa; int wpa_key_mgmt; int ftm_initiator; int ftm_responder; TYPE_3__ ssid; int mbo_enabled; int hs20; int qos_map_set_len; int interworking; int bss_transition; int wnm_sleep_mode; int coloc_intf_reporting; int proxy_arp; } ;
struct TYPE_6__ {int drv_flags; } ;
struct TYPE_5__ {int obss_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_4, u8 *VAR_5, int VAR_6)
{
 *VAR_5 = 0x00;

 switch (VAR_6) {
 case 0:
  if (VAR_4->iconf->obss_interval)
   *VAR_5 |= 0x01;
  if (VAR_4->iface->drv_flags & VAR_2)
   *VAR_5 |= 0x04;
  break;
 case 1:
  if (VAR_4->conf->proxy_arp)
   *VAR_5 |= 0x10;
  if (VAR_4->conf->coloc_intf_reporting) {

   *VAR_5 |= 0x20;
  }
  break;
 case 2:
  if (VAR_4->conf->wnm_sleep_mode)
   *VAR_5 |= 0x02;
  if (VAR_4->conf->bss_transition)
   *VAR_5 |= 0x08;
  break;
 case 3:



  if (VAR_4->conf->time_advertisement == 2)
   *VAR_5 |= 0x08;
  if (VAR_4->conf->interworking)
   *VAR_5 |= 0x80;
  break;
 case 4:
  if (VAR_4->conf->qos_map_set_len)
   *VAR_5 |= 0x01;
  if (VAR_4->conf->tdls & VAR_0)
   *VAR_5 |= 0x40;
  if (VAR_4->conf->tdls & VAR_1) {

   *VAR_5 |= 0x80;
  }
  break;
 case 5:
  break;
 case 6:
  if (VAR_4->conf->ssid.utf8_ssid)
   *VAR_5 |= 0x01;
  break;
 case 7:
  break;
 case 8:
  if (VAR_4->conf->ftm_responder)
   *VAR_5 |= 0x40;
  if (VAR_4->conf->ftm_initiator)
   *VAR_5 |= 0x80;
  break;
 case 9:





  break;
 case 10:
  break;
 }
}
