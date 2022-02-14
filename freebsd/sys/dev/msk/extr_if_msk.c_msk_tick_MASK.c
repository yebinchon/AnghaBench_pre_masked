
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_if_softc {int msk_flags; int msk_tick_ch; int msk_softc; int msk_if_dev; int msk_miibus; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msk_if_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct msk_if_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct msk_if_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct msk_if_softc *VAR_3;
 struct mii_data *VAR_4;

 VAR_3 = VAR_2;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_3->msk_miibus);

 FUNC_3(VAR_4);
 if ((VAR_3->msk_flags & VAR_0) == 0)
  FUNC_5(VAR_3->msk_if_dev);
 FUNC_4(VAR_3->msk_softc);
 FUNC_6(VAR_3);
 FUNC_1(&VAR_3->msk_tick_ch, VAR_1, FUNC_7, VAR_3);
}
