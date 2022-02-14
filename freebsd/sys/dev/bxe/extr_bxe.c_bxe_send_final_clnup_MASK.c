
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct bxe_softc*,int) ;
 int FUNC_7 (struct bxe_softc*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct bxe_softc*,int,int,int) ;
 int FUNC_9 (struct bxe_softc*,char*) ;

__attribute__((used)) static int
FUNC_10(struct bxe_softc *VAR_6,
                     uint8_t VAR_7,
                     uint32_t VAR_8)
{
    uint32_t VAR_9 = 0;
    uint32_t VAR_10 = (VAR_0 +
                          FUNC_2(VAR_7));
    int VAR_11 = 0;

    if (FUNC_6(VAR_6, VAR_10)) {
        FUNC_1(VAR_6, "Cleanup complete was not 0 before sending\n");
        return (1);
    }

    VAR_9 |= FUNC_4(VAR_5);
    VAR_9 |= FUNC_5(VAR_4);
    VAR_9 |= FUNC_3(VAR_7);
    VAR_9 |= 1 << VAR_2;

    FUNC_0(VAR_6, VAR_1, "sending FW Final cleanup\n");
    FUNC_7(VAR_6, VAR_3, VAR_9);

    if (FUNC_8(VAR_6, VAR_10, 1, VAR_8) != 1) {
        FUNC_1(VAR_6, "FW final cleanup did not succeed\n");
        FUNC_0(VAR_6, VAR_1, "At timeout completion address contained %x\n",
              (FUNC_6(VAR_6, VAR_10)));
        FUNC_9(VAR_6, ("FLR cleanup failed\n"));
        return (1);
    }


    FUNC_7(VAR_6, VAR_10, 0);

    return (VAR_11);
}
