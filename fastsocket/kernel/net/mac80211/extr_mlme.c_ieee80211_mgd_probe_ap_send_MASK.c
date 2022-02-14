
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ieee80211_if_managed {scalar_t__ probe_send_count; int nullfunc_failed; scalar_t__ probe_timeout; TYPE_5__* associated; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__* local; TYPE_1__ u; } ;
struct TYPE_9__ {int channel; scalar_t__* bssid; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_3__*,struct ieee80211_sub_if_data*) ;
 int FUNC_3 (TYPE_3__*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,scalar_t__*,scalar_t__ const*,int,int *,int ,int ,int,int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct ieee80211_if_managed*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_sub_if_data *VAR_5)
{
 struct ieee80211_if_managed *VAR_6 = &VAR_5->u.mgd;
 const u8 *VAR_7;
 u8 *VAR_8 = VAR_6->associated->bssid;
 u8 VAR_9 = FUNC_5(1, VAR_3 - 3);






 if (VAR_6->probe_send_count >= VAR_9)
  VAR_8 = ((void*)0);
 VAR_6->probe_send_count++;

 if (VAR_5->local->hw.flags & VAR_0) {
  VAR_6->nullfunc_failed = 0;
  FUNC_3(VAR_5->local, VAR_5, 0);
 } else {
  int VAR_10;

  FUNC_7();
  VAR_7 = FUNC_1(VAR_6->associated, VAR_1);
  if (FUNC_0(VAR_7 == ((void*)0)))
   VAR_10 = 0;
  else
   VAR_10 = VAR_7[1];

  FUNC_4(VAR_5, VAR_8, VAR_7 + 2, VAR_10, ((void*)0),
      0, (u32) -1, 1, 0,
      VAR_6->associated->channel, 0);
  FUNC_8();
 }

 VAR_6->probe_timeout = VAR_2 + FUNC_6(VAR_4);
 FUNC_9(VAR_6, VAR_6->probe_timeout);
 if (VAR_5->local->hw.flags & VAR_0)
  FUNC_2(VAR_5->local, VAR_5);
}
