
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum nl80211_ext_feature_index { ____Placeholder_nl80211_ext_feature_index } nl80211_ext_feature_index ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, int VAR_1,
        enum nl80211_ext_feature_index VAR_2)
{
 u8 VAR_3;

 if ((int) VAR_2 / 8 >= VAR_1)
  return 0;

 VAR_3 = VAR_0[VAR_2 / 8];
 return (VAR_3 & FUNC_0(VAR_2 % 8)) != 0;
}
