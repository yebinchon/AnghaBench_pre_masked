
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lib80211_ccmp_data {int * tx_pn; int key; int key_set; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int VAR_2, u8 * VAR_3, void *VAR_4)
{
 struct lib80211_ccmp_data *VAR_5 = VAR_4;

 if (VAR_2 < VAR_0)
  return -1;

 if (!VAR_5->key_set)
  return 0;
 FUNC_0(VAR_1, VAR_5->key, VAR_0);

 if (VAR_3) {
  VAR_3[0] = VAR_5->tx_pn[5];
  VAR_3[1] = VAR_5->tx_pn[4];
  VAR_3[2] = VAR_5->tx_pn[3];
  VAR_3[3] = VAR_5->tx_pn[2];
  VAR_3[4] = VAR_5->tx_pn[1];
  VAR_3[5] = VAR_5->tx_pn[0];
 }

 return VAR_0;
}
