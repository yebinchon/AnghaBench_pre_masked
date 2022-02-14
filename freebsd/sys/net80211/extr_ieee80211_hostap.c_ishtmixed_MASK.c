
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_ie_htinfo {int hi_byte2; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline int
FUNC_0(const uint8_t *VAR_2)
{
 const struct ieee80211_ie_htinfo *VAR_3 =
     (const struct ieee80211_ie_htinfo *) VAR_2;
 return (VAR_3->hi_byte2 & VAR_0) ==
     VAR_1;
}
