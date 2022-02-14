
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rc_pid_event_data {int tx_status; int flags; } ;
struct rc_pid_event_buffer {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ieee80211_tx_info*,int) ;
 int FUNC_1 (struct rc_pid_event_buffer*,int ,union rc_pid_event_data*) ;

void FUNC_2(struct rc_pid_event_buffer *VAR_1,
          struct ieee80211_tx_info *VAR_2)
{
 union rc_pid_event_data VAR_3;

 VAR_3.flags = VAR_2->flags;
 FUNC_0(&VAR_3.tx_status, VAR_2, sizeof(struct ieee80211_tx_info));
 FUNC_1(VAR_1, VAR_0, &VAR_3);
}
