
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_key {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_local *VAR_1,
        struct sk_buff *VAR_2,
        struct ieee80211_key *VAR_3)
{
 struct ieee80211_hdr *VAR_4 = (struct ieee80211_hdr *)VAR_2->data;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_4->frame_control);
 FUNC_1(VAR_2->data + VAR_0, VAR_2->data, VAR_5);
 FUNC_2(VAR_2, VAR_0);
}
