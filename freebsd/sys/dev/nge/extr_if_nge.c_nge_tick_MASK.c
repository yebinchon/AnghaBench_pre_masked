
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int nge_flags; int nge_stat_ch; int nge_dev; int nge_miibus; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nge_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct nge_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nge_softc*) ;
 int FUNC_6 (struct nge_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct nge_softc *VAR_3;
 struct mii_data *VAR_4;

 VAR_3 = VAR_2;
 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_3->nge_miibus);
 FUNC_3(VAR_4);







 if ((VAR_3->nge_flags & VAR_0) == 0)
  FUNC_4(VAR_3->nge_dev);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_1(&VAR_3->nge_stat_ch, VAR_1, FUNC_7, VAR_3);
}
