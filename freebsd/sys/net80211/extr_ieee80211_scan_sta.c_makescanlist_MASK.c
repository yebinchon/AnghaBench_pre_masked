
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scanlist {int mode; int count; int * list; } ;
struct ieee80211vap {int const iv_des_mode; int iv_flags; } ;
struct ieee80211_scan_state {scalar_t__ ss_last; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 int VAR_0 ;


 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ieee80211vap*,struct ieee80211_scan_state*,int,int *,int ) ;
 int FUNC_1 (struct ieee80211_scan_state*,struct ieee80211vap*,struct scanlist const*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_scan_state *VAR_10, struct ieee80211vap *VAR_11,
 const struct scanlist VAR_12[])
{
 const struct scanlist *VAR_13;
 enum ieee80211_phymode VAR_14;

 VAR_10->ss_last = 0;





 for (VAR_13 = VAR_12; VAR_13->list != ((void*)0); VAR_13++) {
  VAR_14 = VAR_13->mode;

  switch (VAR_14) {
  case 128:
   if (VAR_11->iv_des_mode == 128)
    break;
   if (VAR_11->iv_des_mode == VAR_4 ||
       VAR_11->iv_des_mode == VAR_1 ||
       VAR_11->iv_des_mode == VAR_3 ||
       VAR_11->iv_des_mode == VAR_8) {
    VAR_14 = VAR_11->iv_des_mode;
    break;
   }

   continue;
  case 129:

   if (VAR_11->iv_des_mode == VAR_2 ||
       VAR_11->iv_des_mode == VAR_9) {
    VAR_14 = VAR_11->iv_des_mode;
    break;
   }


  default:




   if (VAR_11->iv_des_mode != VAR_4 &&
       VAR_11->iv_des_mode != VAR_14)
    continue;
  }
  FUNC_0(VAR_11, VAR_10, VAR_14, VAR_13->list, VAR_13->count);
 }





 FUNC_1(VAR_10, VAR_11, VAR_12);
}
