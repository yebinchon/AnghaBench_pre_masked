
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ htcap_ie; } ;
struct ieee80211_scan_entry {int* se_rates; int* se_xrates; TYPE_1__ se_ies; } ;
struct ieee80211_ie_htcap {int* hc_mcsset; int hc_cap; } ;
struct TYPE_4__ {int ht40_rate_400ns; int ht40_rate_800ns; int ht20_rate_400ns; int ht20_rate_800ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(const struct ieee80211_scan_entry *VAR_5)
{
 const struct ieee80211_ie_htcap *VAR_6 =
     (const struct ieee80211_ie_htcap *) VAR_5->se_ies.htcap_ie;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12;

 VAR_7 = 0;
 if (VAR_6 != ((void*)0)) {




  VAR_12 = VAR_6->hc_mcsset[12];
  if (VAR_12 & 0x3) {





   VAR_10 = ((VAR_12 & 0xc) >> 2) + 1;
   VAR_9 = VAR_10 * 8 - 1;
  } else
   for (VAR_9 = 31; VAR_9 >= 0 && FUNC_0(VAR_6->hc_mcsset, VAR_9); VAR_9--);
  if (VAR_9 >= 0) {
   VAR_11 = FUNC_1(&VAR_6->hc_cap);
   if ((VAR_11 & VAR_0) &&
       (VAR_11 & VAR_2))
    VAR_7 = VAR_4[VAR_9].ht40_rate_400ns;
   else if (VAR_11 & VAR_0)
    VAR_7 = VAR_4[VAR_9].ht40_rate_800ns;
   else if (VAR_11 & VAR_1)
    VAR_7 = VAR_4[VAR_9].ht20_rate_400ns;
   else
    VAR_7 = VAR_4[VAR_9].ht20_rate_800ns;
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_5->se_rates[1]; VAR_9++) {
  VAR_8 = VAR_5->se_rates[2+VAR_9] & VAR_3;
  if (VAR_8 > VAR_7)
   VAR_7 = VAR_8;
 }
 for (VAR_9 = 0; VAR_9 < VAR_5->se_xrates[1]; VAR_9++) {
  VAR_8 = VAR_5->se_xrates[2+VAR_9] & VAR_3;
  if (VAR_8 > VAR_7)
   VAR_7 = VAR_8;
 }
 return VAR_7;
}
