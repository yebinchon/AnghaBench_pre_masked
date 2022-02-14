
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int freq; unsigned int duration; } ;
union wpa_event_data {TYPE_1__ remain_on_channel; } ;
typedef scalar_t__ u64 ;
struct wpa_driver_nl80211_data {scalar_t__ remain_on_chan_cookie; int ctx; scalar_t__ pending_remain_on_chan; } ;
struct nlattr {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned int FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (union wpa_event_data*,int ,int) ;
 int FUNC_3 (int ,char*,int,unsigned int,unsigned int,unsigned int,unsigned long long,char*) ;
 int FUNC_4 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_5(struct wpa_driver_nl80211_data *VAR_7,
      int VAR_8, struct nlattr *VAR_9[])
{
 unsigned int VAR_10, VAR_11, VAR_12;
 union wpa_event_data VAR_13;
 u64 VAR_14;

 if (VAR_9[VAR_6])
  VAR_10 = FUNC_0(VAR_9[VAR_6]);
 else
  VAR_10 = 0;

 if (VAR_9[VAR_5])
  VAR_11 = FUNC_0(VAR_9[VAR_5]);
 else
  VAR_11 = 0;

 if (VAR_9[VAR_4])
  VAR_12 = FUNC_0(VAR_9[VAR_4]);
 else
  VAR_12 = 0;

 if (VAR_9[VAR_3])
  VAR_14 = FUNC_1(VAR_9[VAR_3]);
 else
  VAR_14 = 0;

 FUNC_3(VAR_2, "nl80211: Remain-on-channel event (cancel=%d "
     "freq=%u channel_type=%u duration=%u cookie=0x%llx (%s))",
     VAR_8, VAR_10, VAR_11, VAR_12,
     (long long unsigned int) VAR_14,
     VAR_14 == VAR_7->remain_on_chan_cookie ? "match" : "unknown");

 if (VAR_14 != VAR_7->remain_on_chan_cookie)
  return;

 if (VAR_8)
  VAR_7->pending_remain_on_chan = 0;

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.remain_on_channel.freq = VAR_10;
 VAR_13.remain_on_channel.duration = VAR_12;
 FUNC_4(VAR_7->ctx, VAR_8 ?
        VAR_0 :
        VAR_1, &VAR_13);
}
