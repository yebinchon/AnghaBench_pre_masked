
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_radiotap_iterator {int this_arg_index; int* this_arg; scalar_t__ _max_length; } ;
struct ieee80211_radiotap_header {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct ieee80211_radiotap_iterator*,struct ieee80211_radiotap_header*,scalar_t__,int *) ;
 int FUNC_3 (struct ieee80211_radiotap_iterator*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static bool FUNC_6(struct sk_buff *VAR_9)
{
 struct ieee80211_radiotap_iterator VAR_10;
 struct ieee80211_radiotap_header *VAR_11 =
  (struct ieee80211_radiotap_header *) VAR_9->data;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_9);
 int VAR_13 = FUNC_2(&VAR_10, VAR_11, VAR_9->len,
         ((void*)0));
 u16 VAR_14;

 VAR_12->flags |= VAR_8 |
         VAR_6;







 while (!VAR_13) {
  VAR_13 = FUNC_3(&VAR_10);

  if (VAR_13)
   continue;


  switch (VAR_10.this_arg_index) {






  case 129:
   if (*VAR_10.this_arg & VAR_2) {







    if (VAR_9->len < (VAR_10._max_length + VAR_1))
     return 0;

    FUNC_5(VAR_9, VAR_9->len - VAR_1);
   }
   if (*VAR_10.this_arg & VAR_5)
    VAR_12->flags &= ~VAR_8;
   if (*VAR_10.this_arg & VAR_3)
    VAR_12->flags &= ~VAR_6;
   break;

  case 128:
   VAR_14 = FUNC_1(VAR_10.this_arg);
   if (VAR_14 & VAR_4)
    VAR_12->flags |= VAR_7;
   break;







  default:
   break;
  }
 }

 if (VAR_13 != -VAR_0)
  return 0;






 FUNC_4(VAR_9, VAR_10._max_length);

 return 1;
}
