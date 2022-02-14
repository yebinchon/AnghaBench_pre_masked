
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scc_bas {int dummy; } ;
struct scc_softc {int sc_hwmtx; struct scc_chan* sc_chan; struct scc_bas sc_bas; } ;
struct scc_chan {int ch_ipend; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scc_bas*) ;
 int FUNC_3 (struct scc_bas*,scalar_t__) ;
 int FUNC_4 (struct scc_bas*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct scc_softc *VAR_21)
{
 struct scc_bas *VAR_22;
 struct scc_chan *VAR_23;
 int VAR_24;
 int VAR_25, VAR_26;
 uint8_t VAR_27, VAR_28;

 VAR_22 = &VAR_21->sc_bas;
 VAR_24 = 0;
 for (VAR_25 = 0; VAR_25 < VAR_13; VAR_25++) {
  VAR_23 = &VAR_21->sc_chan[VAR_25];
  VAR_26 = VAR_25 * VAR_0;
  FUNC_0(&VAR_21->sc_hwmtx);
  VAR_27 = FUNC_3(VAR_22, VAR_26 + VAR_3);
  VAR_28 = FUNC_3(VAR_22, VAR_26 + VAR_9);
  FUNC_2(VAR_22);
  if (VAR_27 & VAR_8) {
   while (FUNC_3(VAR_22, VAR_26 + VAR_14) & VAR_15)
    ;
   FUNC_4(VAR_22, VAR_26 + VAR_1, VAR_2);
   FUNC_2(VAR_22);
  }
  FUNC_1(&VAR_21->sc_hwmtx);

  VAR_23->ch_ipend = 0;
  if (VAR_28 & VAR_11)
   VAR_23->ch_ipend |= VAR_16;
  if (VAR_27 & VAR_5)
   VAR_23->ch_ipend |= VAR_17;
  if (VAR_27 & (VAR_7|VAR_6))
   VAR_23->ch_ipend |= VAR_18;
  if ((VAR_27 & VAR_4) || (VAR_28 & VAR_12))
   VAR_23->ch_ipend |= VAR_19;
  if (VAR_28 & VAR_10)
   VAR_23->ch_ipend |= VAR_20;
  VAR_24 |= VAR_23->ch_ipend;
 }
 return (VAR_24);
}
