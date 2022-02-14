
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {scalar_t__ ic_sta_assoc; scalar_t__ ic_ht_sta_assoc; int ic_flags_ht; scalar_t__ ic_bsschan; scalar_t__ ic_ht40_sta_assoc; int ic_curhtprotmode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_7)
{
 uint8_t VAR_8;

 if (VAR_7->ic_sta_assoc != VAR_7->ic_ht_sta_assoc) {
  VAR_8 = VAR_4
    | VAR_2;
 } else if (VAR_7->ic_flags_ht & VAR_1) {
  VAR_8 = VAR_5
    | VAR_2;
 } else if (VAR_7->ic_bsschan != VAR_0 &&
     FUNC_0(VAR_7->ic_bsschan) &&
     VAR_7->ic_sta_assoc != VAR_7->ic_ht40_sta_assoc) {
  VAR_8 = VAR_3;
 } else {
  VAR_8 = VAR_6;
 }
 if (VAR_8 != VAR_7->ic_curhtprotmode) {
  VAR_7->ic_curhtprotmode = VAR_8;
  FUNC_1(VAR_7);
 }
}
