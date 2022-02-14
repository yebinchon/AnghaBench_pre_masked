
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ath_softc {int sc_ah; } ;
struct TYPE_4__ {scalar_t__ pe_enabled; } ;
typedef TYPE_1__ HAL_PHYERR_PARAM ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

int
FUNC_2(struct ath_softc *VAR_0)
{

 HAL_PHYERR_PARAM VAR_1;

 (void) FUNC_1(VAR_0->sc_ah, &VAR_1);
 VAR_1.pe_enabled = 0;
 (void) FUNC_0(VAR_0->sc_ah, &VAR_1);
 return (0);



}
