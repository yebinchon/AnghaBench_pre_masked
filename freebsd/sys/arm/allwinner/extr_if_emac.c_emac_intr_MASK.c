
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_snd; } ;
struct emac_softc {struct ifnet* emac_ifp; int emac_rx_process_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct emac_softc*) ;
 int FUNC_1 (struct emac_softc*,int ) ;
 int FUNC_2 (struct emac_softc*) ;
 int FUNC_3 (struct emac_softc*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct emac_softc*,int ) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct emac_softc*,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct emac_softc *VAR_6;
 struct ifnet *VAR_7;
 uint32_t VAR_8;

 VAR_6 = (struct emac_softc *)VAR_5;
 FUNC_0(VAR_6);


 FUNC_3(VAR_6, VAR_0, 0);

 VAR_8 = FUNC_1(VAR_6, VAR_2);

 FUNC_3(VAR_6, VAR_2, VAR_8);


 if (VAR_8 & VAR_3)
  FUNC_5(VAR_6, VAR_6->emac_rx_process_limit);


 if (VAR_8 & VAR_4) {
  FUNC_7(VAR_6, VAR_8);
  VAR_7 = VAR_6->emac_ifp;
  if (!FUNC_4(&VAR_7->if_snd))
   FUNC_6(VAR_7);
 }


 VAR_8 = FUNC_1(VAR_6, VAR_0);
 VAR_8 |= VAR_1;
 FUNC_3(VAR_6, VAR_0, VAR_8);
 FUNC_2(VAR_6);
}
