
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct bfe_softc {int bfe_stat_co; int bfe_miibus; } ;


 int FUNC_0 (struct bfe_softc*) ;
 int FUNC_1 (struct bfe_softc*) ;
 int FUNC_2 (struct bfe_softc*) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct bfe_softc*) ;
 struct mii_data* FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct bfe_softc *VAR_2 = VAR_1;
 struct mii_data *VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_4(VAR_2->bfe_miibus);
 FUNC_5(VAR_3);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_3(&VAR_2->bfe_stat_co, VAR_0, FUNC_6, VAR_2);
}
