
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ht_capabilities {int ht_capabilities_info; } ;
typedef int le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(struct ieee80211_ht_capabilities *VAR_2,
        int VAR_3)
{

 le16 VAR_4 = FUNC_0(VAR_1 |
    VAR_0);

 if (VAR_3)
  VAR_2->ht_capabilities_info &= ~VAR_4;
 else
  VAR_2->ht_capabilities_info |= VAR_4;
}
