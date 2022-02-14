
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stge_softc {scalar_t__ sc_suspended; struct ifnet* sc_ifp; } ;
struct ifnet {int if_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct stge_softc*) ;
 int FUNC_3 (struct stge_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct stge_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct stge_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 struct stge_softc *VAR_7;
 struct ifnet *VAR_8;
 uint8_t VAR_9;

 VAR_7 = FUNC_4(VAR_6);

 FUNC_2(VAR_7);




 VAR_9 = FUNC_0(VAR_7, VAR_1);
 VAR_9 &= ~(VAR_5 | VAR_3 | VAR_2 |
     VAR_4);
 FUNC_1(VAR_7, VAR_1, VAR_9);
 VAR_8 = VAR_7->sc_ifp;
 if (VAR_8->if_flags & VAR_0)
  FUNC_5(VAR_7);

 VAR_7->sc_suspended = 0;
 FUNC_3(VAR_7);

 return (0);
}
