
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct hostapd_data {TYPE_5__* conf; TYPE_4__* iconf; TYPE_6__* iface; } ;
struct TYPE_12__ {scalar_t__ num_sta_no_short_preamble; scalar_t__ num_sta_no_short_slot_time; TYPE_3__* current_mode; } ;
struct TYPE_7__ {int keys_set; } ;
struct TYPE_8__ {TYPE_1__ wep; } ;
struct TYPE_11__ {scalar_t__* radio_measurements; scalar_t__ osen; scalar_t__ wpa; scalar_t__ individual_wep_key_len; scalar_t__ default_wep_key_len; scalar_t__ ieee802_1x; TYPE_2__ ssid; } ;
struct TYPE_10__ {scalar_t__ preamble; scalar_t__ spectrum_mgmt_required; } ;
struct TYPE_9__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,char*,int) ;

u16 FUNC_2(struct hostapd_data *VAR_11)
{
 int VAR_12 = VAR_6;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 VAR_14 = FUNC_0(VAR_11->iface);
 if (VAR_14 < 0) {
  FUNC_1(VAR_3, "Failed to check if DFS is required; ret=%d",
      VAR_14);
  VAR_14 = 0;
 }

 if (VAR_11->iface->num_sta_no_short_preamble == 0 &&
     VAR_11->iconf->preamble == VAR_5)
  VAR_12 |= VAR_8;

 VAR_13 = VAR_11->conf->ssid.wep.keys_set;

 if (VAR_11->conf->ieee802_1x &&
     (VAR_11->conf->default_wep_key_len ||
      VAR_11->conf->individual_wep_key_len))
  VAR_13 = 1;

 if (VAR_11->conf->wpa)
  VAR_13 = 1;






 if (VAR_13)
  VAR_12 |= VAR_7;

 if (VAR_11->iface->current_mode &&
     VAR_11->iface->current_mode->mode == VAR_1 &&
     VAR_11->iface->num_sta_no_short_slot_time == 0)
  VAR_12 |= VAR_9;







 if (VAR_11->iface->current_mode &&
     VAR_11->iface->current_mode->mode == VAR_0 &&
     (VAR_11->iconf->spectrum_mgmt_required || VAR_14))
  VAR_12 |= VAR_10;

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  if (VAR_11->conf->radio_measurements[VAR_15]) {
   VAR_12 |= VAR_2;
   break;
  }
 }

 return VAR_12;
}
