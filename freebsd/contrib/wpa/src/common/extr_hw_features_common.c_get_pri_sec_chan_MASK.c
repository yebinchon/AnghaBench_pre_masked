
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_scan_res {int ie_len; } ;
struct ieee802_11_elems {scalar_t__ ht_operation; } ;
struct ieee80211_ht_operation {int primary_chan; int ht_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct ieee802_11_elems*,int ) ;

void FUNC_1(struct wpa_scan_res *VAR_4, int *VAR_5, int *VAR_6)
{
 struct ieee80211_ht_operation *VAR_7;
 struct ieee802_11_elems VAR_8;

 *VAR_5 = *VAR_6 = 0;

 FUNC_0((u8 *) (VAR_4 + 1), VAR_4->ie_len, &VAR_8, 0);
 if (VAR_8.ht_operation) {
  VAR_7 = (struct ieee80211_ht_operation *) VAR_8.ht_operation;
  *VAR_5 = VAR_7->primary_chan;
  if (VAR_7->ht_param & VAR_3) {
   int VAR_9 = VAR_7->ht_param &
    VAR_2;
   if (VAR_9 == VAR_0)
    *VAR_6 = *VAR_5 + 4;
   else if (VAR_9 == VAR_1)
    *VAR_6 = *VAR_5 - 4;
  }
 }
}
