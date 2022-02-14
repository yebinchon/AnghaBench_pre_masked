
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct cas_softc {int sc_mac_rxcfg; int sc_dev; struct ifnet* sc_ifp; } ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas_softc*,int,int,int) ;
 int FUNC_1 (struct cas_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct cas_softc*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct cas_softc*,int,int,int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ifnet*,int ,int**) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct cas_softc *VAR_13)
{
 struct ifnet *VAR_14 = VAR_13->sc_ifp;
 int VAR_15;
 uint32_t VAR_16[16];
 uint32_t VAR_17;

 FUNC_1(VAR_13, VAR_11);





 VAR_17 = VAR_13->sc_mac_rxcfg & ~(VAR_6 |
     VAR_5);
 FUNC_2(VAR_13, VAR_4, VAR_17);
 FUNC_0(VAR_13, VAR_4, 4,
     VAR_0 | VAR_1);
 if (!FUNC_3(VAR_13, VAR_4, VAR_6 |
     VAR_5, 0))
  FUNC_4(VAR_13->sc_dev,
      "cannot disable RX MAC or hash filter\n");

 VAR_17 &= ~(VAR_8 | VAR_7);
 if ((VAR_14->if_flags & VAR_10) != 0) {
  VAR_17 |= VAR_8;
  goto chipit;
 }
 if ((VAR_14->if_flags & VAR_9) != 0) {
  VAR_17 |= VAR_7;
  goto chipit;
 }
 FUNC_6(VAR_16, 0, sizeof(VAR_16));
 FUNC_5(VAR_14, VAR_12, &VAR_16);

 VAR_17 |= VAR_6;


 for (VAR_15 = 0; VAR_15 < 16; VAR_15++)
  FUNC_2(VAR_13,
      VAR_2 + VAR_15 * (VAR_3 - VAR_2),
      VAR_16[VAR_15]);

 chipit:
 VAR_13->sc_mac_rxcfg = VAR_17;
 FUNC_2(VAR_13, VAR_4, VAR_17 | VAR_5);
}
