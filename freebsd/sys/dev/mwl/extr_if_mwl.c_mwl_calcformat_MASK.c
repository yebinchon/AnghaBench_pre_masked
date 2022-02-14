
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ieee80211_node {int ni_htcap; int ni_capinfo; int ni_chan; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_15 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint16_t
FUNC_4(uint8_t VAR_16, const struct ieee80211_node *VAR_17)
{
 uint16_t VAR_18;

 VAR_18 = FUNC_2(3, VAR_0)
     | (FUNC_1(VAR_17->ni_chan) ?
  VAR_4 : VAR_3);
 if (VAR_16 & VAR_15) {
  VAR_18 |= VAR_5

      | FUNC_2(VAR_16, VAR_11);

  if (FUNC_0(VAR_17->ni_chan)) {
   VAR_18 |= VAR_2
       | (VAR_17->ni_htcap & VAR_14 ?
           VAR_8 : VAR_7);
  } else {
   VAR_18 |= VAR_1
       | (VAR_17->ni_htcap & VAR_13 ?
           VAR_8 : VAR_7);
  }
 } else {
  VAR_18 |= VAR_6
      | FUNC_2(FUNC_3(VAR_16), VAR_11)
      | VAR_1

      | (VAR_17->ni_capinfo & VAR_12 ?
   VAR_10 : VAR_9);
 }
 return VAR_18;
}
