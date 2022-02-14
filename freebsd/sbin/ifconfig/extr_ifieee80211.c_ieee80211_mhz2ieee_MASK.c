
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_ieee; } ;


 int FUNC_0 (struct ieee80211_channel*,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, int VAR_1)
{
 struct ieee80211_channel VAR_2;
 FUNC_0(&VAR_2, VAR_0, VAR_1);
 return VAR_2.ic_ieee;
}
