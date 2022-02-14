
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_stat_ch; int nfe_miibus; int nfe_ifp; } ;
struct mii_data {int dummy; } ;
typedef int if_t ;


 int FUNC_0 (struct nfe_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct nfe_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (struct nfe_softc*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(void *VAR_1)
{
 struct nfe_softc *VAR_2;
 struct mii_data *VAR_3;
 if_t VAR_4;

 VAR_2 = (struct nfe_softc *)VAR_1;

 FUNC_0(VAR_2);

 VAR_4 = VAR_2->nfe_ifp;

 VAR_3 = FUNC_2(VAR_2->nfe_miibus);
 FUNC_3(VAR_3);
 FUNC_4(VAR_2);
 FUNC_5(VAR_4);
 FUNC_1(&VAR_2->nfe_stat_ch, VAR_0, FUNC_6, VAR_2);
}
