
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_spatial_reuse {int sr_ctrl; int* params; } ;
struct hostapd_data {TYPE_3__* iface; } ;
struct TYPE_6__ {TYPE_2__* conf; } ;
struct TYPE_4__ {int sr_control; int srg_obss_pd_max_offset; int srg_obss_pd_min_offset; int non_srg_obss_pd_max_offset; } ;
struct TYPE_5__ {TYPE_1__ spr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_spatial_reuse*,int ,int) ;

u8 * FUNC_1(struct hostapd_data *VAR_4, u8 *VAR_5)
{
 struct ieee80211_spatial_reuse *VAR_6;
 u8 *VAR_7 = VAR_5, *VAR_8;
 u8 VAR_9 = 1;

 if (!VAR_4->iface->conf->spr.sr_control)
  return VAR_5;

 if (VAR_4->iface->conf->spr.sr_control &
     VAR_0)
  VAR_9++;

 if (VAR_4->iface->conf->spr.sr_control &
     VAR_1)
  VAR_9 += 18;

 *VAR_7++ = VAR_2;
 *VAR_7++ = 1 + VAR_9;
 *VAR_7++ = VAR_3;

 VAR_6 = (struct ieee80211_spatial_reuse *) VAR_7;
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->sr_ctrl = VAR_4->iface->conf->spr.sr_control;
 VAR_7++;
 VAR_8 = VAR_6->params;
 if (VAR_6->sr_ctrl & VAR_0) {
  *VAR_8++ =
   VAR_4->iface->conf->spr.non_srg_obss_pd_max_offset;
  VAR_7++;
 }
 if (VAR_6->sr_ctrl & VAR_1) {
  *VAR_8++ = VAR_4->iface->conf->spr.srg_obss_pd_min_offset;
  *VAR_8++ = VAR_4->iface->conf->spr.srg_obss_pd_max_offset;
  VAR_7 += 18;
 }

 return VAR_7;
}
