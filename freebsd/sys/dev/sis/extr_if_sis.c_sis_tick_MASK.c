
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_softc {int sis_flags; int sis_stat_ch; int sis_dev; int sis_miibus; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sis_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct sis_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sis_softc*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct sis_softc *VAR_3;
 struct mii_data *VAR_4;

 VAR_3 = VAR_2;
 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_3->sis_miibus);
 FUNC_3(VAR_4);
 FUNC_5(VAR_3);
 if ((VAR_3->sis_flags & VAR_0) == 0)
  FUNC_4(VAR_3->sis_dev);
 FUNC_1(&VAR_3->sis_stat_ch, VAR_1, FUNC_6, VAR_3);
}
