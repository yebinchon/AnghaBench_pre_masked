
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

unsigned int FUNC_2(const struct sk_buff *VAR_0)
{
 const struct ieee80211_hdr *VAR_1 =
   (const struct ieee80211_hdr *)VAR_0->data;
 unsigned int VAR_2;

 if (FUNC_1(VAR_0->len < 10))
  return 0;
 VAR_2 = FUNC_0(VAR_1->frame_control);
 if (FUNC_1(VAR_2 > VAR_0->len))
  return 0;
 return VAR_2;
}
