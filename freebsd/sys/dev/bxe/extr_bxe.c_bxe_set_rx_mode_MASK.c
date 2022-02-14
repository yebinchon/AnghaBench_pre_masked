
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {scalar_t__ state; int sp_state; int rx_mode; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct bxe_softc *VAR_11)
{
    if_t VAR_12 = VAR_11->ifp;
    uint32_t VAR_13 = VAR_2;

    if (VAR_11->state != VAR_4) {
        FUNC_0(VAR_11, VAR_6, "state is %x, returning\n", VAR_11->state);
        return;
    }

    FUNC_0(VAR_11, VAR_6, "if_flags(ifp)=0x%x\n", FUNC_9(VAR_11->ifp));

    if (FUNC_9(VAR_12) & VAR_10) {
        VAR_13 = VAR_3;
    } else if ((FUNC_9(VAR_12) & VAR_9) ||
               ((FUNC_8(VAR_12) > VAR_0) &&
                FUNC_1(VAR_11))) {
        VAR_13 = VAR_1;
    } else {
        if (FUNC_2(VAR_11)) {

            if (FUNC_4(VAR_11) < 0) {
                VAR_13 = VAR_1;
            }
            if (FUNC_6(VAR_11) < 0) {
                VAR_13 = VAR_3;
            }
        }
    }

    VAR_11->rx_mode = VAR_13;


    if (FUNC_7(VAR_7, &VAR_11->sp_state)) {
        FUNC_0(VAR_11, VAR_5, "Scheduled setting rx_mode with ECORE...\n");
        FUNC_3(VAR_8, &VAR_11->sp_state);
        return;
    }

    if (FUNC_2(VAR_11)) {
        FUNC_5(VAR_11);
    }
}
