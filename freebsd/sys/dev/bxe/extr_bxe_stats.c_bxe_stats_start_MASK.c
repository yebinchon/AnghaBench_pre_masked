
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pmf; } ;
struct bxe_softc {scalar_t__ func_stx; TYPE_1__ port; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_0)
{




    if (FUNC_0(VAR_0)) {
        return;
    }

    if (VAR_0->port.pmf) {
        FUNC_3(VAR_0);
    }

    else if (VAR_0->func_stx) {
        FUNC_1(VAR_0);
    }

    FUNC_2(VAR_0);
    FUNC_4(VAR_0);
}
