
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;
struct r92c_rx_stat {int rxdw4; int rxdw3; int rxdw1; int rxdw0; } ;
struct r12a_rx_phystat {int* cfosho; int phyw1; } ;
struct ieee80211_rx_stats {size_t c_rate; int r_flags; int c_ieee; int c_freq; int c_pktflags; int c_phytype; int c_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
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
 int FUNC_0 (int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;



 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_27 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 size_t* VAR_28 ;

void
FUNC_6(struct rtwn_softc *VAR_29, struct ieee80211_rx_stats *VAR_30,
    const void *VAR_31, const void *VAR_32)
{
 const struct r92c_rx_stat *VAR_33 = VAR_31;
 const struct r12a_rx_phystat *VAR_34 = VAR_32;
 uint32_t VAR_35, VAR_36, VAR_37, VAR_38;
 uint8_t VAR_39;

 VAR_35 = FUNC_5(VAR_33->rxdw0);
 VAR_36 = FUNC_5(VAR_33->rxdw1);
 VAR_37 = FUNC_5(VAR_33->rxdw3);
 VAR_38 = FUNC_5(VAR_33->rxdw4);
 VAR_39 = FUNC_0(VAR_37, VAR_22);


 if (VAR_38 & VAR_24)
  VAR_30->c_pktflags |= VAR_15;
 if (VAR_36 & VAR_21) {
  if (VAR_35 & VAR_26)
   VAR_30->c_pktflags |= VAR_11;
  else
   VAR_30->c_pktflags |= VAR_12;
 }

 if ((VAR_38 & VAR_25) && VAR_39 >= FUNC_2(0))
  VAR_30->c_pktflags |= VAR_17;

 switch (FUNC_0(VAR_38, VAR_23)) {
 case 130:
  VAR_30->c_width = VAR_8;
  break;
 case 129:
  VAR_30->c_width = VAR_9;
  break;
 case 128:
  VAR_30->c_width = VAR_10;
  break;
 default:
  break;
 }

 if (FUNC_1(VAR_39))
  VAR_30->c_phytype = VAR_4;
 else {
  int VAR_40;



  VAR_40 = (VAR_34->cfosho[2] != 0x01);

  if (VAR_39 < FUNC_2(0)) {
   if (VAR_40)
    VAR_30->c_phytype = VAR_3;
   else
    VAR_30->c_phytype = VAR_5;
  } else {
   if (VAR_40)
    VAR_30->c_phytype = VAR_6;
   else
    VAR_30->c_phytype = VAR_7;
  }
 }


 if (VAR_39 < FUNC_2(0)) {
  VAR_30->c_rate = VAR_28[VAR_39];
  if (FUNC_1(VAR_39))
   VAR_30->c_pktflags |= VAR_13;
  else
   VAR_30->c_pktflags |= VAR_16;
 } else {

  VAR_30->c_rate =
      VAR_2 | (VAR_39 - VAR_27);
  VAR_30->c_pktflags |= VAR_14;
 }
}
