
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_appie {int ie_len; int ie_data; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static __inline uint8_t *
FUNC_1(uint8_t *VAR_0, const struct ieee80211_appie *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->ie_data, VAR_1->ie_len);
 return VAR_0 + VAR_1->ie_len;
}
