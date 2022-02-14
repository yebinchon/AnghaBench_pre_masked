
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_miibus; } ;
struct mii_data {int dummy; } ;
typedef int if_t ;


 int FUNC_0 (struct nfe_softc*) ;
 int FUNC_1 (struct nfe_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 struct nfe_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_5(if_t VAR_0)
{
 struct nfe_softc *VAR_1 = FUNC_3(VAR_0);
 struct mii_data *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_1->nfe_miibus);
 FUNC_4(VAR_2);
 FUNC_1(VAR_1);

 return (0);
}
