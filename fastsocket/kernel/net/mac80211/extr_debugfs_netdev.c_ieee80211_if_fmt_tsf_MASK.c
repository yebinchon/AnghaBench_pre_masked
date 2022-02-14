
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_1 (char*,int,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_2(
 const struct ieee80211_sub_if_data *VAR_0, char *VAR_1, int VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_0->local;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_3, (struct ieee80211_sub_if_data *)VAR_0);

 return FUNC_1(VAR_1, VAR_2, "0x%016llx\n", (unsigned long long) VAR_4);
}
