
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;
struct ieee80211_rate_table {int dummy; } ;
struct bwi_mac {int dummy; } ;
typedef enum ieee80211_phytype { ____Placeholder_ieee80211_phytype } ieee80211_phytype ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct bwi_mac*,int ,int) ;
 int FUNC_1 (struct bwi_mac*,int ,int,int ) ;
 int FUNC_2 (struct ieee80211_rate_table const*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void
FUNC_5(struct bwi_mac *VAR_2, const struct ieee80211_rate_table *VAR_3,
 const struct ieee80211_rateset *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->rs_nrates; ++VAR_5) {
  enum ieee80211_phytype VAR_6;
  uint16_t VAR_7;

  VAR_6 = FUNC_2(VAR_3,
      VAR_4->rs_rates[VAR_5] & VAR_1);
  switch (VAR_6) {
  case 129:
   VAR_7 = 0x4c0;
   break;
  case 128:
   VAR_7 = 0x480;
   break;
  default:
   FUNC_4("unsupported modtype %u\n", VAR_6);
  }
  VAR_7 += 2*(FUNC_3(
      VAR_4->rs_rates[VAR_5] & VAR_1,
      VAR_6) & 0xf);

  FUNC_1(VAR_2, VAR_0, VAR_7 + 0x20,
        FUNC_0(VAR_2, VAR_0, VAR_7));
 }
}
