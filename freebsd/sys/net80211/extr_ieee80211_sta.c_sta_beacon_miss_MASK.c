
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_beacon_miss; } ;
struct ieee80211vap {size_t iv_state; size_t iv_opmode; scalar_t__ iv_bmiss_count; scalar_t__ iv_bmiss_max; scalar_t__ iv_roaming; TYPE_3__* iv_bss; TYPE_1__ iv_stats; int iv_swbmiss; int iv_myaddr; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; TYPE_2__* ic_bsschan; } ;
struct TYPE_7__ {int ni_esslen; int ni_essid; int ni_bssid; } ;
struct TYPE_6__ {int ic_flags; } ;


 scalar_t__ FUNC_0 (struct ieee80211vap*,TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211vap*,int,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211com*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (struct ieee80211vap*,int) ;
 int FUNC_7 (struct ieee80211vap*,int ,int) ;
 int * VAR_10 ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int * VAR_11 ;

__attribute__((used)) static void
FUNC_9(struct ieee80211vap *VAR_12)
{
 struct ieee80211com *VAR_13 = VAR_12->iv_ic;

 FUNC_2(VAR_13);

 FUNC_3((VAR_13->ic_flags & VAR_1) == 0, ("scanning"));
 FUNC_3(VAR_12->iv_state >= VAR_8,
     ("wrong state %s", VAR_11[VAR_12->iv_state]));

 FUNC_1(VAR_12, VAR_3 | VAR_2,
     "beacon miss, mode %s state %s\n",
     VAR_10[VAR_12->iv_opmode],
     VAR_11[VAR_12->iv_state]);

 if (VAR_12->iv_state == VAR_7) {







  FUNC_5(VAR_13);
  return;
 }
 if (++VAR_12->iv_bmiss_count < VAR_12->iv_bmiss_max) {







  FUNC_8(VAR_12->iv_bss, VAR_12->iv_myaddr,
   VAR_12->iv_bss->ni_bssid, VAR_12->iv_bss->ni_bssid,
   VAR_12->iv_bss->ni_essid, VAR_12->iv_bss->ni_esslen);
  return;
 }

 FUNC_4(&VAR_12->iv_swbmiss);
 VAR_12->iv_bmiss_count = 0;
 VAR_12->iv_stats.is_beacon_miss++;
 if (VAR_12->iv_roaming == VAR_5) {
  FUNC_7(VAR_12, VAR_6, 1);
 } else {






  FUNC_7(VAR_12, VAR_9, 0);
 }
}
