
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_up; } ;
struct bxe_softc {scalar_t__ recovery_state; scalar_t__ state; scalar_t__ error_status; int unit; int ifp; TYPE_1__ link_vars; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct bxe_softc * VAR_4)
{

    if(VAR_4->recovery_state == VAR_1) {
        return;
    }
    if(VAR_4->error_status) {
        if (VAR_4->state == VAR_2) {
            FUNC_1(VAR_4);
        }
        if (VAR_4->link_vars.link_up) {
            FUNC_3(VAR_4->ifp, VAR_3);
        }
        VAR_4->recovery_state = VAR_0;
        FUNC_0(VAR_4, "bxe%d: Recovery started errors 0x%x recovery state 0x%x\n",
            VAR_4->unit, VAR_4->error_status, VAR_4->recovery_state);
        FUNC_2(VAR_4);
   }
}
