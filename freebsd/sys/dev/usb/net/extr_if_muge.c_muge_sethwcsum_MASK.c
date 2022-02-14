
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct muge_softc {int sc_rfe_ctl; int sc_ue; } ;
struct ifnet {int if_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int FUNC_1 (struct muge_softc*,int ,int) ;
 int FUNC_2 (struct muge_softc*,char*,int) ;
 struct ifnet* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct muge_softc *VAR_9)
{
 struct ifnet *VAR_10 = FUNC_3(&VAR_9->sc_ue);
 int VAR_11;

 if (!VAR_10)
  return (-VAR_0);

 FUNC_0(VAR_9, VAR_8);

 if (VAR_10->if_capabilities & VAR_7) {
  VAR_9->sc_rfe_ctl |= VAR_3 | VAR_2;
  VAR_9->sc_rfe_ctl |= VAR_5 | VAR_4;
 } else {
  VAR_9->sc_rfe_ctl &=
      ~(VAR_3 | VAR_2);
  VAR_9->sc_rfe_ctl &=
       ~(VAR_5 | VAR_4);
 }

 VAR_9->sc_rfe_ctl &= ~VAR_6;

 VAR_11 = FUNC_1(VAR_9, VAR_1, VAR_9->sc_rfe_ctl);

 if (VAR_11 != 0) {
  FUNC_2(VAR_9, "failed to write ETH_RFE_CTL (err=%d)\n",
      VAR_11);
  return (VAR_11);
 }

 return (0);
}
