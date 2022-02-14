
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_up; } ;
struct bxe_softc {struct bxe_fastpath* fp; TYPE_1__ link_vars; } ;
struct TYPE_4__ {int tx_queue_full_return; } ;
struct bxe_fastpath {TYPE_2__ eth_q_stats; } ;
typedef int if_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_fastpath*) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*,int ,struct bxe_fastpath*) ;
 int FUNC_4 (int ) ;
 struct bxe_softc* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(if_t VAR_2)
{
    struct bxe_softc *VAR_3;
    struct bxe_fastpath *VAR_4;

    VAR_3 = FUNC_5(VAR_2);

    if (!(FUNC_4(VAR_2) & VAR_1)) {
        FUNC_0(VAR_3, "Interface not running, ignoring transmit request\n");
        return;
    }

    if (!VAR_3->link_vars.link_up) {
        FUNC_0(VAR_3, "Interface link is down, ignoring transmit request\n");
        return;
    }

    VAR_4 = &VAR_3->fp[0];

    if (FUNC_4(VAR_2) & VAR_0) {
        VAR_4->eth_q_stats.tx_queue_full_return++;
        return;
    }

    FUNC_1(VAR_4);
    FUNC_3(VAR_3, VAR_2, VAR_4);
    FUNC_2(VAR_4);
}
