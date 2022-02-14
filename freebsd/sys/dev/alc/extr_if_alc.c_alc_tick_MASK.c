
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct alc_softc {int alc_tick_ch; int alc_miibus; } ;


 int FUNC_0 (struct alc_softc*) ;
 int FUNC_1 (struct alc_softc*) ;
 int FUNC_2 (struct alc_softc*) ;
 int FUNC_3 (struct alc_softc*) ;
 int FUNC_4 (int *,int ,void (*) (void*),struct alc_softc*) ;
 struct mii_data* FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct alc_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct alc_softc *)VAR_1;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_5(VAR_2->alc_miibus);
 FUNC_6(VAR_3);
 FUNC_1(VAR_2);







 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(&VAR_2->alc_tick_ch, VAR_0, FUNC_7, VAR_2);
}
