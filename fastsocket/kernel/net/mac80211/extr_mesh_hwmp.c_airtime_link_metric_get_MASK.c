
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sta_info {int fail_avg; int last_tx_rate; } ;
struct rate_info {int dummy; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rate_info*) ;
 int FUNC_2 (struct sta_info*,int *,struct rate_info*) ;

__attribute__((used)) static u32 FUNC_3(struct ieee80211_local *VAR_3,
       struct sta_info *VAR_4)
{
 struct rate_info VAR_5;

 int VAR_6 = 1 << VAR_0;
 int VAR_7 = VAR_2 << VAR_0;
 int VAR_8 = 1 << VAR_0;
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u64 VAR_13;

 if (VAR_4->fail_avg >= 100)
  return VAR_1;

 FUNC_2(VAR_4, &VAR_4->last_tx_rate, &VAR_5);
 VAR_9 = FUNC_1(&VAR_5);
 if (FUNC_0(!VAR_9))
  return VAR_1;

 VAR_10 = (VAR_4->fail_avg << VAR_0) / 100;




 VAR_11 = (VAR_6 + 10 * VAR_7 / VAR_9);
 VAR_12 = ((1 << (2 * VAR_0)) / (VAR_8 - VAR_10));
 VAR_13 = (VAR_11 * VAR_12) >> (2 * VAR_0) ;
 return (u32)VAR_13;
}
