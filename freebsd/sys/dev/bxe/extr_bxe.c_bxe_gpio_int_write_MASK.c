
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*,int ) ;
 int FUNC_5 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_9,
                   int VAR_10,
                   uint32_t VAR_11,
                   uint8_t VAR_12)
{

    int VAR_13 = ((FUNC_2(VAR_9, VAR_7) &&
                      FUNC_2(VAR_9, VAR_8)) ^ VAR_12);
    int VAR_14 = (VAR_10 +
                      (VAR_13 ? VAR_5 : 0));
    uint32_t VAR_15 = (1 << VAR_14);
    uint32_t VAR_16;

    if (VAR_10 > VAR_2) {
        FUNC_1(VAR_9, "Invalid GPIO %d mode 0x%x port 0x%x gpio_port %d"
            " gpio_shift %d gpio_mask 0x%x\n",
            VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
        return (-1);
    }

    FUNC_4(VAR_9, VAR_1);


    VAR_16 = FUNC_2(VAR_9, VAR_6);

    switch (VAR_11) {
    case 129:
        FUNC_0(VAR_9, VAR_0,
              "Clear GPIO INT %d (shift %d) -> output low\n",
              VAR_10, VAR_14);

        VAR_16 &= ~(VAR_15 << VAR_4);
        VAR_16 |= (VAR_15 << VAR_3);
        break;

    case 128:
        FUNC_0(VAR_9, VAR_0,
              "Set GPIO INT %d (shift %d) -> output high\n",
              VAR_10, VAR_14);

        VAR_16 &= ~(VAR_15 << VAR_3);
        VAR_16 |= (VAR_15 << VAR_4);
        break;

    default:
        break;
    }

    FUNC_3(VAR_9, VAR_6, VAR_16);
    FUNC_5(VAR_9, VAR_1);

    return (0);
}
