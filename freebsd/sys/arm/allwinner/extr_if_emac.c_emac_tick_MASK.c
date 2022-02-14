
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct emac_softc {int emac_tick_ch; int emac_miibus; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct emac_softc*) ;
 struct mii_data* FUNC_1 (int ) ;
 int FUNC_2 (struct emac_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct emac_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct emac_softc *)VAR_1;
 VAR_3 = FUNC_1(VAR_2->emac_miibus);
 FUNC_3(VAR_3);

 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->emac_tick_ch, VAR_0, FUNC_4, VAR_2);
}
