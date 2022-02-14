
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_channel* FUNC_0 (struct wiphy*,int) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_2,
         u32 VAR_3,
         u32 VAR_4)
{
 struct ieee80211_channel *VAR_5;
 u32 VAR_6;

 for (VAR_6 = VAR_3 - VAR_4/2 + 10;
      VAR_6 <= VAR_3 + VAR_4/2 - 10;
      VAR_6 += 20) {
  VAR_5 = FUNC_0(VAR_2, VAR_6);
  if (!VAR_5)
   return -VAR_0;

  if (VAR_5->flags & VAR_1)
   return 1;
 }
 return 0;
}
