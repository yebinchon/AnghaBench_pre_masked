
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_3__* iconf; TYPE_2__* iface; } ;
struct TYPE_6__ {scalar_t__ require_vht; scalar_t__ ieee80211ac; scalar_t__ require_ht; scalar_t__ ieee80211n; } ;
struct TYPE_5__ {int num_rates; TYPE_1__* current_rates; } ;
struct TYPE_4__ {int rate; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u8 * FUNC_0(struct hostapd_data *VAR_4, u8 *VAR_5)
{
 u8 *VAR_6 = VAR_5;
 int VAR_7, VAR_8, VAR_9;

 if (VAR_4->iface->current_rates == ((void*)0))
  return VAR_5;

 VAR_8 = VAR_4->iface->num_rates;
 if (VAR_4->iconf->ieee80211n && VAR_4->iconf->require_ht)
  VAR_8++;
 if (VAR_4->iconf->ieee80211ac && VAR_4->iconf->require_vht)
  VAR_8++;
 if (VAR_8 <= 8)
  return VAR_5;
 VAR_8 -= 8;

 *VAR_6++ = VAR_3;
 *VAR_6++ = VAR_8;
 for (VAR_7 = 0, VAR_9 = 0; VAR_7 < VAR_4->iface->num_rates && VAR_9 < VAR_8 + 8;
      VAR_7++) {
  VAR_9++;
  if (VAR_9 <= 8)
   continue;
  *VAR_6 = VAR_4->iface->current_rates[VAR_7].rate / 5;
  if (VAR_4->iface->current_rates[VAR_7].flags & VAR_2)
   *VAR_6 |= 0x80;
  VAR_6++;
 }

 if (VAR_4->iconf->ieee80211n && VAR_4->iconf->require_ht) {
  VAR_9++;
  if (VAR_9 > 8)
   *VAR_6++ = 0x80 | VAR_0;
 }

 if (VAR_4->iconf->ieee80211ac && VAR_4->iconf->require_vht) {
  VAR_9++;
  if (VAR_9 > 8)
   *VAR_6++ = 0x80 | VAR_1;
 }

 return VAR_6;
}
