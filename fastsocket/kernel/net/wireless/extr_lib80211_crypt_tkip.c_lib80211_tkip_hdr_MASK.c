
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct lib80211_tkip_data {int tx_phase1_done; int tx_iv32; scalar_t__ tx_iv16; int key_idx; int tx_ttak; int key; } ;
struct ieee80211_hdr {int addr2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void**,void**,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 void** FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (void**,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, int VAR_2,
         u8 * VAR_3, int VAR_4, void *VAR_5)
{
 struct lib80211_tkip_data *VAR_6 = VAR_5;
 u8 *VAR_7;
 struct ieee80211_hdr *VAR_8;

 VAR_8 = (struct ieee80211_hdr *)VAR_1->data;

 if (FUNC_1(VAR_1) < VAR_0 || VAR_1->len < VAR_2)
  return -1;

 if (VAR_3 == ((void*)0) || VAR_4 < 16)
  return -1;

 if (!VAR_6->tx_phase1_done) {
  FUNC_3(VAR_6->tx_ttak, VAR_6->key, VAR_8->addr2,
       VAR_6->tx_iv32);
  VAR_6->tx_phase1_done = 1;
 }
 FUNC_4(VAR_3, VAR_6->key, VAR_6->tx_ttak, VAR_6->tx_iv16);

 VAR_7 = FUNC_2(VAR_1, VAR_0);
 FUNC_0(VAR_7, VAR_7 + VAR_0, VAR_2);
 VAR_7 += VAR_2;

 *VAR_7++ = *VAR_3;
 *VAR_7++ = *(VAR_3 + 1);
 *VAR_7++ = *(VAR_3 + 2);
 *VAR_7++ = (VAR_6->key_idx << 6) | (1 << 5) ;
 *VAR_7++ = VAR_6->tx_iv32 & 0xff;
 *VAR_7++ = (VAR_6->tx_iv32 >> 8) & 0xff;
 *VAR_7++ = (VAR_6->tx_iv32 >> 16) & 0xff;
 *VAR_7++ = (VAR_6->tx_iv32 >> 24) & 0xff;

 VAR_6->tx_iv16++;
 if (VAR_6->tx_iv16 == 0) {
  VAR_6->tx_phase1_done = 0;
  VAR_6->tx_iv32++;
 }

 return VAR_0;
}
