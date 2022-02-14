
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stge_softc {struct ifnet* sc_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct stge_softc *VAR_4)
{
 struct ifnet *VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_4->sc_ifp;
 VAR_6 = FUNC_0(VAR_4, VAR_3) & VAR_2;
 if ((VAR_5->if_capenable & VAR_0) != 0)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_3, VAR_6);
}
