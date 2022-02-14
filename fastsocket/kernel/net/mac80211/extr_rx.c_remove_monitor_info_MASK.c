
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct ieee80211_rx_status {scalar_t__ vendor_radiotap_len; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct ieee80211_local *VAR_2,
        struct sk_buff *VAR_3)
{
 struct ieee80211_rx_status *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->hw.flags & VAR_1) {
  if (FUNC_5(VAR_3->len > VAR_0))
   FUNC_3(VAR_3, VAR_3->len - VAR_0);
  else {

   FUNC_1(1);
   FUNC_4(VAR_3);
   return ((void*)0);
  }
 }

 if (VAR_4->vendor_radiotap_len)
  FUNC_2(VAR_3, VAR_4->vendor_radiotap_len);

 return VAR_3;
}
