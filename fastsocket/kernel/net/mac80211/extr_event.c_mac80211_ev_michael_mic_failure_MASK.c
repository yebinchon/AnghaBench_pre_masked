
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_sub_if_data {int dev; } ;
struct ieee80211_hdr {int* addr1; int addr2; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int const*,int ) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_2, int VAR_3,
         struct ieee80211_hdr *VAR_4, const u8 *VAR_5,
         gfp_t VAR_6)
{
 FUNC_0(VAR_2->dev, VAR_4->addr2,
         (VAR_4->addr1[0] & 0x01) ?
         VAR_0 :
         VAR_1,
         VAR_3, VAR_5, VAR_6);
}
