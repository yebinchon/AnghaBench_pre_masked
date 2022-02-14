
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jme_softc {struct ifnet* jme_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct jme_softc*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct jme_softc *VAR_3)
{
 struct ifnet *VAR_4;
 uint32_t VAR_5;

 FUNC_2(VAR_3);

 VAR_4 = VAR_3->jme_ifp;
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_5 &= ~VAR_2;
 if ((VAR_4->if_capenable & VAR_0) != 0)
  VAR_5 |= VAR_2;
 FUNC_1(VAR_3, VAR_1, VAR_5);
}
