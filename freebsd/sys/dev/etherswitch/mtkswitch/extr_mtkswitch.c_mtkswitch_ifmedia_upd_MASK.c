
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtkswitch_softc {int dummy; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_dunit; struct mtkswitch_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_data*) ;
 struct mii_data* FUNC_1 (struct mtkswitch_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1)
{
 struct mtkswitch_softc *VAR_2 = VAR_1->if_softc;
 struct mii_data *VAR_3 = FUNC_1(VAR_2, VAR_1->if_dunit);

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_3);
 return (0);
}
