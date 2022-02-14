
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scc_bas {int dummy; } ;
struct scc_softc {int sc_hwmtx; struct scc_chan* sc_chan; struct scc_bas sc_bas; } ;
struct scc_chan {int ch_ipend; int ch_hwsig; } ;


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
 int FUNC_0 (int,int,int ,int ) ;
 int VAR_27 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scc_bas*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct scc_softc *VAR_28)
{
 struct scc_bas *VAR_29;
 struct scc_chan *VAR_30[2];
 uint32_t VAR_31;
 uint8_t VAR_32, VAR_33, VAR_34;

 VAR_29 = &VAR_28->sc_bas;
 VAR_30[0] = &VAR_28->sc_chan[0];
 VAR_30[1] = &VAR_28->sc_chan[1];
 VAR_30[0]->ch_ipend = 0;
 VAR_30[1]->ch_ipend = 0;

 FUNC_1(&VAR_28->sc_hwmtx);
 VAR_33 = FUNC_3(VAR_29, VAR_4, VAR_13);
 if (VAR_33 & VAR_7)
  VAR_30[0]->ch_ipend |= VAR_23;
 if (VAR_33 & VAR_8)
  VAR_30[1]->ch_ipend |= VAR_23;
 if (VAR_33 & VAR_11)
  VAR_30[0]->ch_ipend |= VAR_25;
 if (VAR_33 & VAR_12)
  VAR_30[1]->ch_ipend |= VAR_25;
 if (VAR_33 & VAR_9) {
  VAR_32 = FUNC_3(VAR_29, VAR_4, VAR_6);
  if (VAR_32 & VAR_0)
   VAR_30[0]->ch_ipend |= VAR_21;
  VAR_31 = VAR_30[0]->ch_hwsig;
  FUNC_0(VAR_32 & VAR_1, VAR_31, VAR_15, VAR_17);
  FUNC_0(VAR_32 & VAR_2, VAR_31, VAR_16, VAR_18);
  FUNC_0(VAR_32 & VAR_3, VAR_31, VAR_20, VAR_19);
  if (VAR_31 & VAR_26) {
   VAR_30[0]->ch_hwsig = VAR_31;
   VAR_30[0]->ch_ipend |= VAR_24;
  }
  VAR_34 = FUNC_3(VAR_29, VAR_4, VAR_14);
  if (VAR_34 & VAR_27)
   VAR_30[0]->ch_ipend |= VAR_22;
 }
 if (VAR_33 & VAR_10) {
  VAR_32 = FUNC_3(VAR_29, VAR_5, VAR_6);
  if (VAR_32 & VAR_0)
   VAR_30[1]->ch_ipend |= VAR_21;
  VAR_31 = VAR_30[1]->ch_hwsig;
  FUNC_0(VAR_32 & VAR_1, VAR_31, VAR_15, VAR_17);
  FUNC_0(VAR_32 & VAR_2, VAR_31, VAR_16, VAR_18);
  FUNC_0(VAR_32 & VAR_3, VAR_31, VAR_20, VAR_19);
  if (VAR_31 & VAR_26) {
   VAR_30[1]->ch_hwsig = VAR_31;
   VAR_30[1]->ch_ipend |= VAR_24;
  }
  VAR_34 = FUNC_3(VAR_29, VAR_5, VAR_14);
  if (VAR_34 & VAR_27)
   VAR_30[1]->ch_ipend |= VAR_22;
 }
 FUNC_2(&VAR_28->sc_hwmtx);

 return (VAR_30[0]->ch_ipend | VAR_30[1]->ch_ipend);
}
