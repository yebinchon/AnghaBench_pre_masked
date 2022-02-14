
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req_fc_auto_adv; } ;
struct bxe_softc {int mtu; TYPE_1__ link_params; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_2)
{





    if (FUNC_0(VAR_2) && (VAR_2->mtu > 5000)) {
        VAR_2->link_params.req_fc_auto_adv = VAR_1;
    } else {
        VAR_2->link_params.req_fc_auto_adv = VAR_0;
    }
}
