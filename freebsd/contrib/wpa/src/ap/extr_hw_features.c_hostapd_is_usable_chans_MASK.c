
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; int current_mode; } ;
struct hostapd_channel_data {int allowed_bw; } ;
struct TYPE_2__ {int channel; int secondary_channel; int ht40_plus_minus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*,int,int) ;
 struct hostapd_channel_data* FUNC_1 (int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct hostapd_iface *VAR_2)
{
 int VAR_3;
 struct hostapd_channel_data *VAR_4;

 VAR_4 = FUNC_1(VAR_2->current_mode,
           VAR_2->conf->channel, ((void*)0));
 if (!VAR_4)
  return 0;

 if (!FUNC_0(VAR_2, VAR_2->conf->channel, 1))
  return 0;

 if (!VAR_2->conf->secondary_channel)
  return 1;

 if (!VAR_2->conf->ht40_plus_minus_allowed)
  return FUNC_0(
   VAR_2, VAR_2->conf->channel +
   VAR_2->conf->secondary_channel * 4, 0);


 VAR_3 = VAR_2->conf->channel + 4;
 if (FUNC_0(VAR_2, VAR_3, 0) &&
     (VAR_4->allowed_bw & VAR_1)) {
  VAR_2->conf->secondary_channel = 1;
  return 1;
 }

 VAR_3 = VAR_2->conf->channel - 4;
 if (FUNC_0(VAR_2, VAR_3, 0) &&
     (VAR_4->allowed_bw & VAR_0)) {
  VAR_2->conf->secondary_channel = -1;
  return 1;
 }

 return 0;
}
