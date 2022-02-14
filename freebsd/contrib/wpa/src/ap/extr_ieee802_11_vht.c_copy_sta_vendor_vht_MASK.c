
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u16 ;
struct sta_info {int flags; int * vht_capabilities; } ;
struct ieee80211_vht_capabilities {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ disable_11ac; } ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned int const*,int) ;
 int * FUNC_1 (int) ;

u16 FUNC_2(struct hostapd_data *VAR_5, struct sta_info *VAR_6,
   const u8 *VAR_7, size_t VAR_8)
{
 const u8 *VAR_9;
 unsigned int VAR_10;

 if (!VAR_7 || VAR_8 < 5 + 2 + sizeof(struct ieee80211_vht_capabilities) ||
     VAR_5->conf->disable_11ac)
  goto no_capab;


 VAR_9 = VAR_7 + 5;
 if (VAR_9[0] != VAR_0)
  goto no_capab;
 VAR_10 = VAR_9[1];
 if (VAR_10 < sizeof(struct ieee80211_vht_capabilities) ||
     (int) VAR_10 > VAR_7 + VAR_8 - VAR_9 - 2)
  goto no_capab;
 VAR_9 += 2;

 if (VAR_6->vht_capabilities == ((void*)0)) {
  VAR_6->vht_capabilities =
   FUNC_1(sizeof(struct ieee80211_vht_capabilities));
  if (VAR_6->vht_capabilities == ((void*)0))
   return VAR_2;
 }

 VAR_6->flags |= VAR_4 | VAR_3;
 FUNC_0(VAR_6->vht_capabilities, VAR_9,
    sizeof(struct ieee80211_vht_capabilities));
 return VAR_1;

no_capab:
 VAR_6->flags &= ~VAR_3;
 return VAR_1;
}
