
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_iface {scalar_t__ freq; struct hostapd_config* conf; struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_data {TYPE_1__* iconf; struct hostapd_iface* iface; } ;
struct hostapd_config {int vht_oper_chwidth; int secondary_channel; } ;
struct hostapd_channel_data {scalar_t__ freq; int max_tx_power; } ;
struct TYPE_2__ {int local_pwr_constraint; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 scalar_t__ FUNC_1 (scalar_t__,int*) ;

u8 * FUNC_2(struct hostapd_data *VAR_2, u8 *VAR_3)
{
 struct hostapd_iface *VAR_4 = VAR_2->iface;
 struct hostapd_config *VAR_5 = VAR_4->conf;
 struct hostapd_hw_modes *VAR_6 = VAR_4->current_mode;
 struct hostapd_channel_data *VAR_7;
 int VAR_8, VAR_9;
 u8 VAR_10, VAR_11, VAR_12;
 int VAR_13;
 u8 VAR_14;

 if (!VAR_6)
  return VAR_3;

 if (FUNC_1(VAR_4->freq, &VAR_10) == VAR_0)
  return VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_channels; VAR_9++) {
  if (VAR_6->channels[VAR_9].freq == VAR_4->freq)
   break;
 }
 if (VAR_9 == VAR_6->num_channels)
  return VAR_3;

 switch (VAR_4->conf->vht_oper_chwidth) {
 case 128:
  if (VAR_5->secondary_channel == 0) {

   VAR_11 = 0;
  } else {

   VAR_11 = 1;
  }
  break;
 case 130:

  VAR_11 = 2;
  break;
 case 129:
 case 131:

  VAR_11 = 3;
  break;
 default:
  return VAR_3;
 }







 VAR_8 = FUNC_0(VAR_2->iface);
 if (VAR_8 < 0)
  VAR_8 = 0;







 if (VAR_2->iconf->local_pwr_constraint == -1)
  VAR_12 = (VAR_8 == 0) ? 0 : 3;
 else
  VAR_12 = VAR_2->iconf->local_pwr_constraint;
 VAR_7 = &VAR_6->channels[VAR_9];
 VAR_13 = VAR_7->max_tx_power - VAR_12;





 VAR_13 *= 2;
 if (VAR_13 > 127) {

  VAR_13 = 127;
 }
 if (VAR_13 < -128)
  VAR_13 = -128;
 if (VAR_13 < 0)
  VAR_14 = 0x80 + VAR_13 + 128;
 else
  VAR_14 = VAR_13;

 *VAR_3++ = VAR_1;
 *VAR_3++ = 2 + VAR_11;





 *VAR_3++ = VAR_11;

 for (VAR_9 = 0; VAR_9 <= VAR_11; VAR_9++)
  *VAR_3++ = VAR_14;

 return VAR_3;
}
