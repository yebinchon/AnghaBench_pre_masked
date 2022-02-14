
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ieee80211_node {scalar_t__ ni_avgrssi; } ;
typedef int int8_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int8_t
FUNC_1(const struct ieee80211_node *VAR_1)
{
 uint32_t VAR_2 = VAR_1->ni_avgrssi;
 int32_t VAR_3;

 if (VAR_2 == VAR_0)
  return 0;
 VAR_3 = FUNC_0(VAR_2);
 return VAR_3 < 0 ? 0 : VAR_3 > 127 ? 127 : VAR_3;
}
