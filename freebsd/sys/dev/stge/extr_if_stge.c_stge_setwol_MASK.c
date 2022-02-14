
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stge_softc {struct ifnet* sc_ifp; } ;
struct ifnet {int if_capenable; } ;


 int VAR_0 ;
 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ) ;
 int FUNC_2 (struct stge_softc*,int ,int) ;
 int FUNC_3 (struct stge_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct stge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(struct stge_softc *VAR_8)
{
 struct ifnet *VAR_9;
 uint8_t VAR_10;

 FUNC_4(VAR_8);

 VAR_9 = VAR_8->sc_ifp;
 VAR_10 = FUNC_0(VAR_8, VAR_3);

 VAR_10 &= ~(VAR_7 | VAR_5 | VAR_4 |
     VAR_6);
 if ((VAR_9->if_capenable & VAR_1) != 0)
  VAR_10 |= VAR_5 | VAR_6;
 FUNC_2(VAR_8, VAR_3, VAR_10);

 FUNC_3(VAR_8, VAR_2,
     FUNC_1(VAR_8, VAR_2) | VAR_0);




}
