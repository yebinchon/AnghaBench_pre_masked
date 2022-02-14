
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct ifnet {struct dme_softc* if_softc; } ;
struct dme_softc {int dme_miibus; } ;


 int FUNC_0 (struct dme_softc*) ;
 int FUNC_1 (struct dme_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_0)
{
 struct dme_softc *VAR_1;
 struct mii_data *VAR_2;

 VAR_1 = VAR_0->if_softc;
 VAR_2 = FUNC_2(VAR_1->dme_miibus);

 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
 FUNC_1(VAR_1);

 return (0);
}
