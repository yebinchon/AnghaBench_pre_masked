
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {size_t he_capab_len; int * he_capab; int flags; } ;
struct ieee80211_he_capabilities {int dummy; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
typedef enum ieee80211_op_mode { ____Placeholder_ieee80211_op_mode } ieee80211_op_mode ;
struct TYPE_2__ {int ieee80211ax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (int) ;

u16 FUNC_5(struct hostapd_data *VAR_3, struct sta_info *VAR_4,
        enum ieee80211_op_mode VAR_5, const u8 *VAR_6,
        size_t VAR_7)
{
 if (!VAR_6 || !VAR_3->iconf->ieee80211ax ||
     !FUNC_0(VAR_3, VAR_6, VAR_5) ||
     VAR_7 > sizeof(struct ieee80211_he_capabilities)) {
  VAR_4->flags &= ~VAR_2;
  FUNC_1(VAR_4->he_capab);
  VAR_4->he_capab = ((void*)0);
  return VAR_0;
 }

 if (!VAR_4->he_capab) {
  VAR_4->he_capab =
   FUNC_4(sizeof(struct ieee80211_he_capabilities));
  if (!VAR_4->he_capab)
   return VAR_1;
 }

 VAR_4->flags |= VAR_2;
 FUNC_3(VAR_4->he_capab, 0, sizeof(struct ieee80211_he_capabilities));
 FUNC_2(VAR_4->he_capab, VAR_6, VAR_7);
 VAR_4->he_capab_len = VAR_7;

 return VAR_0;
}
