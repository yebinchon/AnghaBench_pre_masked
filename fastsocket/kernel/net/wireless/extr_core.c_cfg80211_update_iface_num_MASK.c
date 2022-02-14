
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_registered_device {int num_running_ifaces; int num_running_monitor_ifaces; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 () ;
 int VAR_0 ;

void FUNC_1(struct cfg80211_registered_device *VAR_1,
          enum nl80211_iftype VAR_2, int VAR_3)
{
 FUNC_0();

 VAR_1->num_running_ifaces += VAR_3;
 if (VAR_2 == VAR_0)
  VAR_1->num_running_monitor_ifaces += VAR_3;
}
