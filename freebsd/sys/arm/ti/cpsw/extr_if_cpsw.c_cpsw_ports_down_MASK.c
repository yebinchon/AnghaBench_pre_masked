
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_flags; } ;
struct cpswp_softc {struct ifnet* ifp; } ;
struct cpsw_softc {TYPE_1__* port; int dualemac; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct cpswp_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct cpsw_softc *VAR_1)
{
 struct cpswp_softc *VAR_2;
 struct ifnet *VAR_3, *VAR_4;

 if (!VAR_1->dualemac)
  return (1);
 VAR_2 = FUNC_0(VAR_1->port[0].dev);
 VAR_3 = VAR_2->ifp;
 VAR_2 = FUNC_0(VAR_1->port[1].dev);
 VAR_4 = VAR_2->ifp;
 if ((VAR_3->if_flags & VAR_0) == 0 && (VAR_4->if_flags & VAR_0) == 0)
  return (1);

 return (0);
}
