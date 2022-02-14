
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct dme_softc {int dme_tick_ch; int dme_miibus; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct dme_softc*) ;
 struct mii_data* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct dme_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct dme_softc *)VAR_1;


 VAR_3 = FUNC_1(VAR_2->dme_miibus);
 FUNC_2(VAR_3);

 FUNC_0(&VAR_2->dme_tick_ch, VAR_0, FUNC_3, VAR_2);
}
