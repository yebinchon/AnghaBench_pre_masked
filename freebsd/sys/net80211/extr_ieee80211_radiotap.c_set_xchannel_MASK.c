
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int ic_maxregpower; int ic_ieee; int ic_freq; int ic_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const struct ieee80211_channel *VAR_1)
{
 struct {
  uint32_t flags;
  uint16_t freq;
  uint8_t ieee;
  uint8_t maxpow;
 } *VAR_2 = VAR_0;

 VAR_2->flags = FUNC_1(VAR_1->ic_flags);
 VAR_2->freq = FUNC_0(VAR_1->ic_freq);
 VAR_2->ieee = VAR_1->ic_ieee;
 VAR_2->maxpow = VAR_1->ic_maxregpower;
}
