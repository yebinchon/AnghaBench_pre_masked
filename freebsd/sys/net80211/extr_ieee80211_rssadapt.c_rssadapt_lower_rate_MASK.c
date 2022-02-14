
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t u_int ;
struct TYPE_5__ {int* rs_rates; } ;
struct ieee80211_rssadapt_node {size_t ra_rix; TYPE_2__ ra_rates; TYPE_1__* ra_rs; int ** ra_rate_thresh; } ;
struct TYPE_6__ {int rc_thresh; } ;
struct TYPE_4__ {int vap; } ;


 int FUNC_0 (int ,int ,char*,int,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_rssadapt_node *VAR_4, int VAR_5, int VAR_6)
{
 uint16_t VAR_7;
 uint16_t (*VAR_8)[VAR_1];
 u_int VAR_9;

 VAR_8 = &VAR_4->ra_rate_thresh[FUNC_1(VAR_5)];

 VAR_9 = VAR_4->ra_rix;
 VAR_7 = (*VAR_8)[VAR_9];
 (*VAR_8)[VAR_9] = FUNC_2(VAR_3.rc_thresh,
     VAR_7, (VAR_6 << 8));

 FUNC_0(VAR_4->ra_rs->vap, VAR_0,
     "RSSADAPT lower threshold for rate %d (last_thr %d new thr %d rssi %d)\n",
     VAR_4->ra_rates.rs_rates[VAR_9 + 1] & VAR_2,
     VAR_7, (*VAR_8)[VAR_9], VAR_6);
}
