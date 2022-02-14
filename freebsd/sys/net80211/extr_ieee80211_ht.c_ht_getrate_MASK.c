
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {int dummy; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;
struct TYPE_2__ {int ht20_rate_800ns; int ht20_rate_400ns; int ht40_rate_800ns; int ht40_rate_400ns; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct ieee80211com*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211com *VAR_3, int VAR_4, enum ieee80211_phymode VAR_5,
    int VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_4 | VAR_0, VAR_5);
 if (FUNC_0(VAR_7) != VAR_1)
  return (0);
 switch (VAR_6) {
 case 0:
  VAR_8 = VAR_2[VAR_4].ht20_rate_800ns;
  break;
 case 1:
  VAR_8 = VAR_2[VAR_4].ht20_rate_400ns;
  break;
 case 2:
  VAR_8 = VAR_2[VAR_4].ht40_rate_800ns;
  break;
 default:
  VAR_8 = VAR_2[VAR_4].ht40_rate_400ns;
  break;
 }
 return (VAR_8);
}
