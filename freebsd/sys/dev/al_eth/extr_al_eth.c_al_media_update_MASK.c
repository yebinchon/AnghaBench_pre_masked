
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; struct al_eth_adapter* if_softc; } ;
struct al_eth_adapter {int mii; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_1)
{
 struct al_eth_adapter *VAR_2 = VAR_1->if_softc;

 if ((VAR_1->if_flags & VAR_0) != 0)
  FUNC_0(VAR_2->mii);

 return (0);
}
