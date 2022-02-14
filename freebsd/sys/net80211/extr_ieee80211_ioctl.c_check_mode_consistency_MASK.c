
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;


 struct ieee80211_channel const* VAR_0 ;
 int FUNC_0 (struct ieee80211_channel const*) ;
 int FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ieee80211_channel const*) ;
 int FUNC_4 (struct ieee80211_channel const*) ;
 int FUNC_5 (struct ieee80211_channel const*) ;
 int FUNC_6 (struct ieee80211_channel const*) ;






 int FUNC_7 (int,char*) ;

__attribute__((used)) static int
FUNC_8(const struct ieee80211_channel *VAR_1, int VAR_2)
{
 FUNC_7(VAR_1 != VAR_0, ("oops, no channel"));

 switch (VAR_2) {
 case 132:
  return (FUNC_2(VAR_1));
 case 131:
  return (FUNC_1(VAR_1) && !FUNC_3(VAR_1));
 case 133:
  return (FUNC_0(VAR_1) && !FUNC_3(VAR_1));
 case 128:
  return (FUNC_6(VAR_1));
 case 130:
  return (FUNC_4(VAR_1));
 case 129:
  return (FUNC_5(VAR_1));
 }
 return 1;

}
