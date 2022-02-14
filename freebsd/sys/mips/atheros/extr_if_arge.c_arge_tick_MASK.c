
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct arge_softc {int arge_stat_callout; scalar_t__ arge_miibus; } ;


 int FUNC_0 (struct arge_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct arge_softc*) ;
 struct mii_data* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct arge_softc *VAR_2 = VAR_1;
 struct mii_data *VAR_3;

 FUNC_0(VAR_2);

 if (VAR_2->arge_miibus) {
  VAR_3 = FUNC_2(VAR_2->arge_miibus);
  FUNC_3(VAR_3);
  FUNC_1(&VAR_2->arge_stat_callout, VAR_0, FUNC_4, VAR_2);
 }
}
