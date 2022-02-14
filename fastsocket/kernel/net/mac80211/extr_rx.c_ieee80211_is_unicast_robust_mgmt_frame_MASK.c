
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr {int addr1; } ;


 int FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0)
{
 struct ieee80211_hdr *VAR_1 = (struct ieee80211_hdr *) VAR_0->data;

 if (VAR_0->len < 24 || FUNC_1(VAR_1->addr1))
  return 0;

 return FUNC_0(VAR_1);
}
