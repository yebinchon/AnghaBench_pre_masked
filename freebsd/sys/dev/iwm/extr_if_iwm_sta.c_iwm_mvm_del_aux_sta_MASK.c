
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sta_id; } ;
struct iwm_softc {TYPE_1__ sc_aux_sta; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(struct iwm_softc *VAR_1)
{
 FUNC_0(&VAR_1->sc_aux_sta, 0, sizeof(VAR_1->sc_aux_sta));
 VAR_1->sc_aux_sta.sta_id = VAR_0;
}
