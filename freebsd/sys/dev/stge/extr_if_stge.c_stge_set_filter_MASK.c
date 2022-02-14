
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct stge_softc {struct ifnet* sc_ifp; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct stge_softc*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct stge_softc *VAR_6)
{
 struct ifnet *VAR_7;
 uint16_t VAR_8;

 FUNC_2(VAR_6);

 VAR_7 = VAR_6->sc_ifp;

 VAR_8 = FUNC_0(VAR_6, VAR_5);
 VAR_8 |= VAR_4;
 if ((VAR_7->if_flags & VAR_0) != 0)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;
 if ((VAR_7->if_flags & VAR_1) != 0)
  VAR_8 |= VAR_2;
 else
  VAR_8 &= ~VAR_2;

 FUNC_1(VAR_6, VAR_5, VAR_8);
}
