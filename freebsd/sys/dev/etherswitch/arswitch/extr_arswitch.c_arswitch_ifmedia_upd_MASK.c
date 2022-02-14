
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct ifnet {int if_dunit; struct arswitch_softc* if_softc; } ;
struct arswitch_softc {int dummy; } ;


 int VAR_0 ;
 struct mii_data* FUNC_0 (struct arswitch_softc*,int ) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1)
{
 struct arswitch_softc *VAR_2 = VAR_1->if_softc;
 struct mii_data *VAR_3 = FUNC_0(VAR_2, VAR_1->if_dunit);

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_3);
 return (0);
}
