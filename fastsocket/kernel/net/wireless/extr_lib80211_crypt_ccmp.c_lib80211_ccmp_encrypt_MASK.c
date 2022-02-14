
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int* data; } ;
struct lib80211_ccmp_data {int* tx_b0; int* tx_b; int* tx_e; int* tx_s0; int tfm; int tx_pn; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct ieee80211_hdr*,int ,int,int*,int*,int*) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (struct sk_buff*,int,int *,int ,void*) ;
 int* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3, int VAR_4, void *VAR_5)
{
 struct lib80211_ccmp_data *VAR_6 = VAR_5;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u8 *VAR_12, *VAR_13;
 struct ieee80211_hdr *VAR_14;
 u8 *VAR_15 = VAR_6->tx_b0;
 u8 *VAR_16 = VAR_6->tx_b;
 u8 *VAR_17 = VAR_6->tx_e;
 u8 *VAR_18 = VAR_6->tx_s0;

 if (FUNC_5(VAR_3) < VAR_2 || VAR_3->len < VAR_4)
  return -1;

 VAR_7 = VAR_3->len - VAR_4;
 VAR_11 = FUNC_3(VAR_3, VAR_4, ((void*)0), 0, VAR_5);
 if (VAR_11 < 0)
  return -1;

 VAR_12 = VAR_3->data + VAR_4 + VAR_1;
 VAR_14 = (struct ieee80211_hdr *)VAR_3->data;
 FUNC_1(VAR_6->tfm, VAR_14, VAR_6->tx_pn, VAR_7, VAR_15, VAR_16, VAR_18);

 VAR_9 = FUNC_0(VAR_7, VAR_0);
 VAR_10 = VAR_7 % VAR_0;

 for (VAR_8 = 1; VAR_8 <= VAR_9; VAR_8++) {
  VAR_11 = (VAR_8 == VAR_9 && VAR_10) ? VAR_10 : VAR_0;

  FUNC_6(VAR_16, VAR_12, VAR_11);
  FUNC_2(VAR_6->tfm, VAR_16, VAR_16);

  VAR_15[14] = (VAR_8 >> 8) & 0xff;
  VAR_15[15] = VAR_8 & 0xff;
  FUNC_2(VAR_6->tfm, VAR_15, VAR_17);
  FUNC_6(VAR_12, VAR_17, VAR_11);
  VAR_12 += VAR_11;
 }

 VAR_13 = FUNC_4(VAR_3, VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_13[VAR_8] = VAR_16[VAR_8] ^ VAR_18[VAR_8];

 return 0;
}
