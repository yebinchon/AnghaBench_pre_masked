
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int priv_flags; } ;
struct TYPE_2__ {int flags; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct cfg80211_registered_device *VAR_5,
          struct net_device *VAR_6, u8 VAR_7,
          enum nl80211_iftype VAR_8)
{
 if (!VAR_7) {
  if (VAR_6 && (VAR_6->priv_flags & VAR_2))
   return -VAR_0;
  return 0;
 }

 switch (VAR_8) {
 case 129:
  if (VAR_5->wiphy.flags & VAR_3)
   return 0;
  break;
 case 128:
  if (VAR_5->wiphy.flags & VAR_4)
   return 0;
  break;
 default:
  break;
 }

 return -VAR_1;
}
