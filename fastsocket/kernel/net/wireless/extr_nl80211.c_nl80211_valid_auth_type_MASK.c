
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct cfg80211_registered_device *VAR_3,
        enum nl80211_auth_type VAR_4,
        enum nl80211_commands VAR_5)
{
 if (VAR_4 > VAR_0)
  return 0;

 switch (VAR_5) {
 case 130:
  if (!(VAR_3->wiphy.features & VAR_2) &&
      VAR_4 == VAR_1)
   return 0;
  return 1;
 case 129:
 case 128:

  if (VAR_4 == VAR_1)
   return 0;
  return 1;
 default:
  return 0;
 }
}
