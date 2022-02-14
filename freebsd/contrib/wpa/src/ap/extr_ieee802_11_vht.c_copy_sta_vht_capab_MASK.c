
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {int * vht_capabilities; int flags; } ;
struct ieee80211_vht_capabilities {int dummy; } ;
struct hostapd_data {TYPE_2__* iface; TYPE_1__* conf; TYPE_3__* iconf; } ;
struct TYPE_6__ {int ieee80211ac; } ;
struct TYPE_5__ {int current_mode; } ;
struct TYPE_4__ {scalar_t__ disable_11ac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int * FUNC_3 (int) ;

u16 FUNC_4(struct hostapd_data *VAR_3, struct sta_info *VAR_4,
         const u8 *VAR_5)
{

 if (!VAR_5 ||
     !VAR_3->iconf->ieee80211ac || VAR_3->conf->disable_11ac ||
     !FUNC_0(VAR_3->iface->current_mode, VAR_5)) {
  VAR_4->flags &= ~VAR_2;
  FUNC_1(VAR_4->vht_capabilities);
  VAR_4->vht_capabilities = ((void*)0);
  return VAR_0;
 }

 if (VAR_4->vht_capabilities == ((void*)0)) {
  VAR_4->vht_capabilities =
   FUNC_3(sizeof(struct ieee80211_vht_capabilities));
  if (VAR_4->vht_capabilities == ((void*)0))
   return VAR_1;
 }

 VAR_4->flags |= VAR_2;
 FUNC_2(VAR_4->vht_capabilities, VAR_5,
    sizeof(struct ieee80211_vht_capabilities));

 return VAR_0;
}
