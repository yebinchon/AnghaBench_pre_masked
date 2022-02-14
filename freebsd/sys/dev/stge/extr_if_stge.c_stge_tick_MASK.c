
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stge_tx_cnt; } ;
struct stge_softc {int sc_tick_ch; TYPE_1__ sc_cdata; int sc_miibus; } ;
struct mii_data {int dummy; } ;


 int FUNC_0 (struct stge_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct stge_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (struct stge_softc*) ;
 int FUNC_5 (struct stge_softc*) ;
 int FUNC_6 (struct stge_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct stge_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct stge_softc *)VAR_1;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_2(VAR_2->sc_miibus);
 FUNC_3(VAR_3);


 FUNC_4(VAR_2);







 if (VAR_2->sc_cdata.stge_tx_cnt != 0)
  FUNC_5(VAR_2);

 FUNC_6(VAR_2);

 FUNC_1(&VAR_2->sc_tick_ch, VAR_0, FUNC_7, VAR_2);
}
