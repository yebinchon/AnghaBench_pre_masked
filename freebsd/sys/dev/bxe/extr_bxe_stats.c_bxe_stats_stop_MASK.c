
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bxe_softc {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_1)
{
    uint8_t VAR_2 = VAR_0;

    FUNC_4(VAR_1);

    if (VAR_1->port.pmf) {
        VAR_2 = FUNC_1(VAR_1) == 0;
    }

    VAR_2 |= FUNC_5(VAR_1) == 0;

    if (VAR_2) {
        FUNC_2(VAR_1);

        if (VAR_1->port.pmf) {
            FUNC_3(VAR_1);
        }

        FUNC_0(VAR_1);
        FUNC_4(VAR_1);
    }
}
