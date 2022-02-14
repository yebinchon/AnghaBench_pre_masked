
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct usb_ether {int dummy; } ;
struct muge_softc {int sc_rfe_ctl; scalar_t__** sc_pfilter_table; scalar_t__* sc_mchash_table; } ;
struct ifnet {int if_flags; } ;


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
 int FUNC_0 (struct muge_softc*,int ) ;
 size_t VAR_10 ;
 int FUNC_1 (struct ifnet*,int ,struct muge_softc*) ;
 int FUNC_2 (struct muge_softc*,int ,int) ;
 int FUNC_3 (struct muge_softc*,char*) ;
 int VAR_11 ;
 int FUNC_4 (struct muge_softc*) ;
 struct ifnet* FUNC_5 (struct usb_ether*) ;
 struct muge_softc* FUNC_6 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_12)
{
 struct muge_softc *VAR_13 = FUNC_6(VAR_12);
 struct ifnet *VAR_14 = FUNC_5(VAR_12);
 uint8_t VAR_15;

 FUNC_0(VAR_13, VAR_9);

 VAR_13->sc_rfe_ctl &= ~(VAR_6 | VAR_4 |
  VAR_3 | VAR_5);


 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  VAR_13->sc_mchash_table[VAR_15] = 0;


 for (VAR_15 = 1; VAR_15 < VAR_10; VAR_15++) {
  VAR_13->sc_pfilter_table[VAR_15][0] =
  VAR_13->sc_pfilter_table[VAR_15][1] = 0;
 }

 VAR_13->sc_rfe_ctl |= VAR_2;

 if (VAR_14->if_flags & VAR_8) {
  FUNC_3(VAR_13, "promiscuous mode enabled\n");
  VAR_13->sc_rfe_ctl |= VAR_4 | VAR_6;
 } else if (VAR_14->if_flags & VAR_7){
  FUNC_3(VAR_13, "receive all multicast enabled\n");
  VAR_13->sc_rfe_ctl |= VAR_4;
 } else {
  FUNC_1(VAR_14, VAR_11, VAR_13);
  FUNC_4(VAR_13);
 }
 FUNC_2(VAR_13, VAR_1, VAR_13->sc_rfe_ctl);
}
