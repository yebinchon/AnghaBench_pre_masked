
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ status; } ;
struct ieee80211_radiotap_header {int dummy; } ;
struct TYPE_3__ {scalar_t__ idx; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ieee80211_tx_info *VAR_1)
{
 int VAR_2 = sizeof(struct ieee80211_radiotap_header);


 if (VAR_1->status.rates[0].idx >= 0 &&
     !(VAR_1->status.rates[0].flags & VAR_0))
  VAR_2 += 2;


 VAR_2 += 2;


 VAR_2 += 1;


 if (VAR_1->status.rates[0].idx >= 0 &&
     VAR_1->status.rates[0].flags & VAR_0)
  VAR_2 += 3;

 return VAR_2;
}
