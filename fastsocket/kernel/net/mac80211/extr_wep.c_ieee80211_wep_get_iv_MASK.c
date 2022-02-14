
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_local {int wep_iv; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_local *VAR_0,
     int VAR_1, int VAR_2, u8 *VAR_3)
{
 VAR_0->wep_iv++;
 if (FUNC_0(VAR_0->wep_iv, VAR_1))
  VAR_0->wep_iv += 0x0100;

 if (!VAR_3)
  return;

 *VAR_3++ = (VAR_0->wep_iv >> 16) & 0xff;
 *VAR_3++ = (VAR_0->wep_iv >> 8) & 0xff;
 *VAR_3++ = VAR_0->wep_iv & 0xff;
 *VAR_3++ = VAR_2 << 6;
}
