
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_rx_status {int flag; int vendor_radiotap_align; scalar_t__ vendor_radiotap_len; } ;
struct ieee80211_radiotap_header {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ieee80211_rx_status*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_local *VAR_4,
       struct ieee80211_rx_status *VAR_5)
{
 int VAR_6;


 VAR_6 = sizeof(struct ieee80211_radiotap_header) + 9;


 if (VAR_5->vendor_radiotap_len)
  VAR_6 += 4;

 if (FUNC_2(VAR_5)) {
  VAR_6 = FUNC_0(VAR_6, 8);
  VAR_6 += 8;
 }
 if (VAR_4->hw.flags & VAR_0)
  VAR_6 += 1;


 VAR_6 = FUNC_0(VAR_6, 2);

 if (VAR_5->flag & VAR_2)
  VAR_6 += 3;

 if (VAR_5->flag & VAR_1) {
  VAR_6 = FUNC_0(VAR_6, 4);
  VAR_6 += 8;
 }

 if (VAR_5->flag & VAR_3) {
  VAR_6 = FUNC_0(VAR_6, 2);
  VAR_6 += 12;
 }

 if (VAR_5->vendor_radiotap_len) {
  if (FUNC_1(VAR_5->vendor_radiotap_align == 0))
   VAR_5->vendor_radiotap_align = 1;

  VAR_6 = FUNC_0(VAR_6, 2);

  VAR_6 += 6;

  VAR_6 = FUNC_0(VAR_6, VAR_5->vendor_radiotap_align);

 }

 return VAR_6;
}
