
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int* rs_rates; } ;
struct ieee80211_rssadapt_node {int** ra_rate_thresh; int ra_rix; int ra_last_raise; TYPE_2__ ra_rates; TYPE_1__* ra_rs; } ;
struct TYPE_6__ {int rc_decay; } ;
struct TYPE_4__ {int vap; } ;


 int FUNC_0 (int ,int ,char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_rssadapt_node *VAR_5, int VAR_6, int VAR_7)
{
 uint16_t (*VAR_8)[VAR_1];
 uint16_t VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = &VAR_5->ra_rate_thresh[FUNC_1(VAR_6)];

 VAR_11 = VAR_5->ra_rix;
 if ((*VAR_8)[VAR_11 + 1] > (*VAR_8)[VAR_11]) {
  VAR_10 = (*VAR_8)[VAR_11 + 1];
  if ((*VAR_8)[VAR_11] == 0)
   VAR_9 = (VAR_7 << 8);
  else
   VAR_9 = (*VAR_8)[VAR_11];
  (*VAR_8)[VAR_11 + 1] = FUNC_2(VAR_3.rc_decay,
      VAR_10, VAR_9);

  FUNC_0(VAR_5->ra_rs->vap, VAR_0,
      "RSSADAPT raise threshold for rate %d (oldthr %d newthr %d rssi %d)\n",
      VAR_5->ra_rates.rs_rates[VAR_11 + 1] & VAR_2,
      VAR_10, VAR_9, VAR_7);

  VAR_5->ra_last_raise = VAR_4;
 }
}
