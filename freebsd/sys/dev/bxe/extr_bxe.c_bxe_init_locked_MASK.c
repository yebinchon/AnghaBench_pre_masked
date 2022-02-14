
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {scalar_t__ state; scalar_t__ recovery_state; int ifp; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (struct bxe_softc*,scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (struct bxe_softc*,int) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*,int ) ;
 int FUNC_10 (struct bxe_softc*,int) ;
 int FUNC_11 (struct bxe_softc*,int ) ;
 int FUNC_12 (struct bxe_softc*) ;
 scalar_t__ FUNC_13 (struct bxe_softc*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_16(struct bxe_softc *VAR_11)
{
    int VAR_12 = FUNC_5(VAR_11) ? 0 : 1;
    uint8_t VAR_13, VAR_14;
    uint8_t VAR_15 = VAR_5;
    int VAR_16;

    FUNC_3(VAR_11);


    if (FUNC_14(VAR_11->ifp) & VAR_6) {
        FUNC_0(VAR_11, VAR_3, "Init called while driver is running!\n");
        return (0);
    }

    if((VAR_11->state == VAR_2) &&
        (VAR_11->recovery_state == VAR_1)) {
        FUNC_1(VAR_11, "Initialization not done, "
                  "as previous recovery failed."
                  "Reboot/Power-cycle the system\n" );
        return (VAR_4);
    }


    FUNC_11(VAR_11, VAR_8);







    if (FUNC_4(VAR_11)) {
        VAR_13 = FUNC_7(VAR_11, VAR_12);
        VAR_14 = FUNC_7(VAR_11, FUNC_5(VAR_11));

        if (!FUNC_10(VAR_11, FUNC_5(VAR_11)) ||
            FUNC_6(VAR_11, &VAR_15, VAR_10)) {
            do {





                if (VAR_15) {
                    FUNC_12(VAR_11);
                }






                if ((!VAR_14 && (!VAR_15 || !VAR_13)) &&
                    FUNC_13(VAR_11) && !FUNC_8(VAR_11)) {
                    FUNC_2(VAR_11, "Recovered during init\n");
                    break;
                }


                FUNC_11(VAR_11, VAR_9);
                VAR_11->recovery_state = VAR_1;

                FUNC_1(VAR_11, "Recovery flow hasn't properly "
                          "completed yet, try again later. "
                          "If you still see this message after a "
                          "few retries then power cycle is required.\n");

                VAR_16 = VAR_4;
                goto bxe_init_locked_done;
            } while (0);
        }
    }

    VAR_11->recovery_state = VAR_0;

    VAR_16 = FUNC_9(VAR_11, VAR_7);

bxe_init_locked_done:

    if (VAR_16) {

        FUNC_1(VAR_11, "Initialization failed, "
                  "stack notified driver is NOT running!\n");
 FUNC_15(VAR_11->ifp, 0, VAR_6);
    }

    return (VAR_16);
}
