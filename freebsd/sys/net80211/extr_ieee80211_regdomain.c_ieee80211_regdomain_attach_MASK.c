
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ regdomain; scalar_t__ country; char location; } ;
struct ieee80211com {int ic_setregdomain; int ic_getradiocaps; TYPE_1__ ic_regdomain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct ieee80211com *VAR_3)
{
 if (VAR_3->ic_regdomain.regdomain == 0 &&
     VAR_3->ic_regdomain.country == VAR_0) {
  VAR_3->ic_regdomain.location = ' ';

 }
 VAR_3->ic_getradiocaps = VAR_1;
 VAR_3->ic_setregdomain = VAR_2;
}
