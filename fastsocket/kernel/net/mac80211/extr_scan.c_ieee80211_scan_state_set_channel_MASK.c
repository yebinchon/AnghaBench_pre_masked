
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {size_t scan_channel_idx; void* next_scan_state; TYPE_1__* scan_req; struct ieee80211_channel* scan_channel; } ;
struct ieee80211_channel {int flags; } ;
struct TYPE_2__ {int n_ssids; struct ieee80211_channel** channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (struct ieee80211_local*,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_local *VAR_6,
          unsigned long *VAR_7)
{
 int VAR_8;
 struct ieee80211_channel *VAR_9;

 VAR_8 = 0;
 VAR_9 = VAR_6->scan_req->channels[VAR_6->scan_channel_idx];

 VAR_6->scan_channel = VAR_9;

 if (FUNC_0(VAR_6, VAR_1))
  VAR_8 = 1;


 VAR_6->scan_channel_idx++;

 if (VAR_8) {

  VAR_6->next_scan_state = VAR_4;
  return;
 }
 if (VAR_9->flags & VAR_0 ||
     !VAR_6->scan_req->n_ssids) {
  *VAR_7 = VAR_2;
  VAR_6->next_scan_state = VAR_4;
  return;
 }


 *VAR_7 = VAR_3;
 VAR_6->next_scan_state = VAR_5;
}
