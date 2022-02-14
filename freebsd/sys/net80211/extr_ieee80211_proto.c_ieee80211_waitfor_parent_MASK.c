
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_tq; int ic_chw_task; int ic_bmiss_task; int ic_chan_task; int ic_promisc_task; int ic_mcast_task; int ic_parent_task; } ;


 int FUNC_0 (struct ieee80211com*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct ieee80211com *VAR_0)
{
 FUNC_1(VAR_0->ic_tq);
 FUNC_0(VAR_0, &VAR_0->ic_parent_task);
 FUNC_0(VAR_0, &VAR_0->ic_mcast_task);
 FUNC_0(VAR_0, &VAR_0->ic_promisc_task);
 FUNC_0(VAR_0, &VAR_0->ic_chan_task);
 FUNC_0(VAR_0, &VAR_0->ic_bmiss_task);
 FUNC_0(VAR_0, &VAR_0->ic_chw_task);
 FUNC_2(VAR_0->ic_tq);
}
