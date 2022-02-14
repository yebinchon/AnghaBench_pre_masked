
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int tx_mcs_map; int rx_mcs_map; } ;
struct ieee80211vap {int iv_flags_vht; int iv_flags_ht; TYPE_1__ iv_vht_mcsinfo; int iv_vhtcaps; } ;
struct TYPE_5__ {int tx_mcs_map; } ;
struct ieee80211_node {TYPE_2__ ni_vht_mcsinfo; int ni_vhtcap; struct ieee80211vap* ni_vap; } ;
struct TYPE_6__ {int tx_mcs_map; scalar_t__ tx_highest; scalar_t__ rx_highest; int rx_mcs_map; } ;
struct ieee80211_ie_vhtcap {int len; int vht_cap_info; TYPE_3__ supp_mcs; int ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

void
FUNC_4(struct ieee80211_node *VAR_24,
    struct ieee80211_ie_vhtcap *VAR_25, int VAR_26)
{
 struct ieee80211vap *VAR_27 = VAR_24->ni_vap;

 uint32_t VAR_28, VAR_29, VAR_30;
 uint32_t VAR_31;
 int VAR_32;

 VAR_25->ie = VAR_0;
 VAR_25->len = sizeof(struct ieee80211_ie_vhtcap) - 2;





 VAR_31 = 0;
 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_8);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_8);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_8);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_17);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_17);
 }
 if ((VAR_30 == 2) &&
     ((VAR_27->iv_flags_vht & VAR_4) == 0))
  VAR_30 = 1;
 if ((VAR_30 == 1) &&
     ((VAR_27->iv_flags_vht & VAR_3) == 0))
  VAR_30 = 0;
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_17);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_11);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_11);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_11);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_15);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_15);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_15);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_14);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_14);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_14);
 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_20);
 if (VAR_26 == 1) {

  VAR_30 = !! FUNC_2(VAR_24->ni_vhtcap, VAR_12);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);

 if ((VAR_27->iv_flags_ht & VAR_2) == 0)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_20);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_12);
 if (VAR_26 == 1) {

  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_20);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);

 if ((VAR_27->iv_flags_ht & VAR_1) == 0)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_12);






 if (VAR_28 == 0)
  VAR_31 &= ~VAR_20;
 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_19);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_19);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_19);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_18);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_18);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_18);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_5);
 if (VAR_26 == 1) {
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_5);
 }
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 if ((VAR_31 & VAR_18) == 0)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_5);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_16);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_16);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 if ((VAR_31 & VAR_19) == 0)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_16);





 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_10);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_10);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 if ((VAR_31 & VAR_19) == 0)
  VAR_28 = 0;
 if (VAR_26 != 1)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_19);





 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_9);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_9);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 if ((VAR_31 & VAR_18) == 0)
  VAR_28 = 0;
 if (VAR_26 != 0)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_18);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_23);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_23);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_23);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_6);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_6);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_6);



 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_7);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_7);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_7);





 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps,
     VAR_22);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap,
      VAR_22);
 VAR_28 = FUNC_1(VAR_29, VAR_30);
 if ((VAR_31 & VAR_6) == 0)
  VAR_28 = 0;
 VAR_31 |= FUNC_3(VAR_28, VAR_22);







 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_13);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_13);
 VAR_28 = FUNC_0(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_13);


 VAR_30 = VAR_29 = FUNC_2(VAR_27->iv_vhtcaps, VAR_21);
 if (VAR_26 == 1)
  VAR_30 = FUNC_2(VAR_24->ni_vhtcap, VAR_21);
 VAR_28 = FUNC_0(VAR_29, VAR_30);
 VAR_31 |= FUNC_3(VAR_28, VAR_21);
 VAR_25->supp_mcs.rx_mcs_map = VAR_27->iv_vht_mcsinfo.rx_mcs_map;
 VAR_25->supp_mcs.rx_highest = 0;
 VAR_25->supp_mcs.tx_mcs_map = VAR_27->iv_vht_mcsinfo.tx_mcs_map;
 VAR_25->supp_mcs.tx_highest = 0;

 VAR_25->vht_cap_info = VAR_31;
 if (VAR_26) {
  for (VAR_32 = 0; VAR_32 < 8; VAR_32++) {
   VAR_29 = (VAR_25->supp_mcs.tx_mcs_map >> (VAR_32*2)) & 0x3;
   VAR_30 = (VAR_24->ni_vht_mcsinfo.tx_mcs_map >> (VAR_32*2)) & 0x3;
   VAR_28 = FUNC_1(VAR_29, VAR_30);
   if (VAR_29 == 3 || VAR_30 == 3)
    VAR_28 = 3;
   VAR_25->supp_mcs.tx_mcs_map &= ~(0x3 << (VAR_32*2));
   VAR_25->supp_mcs.tx_mcs_map |= (VAR_28 << (VAR_32*2));
  }
 }
}
