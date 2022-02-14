
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(const struct ieee80211_rateset *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->rs_nrates; VAR_3++)
  switch (VAR_1->rs_rates[VAR_3] & VAR_0) {
  case 2: VAR_2 |= 0x001; break;
  case 4: VAR_2 |= 0x002; break;
  case 11: VAR_2 |= 0x004; break;
  case 22: VAR_2 |= 0x008; break;
  case 44: VAR_2 |= 0x010; break;
  case 12: VAR_2 |= 0x020; break;
  case 18: VAR_2 |= 0x040; break;
  case 24: VAR_2 |= 0x080; break;
  case 36: VAR_2 |= 0x100; break;
  case 48: VAR_2 |= 0x200; break;
  case 72: VAR_2 |= 0x400; break;
  case 96: VAR_2 |= 0x800; break;
  case 108: VAR_2 |= 0x1000; break;
  }
 return VAR_2;
}
