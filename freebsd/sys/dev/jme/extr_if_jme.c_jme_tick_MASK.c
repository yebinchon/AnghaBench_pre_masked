
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct jme_softc {int jme_tick_ch; int jme_miibus; } ;


 int FUNC_0 (struct jme_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct jme_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct jme_softc*) ;
 int FUNC_4 (struct jme_softc*) ;
 int FUNC_5 (struct jme_softc*) ;
 int FUNC_6 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct jme_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct jme_softc *)VAR_1;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_2(VAR_2->jme_miibus);
 FUNC_6(VAR_3);





 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(&VAR_2->jme_tick_ch, VAR_0, FUNC_7, VAR_2);
}
