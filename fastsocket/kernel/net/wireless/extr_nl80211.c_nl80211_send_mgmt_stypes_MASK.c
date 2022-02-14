
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_txrx_stypes {int tx; int rx; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_6,
    const struct ieee80211_txrx_stypes *VAR_7)
{
 u16 VAR_8;
 struct nlattr *VAR_9, *VAR_10;
 enum nl80211_iftype VAR_11;
 int VAR_12;

 if (!VAR_7)
  return 0;

 VAR_10 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_9 = FUNC_1(VAR_6, VAR_11);
  if (!VAR_9)
   return -VAR_0;
  VAR_12 = 0;
  VAR_8 = VAR_7[VAR_11].tx;
  while (VAR_8) {
   if ((VAR_8 & 1) &&
       FUNC_2(VAR_6, VAR_2,
     (VAR_12 << 4) | VAR_1))
    return -VAR_0;
   VAR_8 >>= 1;
   VAR_12++;
  }
  FUNC_0(VAR_6, VAR_9);
 }

 FUNC_0(VAR_6, VAR_10);

 VAR_10 = FUNC_1(VAR_6, VAR_3);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_9 = FUNC_1(VAR_6, VAR_11);
  if (!VAR_9)
   return -VAR_0;
  VAR_12 = 0;
  VAR_8 = VAR_7[VAR_11].rx;
  while (VAR_8) {
   if ((VAR_8 & 1) &&
       FUNC_2(VAR_6, VAR_2,
     (VAR_12 << 4) | VAR_1))
    return -VAR_0;
   VAR_8 >>= 1;
   VAR_12++;
  }
  FUNC_0(VAR_6, VAR_9);
 }
 FUNC_0(VAR_6, VAR_10);

 return 0;
}
