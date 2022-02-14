
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {TYPE_1__* iv_txparms; int iv_ic; } ;
struct ieee80211_scan_entry {int* se_rates; int* se_xrates; } ;
struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int ucastrate; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const) ;
 size_t FUNC_1 (struct ieee80211_channel const*) ;
 struct ieee80211_rateset* FUNC_2 (int ,struct ieee80211_channel const*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_2, const struct ieee80211_channel *VAR_3,
    const struct ieee80211_scan_entry *VAR_4)
{
 const struct ieee80211_rateset *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 const uint8_t *VAR_14;

 VAR_10 = VAR_11 = 0;

 VAR_5 = FUNC_2(VAR_2->iv_ic, VAR_3);
 VAR_8 = VAR_4->se_rates[1];
 VAR_14 = VAR_4->se_rates+2;

 VAR_13 = VAR_2->iv_txparms[FUNC_1(VAR_3)].ucastrate;
 VAR_12 = VAR_0;
again:
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_9 = FUNC_0(VAR_14[VAR_6]);
  VAR_11 = VAR_9;



  if (VAR_9 == VAR_13)
   VAR_12 = VAR_9;



  for (VAR_7 = 0; VAR_7 < VAR_5->rs_nrates; VAR_7++)
   if (VAR_9 == FUNC_0(VAR_5->rs_rates[VAR_7])) {
    if (VAR_9 > VAR_10)
     VAR_10 = VAR_9;
    break;
   }

  if (VAR_7 == VAR_5->rs_nrates && (VAR_14[VAR_6] & VAR_1)) {




   VAR_10 = 0;
   goto back;
  }
 }
 if (VAR_14 == VAR_4->se_rates+2) {

  VAR_8 = VAR_4->se_xrates[1];
  VAR_14 = VAR_4->se_xrates+2;
  goto again;
 }

back:
 if (VAR_10 == 0 || VAR_13 != VAR_12)
  return VAR_11 | VAR_1;
 else
  return FUNC_0(VAR_10);
}
