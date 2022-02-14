
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct sk_buff {int len; int const* data; } ;
struct ieee80211_local {int wep_tx_tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_0 (struct ieee80211_local*,struct sk_buff*,int,int) ;
 int FUNC_1 (int ,int const*,int,int const*,size_t) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;

int FUNC_4(struct ieee80211_local *VAR_3,
     struct sk_buff *VAR_4,
     const u8 *VAR_5, int VAR_6, int VAR_7)
{
 u8 *VAR_8;
 size_t VAR_9;
 u8 VAR_10[3 + VAR_2];

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7);
 if (!VAR_8)
  return -1;

 VAR_9 = VAR_4->len - (VAR_8 + VAR_1 - VAR_4->data);


 FUNC_2(VAR_10, VAR_8, 3);


 FUNC_2(VAR_10 + 3, VAR_5, VAR_6);


 FUNC_3(VAR_4, VAR_0);

 return FUNC_1(VAR_3->wep_tx_tfm, VAR_10, VAR_6 + 3,
       VAR_8 + VAR_1, VAR_9);
}
