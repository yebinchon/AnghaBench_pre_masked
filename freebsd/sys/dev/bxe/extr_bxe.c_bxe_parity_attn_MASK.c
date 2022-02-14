
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int,int,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct bxe_softc*,int,int,scalar_t__) ;
 int FUNC_4 (struct bxe_softc*,int,int,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct bxe_softc*,int,int,scalar_t__) ;
 int FUNC_6 (struct bxe_softc*,int,int,scalar_t__*,scalar_t__) ;
 int FUNC_7 (struct bxe_softc*,int,int,scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_8(struct bxe_softc *VAR_8,
                uint8_t *VAR_9,
                uint8_t VAR_10,
                uint32_t *VAR_11)
{
    int VAR_12 = 0;

    if ((VAR_11[0] & VAR_2) ||
        (VAR_11[1] & VAR_3) ||
        (VAR_11[2] & VAR_4) ||
        (VAR_11[3] & VAR_5) ||
        (VAR_11[4] & VAR_6)) {
        FUNC_0(VAR_8, "Parity error: HW block parity attention:\n"
                  "[0]:0x%08x [1]:0x%08x [2]:0x%08x [3]:0x%08x [4]:0x%08x\n",
              (uint32_t)(VAR_11[0] & VAR_2),
              (uint32_t)(VAR_11[1] & VAR_3),
              (uint32_t)(VAR_11[2] & VAR_4),
              (uint32_t)(VAR_11[3] & VAR_5),
              (uint32_t)(VAR_11[4] & VAR_6));

        if (VAR_10)
            FUNC_1(VAR_8, "Parity errors detected in blocks: ");

        VAR_12 =
            FUNC_3(VAR_8, VAR_11[0] &
                                          VAR_2,
                                          VAR_12, VAR_10);
        VAR_12 =
            FUNC_4(VAR_8, VAR_11[1] &
                                          VAR_3,
                                          VAR_12, VAR_9, VAR_10);
        VAR_12 =
            FUNC_5(VAR_8, VAR_11[2] &
                                          VAR_4,
                                          VAR_12, VAR_10);
        VAR_12 =
            FUNC_6(VAR_8, VAR_11[3] &
                                          VAR_5,
                                          VAR_12, VAR_9, VAR_10);
        VAR_12 =
            FUNC_7(VAR_8, VAR_11[4] &
                                          VAR_6,
                                          VAR_12, VAR_10);

        if (VAR_10)
            FUNC_1(VAR_8, "\n");

 if( *VAR_9 == VAR_7 ) {
                FUNC_2(VAR_8, VAR_0);
        }

        return (VAR_7);
    }

    return (VAR_1);
}
