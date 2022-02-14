
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct ieee80211_channel {int ic_flags; int ic_freq; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const struct ieee80211_channel *VAR_1)
{
 struct {
  uint16_t freq;
  uint16_t flags;
 } *VAR_2 = VAR_0;

 VAR_2->freq = FUNC_0(VAR_1->ic_freq);
 VAR_2->flags = FUNC_0(VAR_1->ic_flags);
}
