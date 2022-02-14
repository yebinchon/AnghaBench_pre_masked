
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; scalar_t__ secondary_channel; scalar_t__ ieee80211n; } ;






 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_0, int *VAR_1)
{
 int VAR_2 = 1;

 *VAR_1 = 0;

 if (VAR_0->conf->ieee80211n && VAR_0->conf->secondary_channel)
  VAR_2 = 2;

 if (VAR_0->conf->ieee80211ac || VAR_0->conf->ieee80211ax) {
  switch (FUNC_0(VAR_0->conf)) {
  case 128:
   break;
  case 130:
   VAR_2 = 4;
   break;
  case 131:
   VAR_2 = 8;
   break;
  case 129:
   VAR_2 = 4;
   *VAR_1 = 4;
   break;
  default:
   break;
  }
 }

 return VAR_2;
}
