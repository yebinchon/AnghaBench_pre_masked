
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_if_softc {int msk_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {struct msk_if_softc* if_softc; } ;


 int FUNC_0 (struct msk_if_softc*) ;
 int FUNC_1 (struct msk_if_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_0)
{
 struct msk_if_softc *VAR_1;
 struct mii_data *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->if_softc;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_1->msk_miibus);
 VAR_3 = FUNC_3(VAR_2);
 FUNC_1(VAR_1);

 return (VAR_3);
}
