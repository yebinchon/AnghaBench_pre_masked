
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sge_softc {struct ifnet* sge_ifp; } ;
struct ifnet {int if_capabilities; int if_capenable; } ;


 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sge_softc*) ;

__attribute__((used)) static void
FUNC_3(struct sge_softc *VAR_3)
{
 struct ifnet *VAR_4;
 uint16_t VAR_5;

 FUNC_2(VAR_3);

 VAR_4 = VAR_3->sge_ifp;
 if ((VAR_4->if_capabilities & VAR_0) == 0)
  return;
 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if ((VAR_4->if_capenable & VAR_0) != 0)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_2, VAR_5);
}
