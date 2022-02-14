
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct age_softc {int age_tick_ch; int age_miibus; } ;


 int FUNC_0 (struct age_softc*) ;
 int FUNC_1 (struct age_softc*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct age_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct age_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct age_softc *)VAR_1;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_3(VAR_2->age_miibus);
 FUNC_4(VAR_3);
 FUNC_1(VAR_2);
 FUNC_2(&VAR_2->age_tick_ch, VAR_0, FUNC_5, VAR_2);
}
