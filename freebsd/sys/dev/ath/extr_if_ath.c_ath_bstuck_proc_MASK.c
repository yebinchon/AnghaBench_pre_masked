
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int ast_bstuck; } ;
struct ath_softc {scalar_t__ sc_bmisscount; TYPE_1__ sc_stats; int sc_dev; int sc_alq; int sc_ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,scalar_t__*) ;
 int FUNC_1 (struct ath_softc*,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, int VAR_3)
{
 struct ath_softc *VAR_4 = VAR_2;
 uint32_t VAR_5 = 0;

 if (FUNC_0(VAR_4->sc_ah, 0xff, &VAR_5) && VAR_5 != 0)
  FUNC_2(VAR_4->sc_dev, "bb hang detected (0x%x)\n", VAR_5);






 FUNC_2(VAR_4->sc_dev, "stuck beacon; resetting (bmiss count %u)\n",
     VAR_4->sc_bmisscount);
 VAR_4->sc_stats.ast_bstuck++;




 FUNC_1(VAR_4, VAR_1);
}
