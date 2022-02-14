
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;
struct r92c_rx_stat {int rxdw3; int rxdw1; } ;
struct ieee80211_rx_stats {size_t c_rate; int c_pktflags; int c_phytype; int c_width; } ;


 size_t VAR_0 ;
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
 size_t FUNC_0 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_17 ;
 int FUNC_3 (int ) ;
 size_t* VAR_18 ;

void
FUNC_4(struct rtwn_softc *VAR_19, struct ieee80211_rx_stats *VAR_20,
    const void *VAR_21, const void *VAR_22)
{
 const struct r92c_rx_stat *VAR_23 = VAR_21;
 uint32_t VAR_24, VAR_25;
 uint8_t VAR_26;

 VAR_24 = FUNC_3(VAR_23->rxdw1);
 VAR_25 = FUNC_3(VAR_23->rxdw3);
 VAR_26 = FUNC_0(VAR_25, VAR_15);

 if (VAR_24 & VAR_12)
  VAR_20->c_pktflags |= VAR_6;
 else if (VAR_24 & VAR_13)
  VAR_20->c_pktflags |= VAR_7;
 if ((VAR_25 & VAR_16) && VAR_26 >= FUNC_2(0))
  VAR_20->c_pktflags |= VAR_11;

 if (VAR_25 & VAR_14)
  VAR_20->c_width = VAR_5;
 else
  VAR_20->c_width = VAR_4;

 if (FUNC_1(VAR_26))
  VAR_20->c_phytype = VAR_1;
 else if (VAR_26 < FUNC_2(0))
  VAR_20->c_phytype = VAR_2;
 else
  VAR_20->c_phytype = VAR_3;


 if (VAR_26 < FUNC_2(0)) {
  VAR_20->c_rate = VAR_18[VAR_26];
  if (FUNC_1(VAR_26))
   VAR_20->c_pktflags |= VAR_8;
  else
   VAR_20->c_pktflags |= VAR_10;
 } else {
  VAR_20->c_rate =
      VAR_0 | (VAR_26 - VAR_17);
  VAR_20->c_pktflags |= VAR_9;
 }
}
