
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; scalar_t__ len; } ;
struct ieee80211_rx_status {scalar_t__ vendor_radiotap_len; int flag; } ;
struct ieee80211_hdr {int frame_control; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct sk_buff *VAR_3, int VAR_4)
{
 struct ieee80211_rx_status *VAR_5 = FUNC_0(VAR_3);
 struct ieee80211_hdr *VAR_6;

 VAR_6 = (void *)(VAR_3->data + VAR_5->vendor_radiotap_len);

 if (VAR_5->flag & (VAR_1 |
       VAR_2 |
       VAR_0))
  return 1;
 if (FUNC_4(VAR_3->len < 16 + VAR_4 +
    VAR_5->vendor_radiotap_len))
  return 1;
 if (FUNC_2(VAR_6->frame_control) &&
     !FUNC_3(VAR_6->frame_control) &&
     !FUNC_1(VAR_6->frame_control))
  return 1;
 return 0;
}
