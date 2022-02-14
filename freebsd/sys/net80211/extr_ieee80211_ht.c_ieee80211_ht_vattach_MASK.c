
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_amsdu_limit; int iv_htcaps; int* iv_ampdu_mintraffic; int iv_flags_ht; int iv_flags_ext; int iv_ampdu_rxmax; int iv_ampdu_limit; int iv_ampdu_density; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;

void
FUNC_0(struct ieee80211vap *VAR_33)
{


 VAR_33->iv_ampdu_rxmax = VAR_18;
 VAR_33->iv_ampdu_density = VAR_19;
 VAR_33->iv_ampdu_limit = VAR_33->iv_ampdu_rxmax;
 VAR_33->iv_amsdu_limit = VAR_33->iv_htcaps & VAR_17;

 VAR_33->iv_ampdu_mintraffic[VAR_30] = 128;
 VAR_33->iv_ampdu_mintraffic[VAR_29] = 64;
 VAR_33->iv_ampdu_mintraffic[VAR_32] = 32;
 VAR_33->iv_ampdu_mintraffic[VAR_31] = 32;

 if (VAR_33->iv_htcaps & VAR_26) {





  VAR_33->iv_flags_ht |= VAR_5
     | VAR_6
     ;
  if (VAR_33->iv_htcaps & VAR_21)
   VAR_33->iv_flags_ht |= VAR_10;

  if (VAR_33->iv_htcaps & VAR_15) {
   VAR_33->iv_flags_ht |= VAR_14;
   if (VAR_33->iv_htcaps & VAR_22)
    VAR_33->iv_flags_ht |= VAR_11;
  }

  if (VAR_33->iv_htcaps & VAR_27)
   VAR_33->iv_flags_ht |= VAR_9;


  VAR_33->iv_flags_ht |= VAR_1;
  if (VAR_33->iv_htcaps & VAR_24)
   VAR_33->iv_flags_ht |= VAR_2;
  VAR_33->iv_flags_ht |= VAR_3;
  if (VAR_33->iv_htcaps & VAR_25)
   VAR_33->iv_flags_ht |= VAR_4;

  if (VAR_33->iv_htcaps & VAR_23)
   VAR_33->iv_flags_ht |= VAR_13;
  if (VAR_33->iv_htcaps & VAR_20)
   VAR_33->iv_flags_ht |= VAR_12;

  if (VAR_33->iv_htcaps & VAR_16)
   VAR_33->iv_flags_ht |= VAR_7;
  if (VAR_33->iv_htcaps & VAR_28)
   VAR_33->iv_flags_ht |= VAR_8;
 }

 if (VAR_33->iv_flags_ext & VAR_0)
  VAR_33->iv_flags_ht &= ~VAR_5;
}
