
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct bxe_softc {scalar_t__ is_leader; } ;


 int FUNC_0 (struct bxe_softc*,char*,...) ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*,int ,int ) ;
 scalar_t__ FUNC_5 (struct bxe_softc*,scalar_t__) ;
 int FUNC_6 (struct bxe_softc*) ;
 scalar_t__ FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct bxe_softc *VAR_7)
{
    int VAR_8 = 0;
    uint8_t VAR_9 = FUNC_7(VAR_7);
    uint32_t VAR_10;





    if (!VAR_9 && !FUNC_1(VAR_7)) {
        VAR_10 = FUNC_4(VAR_7, VAR_1,
                                   VAR_2);
        if (!VAR_10) {
            FUNC_0(VAR_7, "MCP response failure, aborting\n");
            VAR_8 = -1;
            goto exit_leader_reset;
        }

        if ((VAR_10 != VAR_6) &&
            (VAR_10 != VAR_5)) {
            FUNC_0(VAR_7, "MCP unexpected response, aborting\n");
            VAR_8 = -1;
            goto exit_leader_reset2;
        }

        VAR_10 = FUNC_4(VAR_7, VAR_0, 0);
        if (!VAR_10) {
            FUNC_0(VAR_7, "MCP response failure, aborting\n");
            VAR_8 = -1;
            goto exit_leader_reset2;
        }
    }


    if (FUNC_5(VAR_7, VAR_9)) {
        FUNC_0(VAR_7, "Something bad occurred on engine %d!\n", FUNC_2(VAR_7));
        VAR_8 = -1;
        goto exit_leader_reset2;
    }





    FUNC_8(VAR_7);
    if (VAR_9) {
        FUNC_3(VAR_7);
    }

exit_leader_reset2:


    if (!VAR_9 && !FUNC_1(VAR_7)) {
        FUNC_4(VAR_7, VAR_4, 0);
        FUNC_4(VAR_7, VAR_3, 0);
    }

exit_leader_reset:

    VAR_7->is_leader = 0;
    FUNC_6(VAR_7);

    FUNC_9();
    return (VAR_8);
}
