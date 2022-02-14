
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_ht_operation {int ht_param; int operation_mode; int primary_chan; } ;
struct hostapd_data {TYPE_3__* iconf; TYPE_2__* iface; TYPE_1__* conf; } ;
struct TYPE_6__ {int secondary_channel; int channel; int ieee80211n; } ;
struct TYPE_5__ {int ht_op_mode; } ;
struct TYPE_4__ {scalar_t__ disable_11n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_ht_operation*,int ,int) ;

u8 * FUNC_2(struct hostapd_data *VAR_4, u8 *VAR_5)
{
 struct ieee80211_ht_operation *VAR_6;
 u8 *VAR_7 = VAR_5;

 if (!VAR_4->iconf->ieee80211n || VAR_4->conf->disable_11n)
  return VAR_5;

 *VAR_7++ = VAR_3;
 *VAR_7++ = sizeof(*VAR_6);

 VAR_6 = (struct ieee80211_ht_operation *) VAR_7;
 FUNC_1(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->primary_chan = VAR_4->iconf->channel;
 VAR_6->operation_mode = FUNC_0(VAR_4->iface->ht_op_mode);
 if (VAR_4->iconf->secondary_channel == 1)
  VAR_6->ht_param |= VAR_0 |
   VAR_2;
 if (VAR_4->iconf->secondary_channel == -1)
  VAR_6->ht_param |= VAR_1 |
   VAR_2;

 VAR_7 += sizeof(*VAR_6);

 return VAR_7;
}
