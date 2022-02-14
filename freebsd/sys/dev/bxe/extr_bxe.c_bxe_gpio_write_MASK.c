
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*,int ) ;
 int FUNC_5 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_11,
               int VAR_12,
               uint32_t VAR_13,
               uint8_t VAR_14)
{

    int VAR_15 = ((FUNC_2(VAR_11, VAR_9) &&
                      FUNC_2(VAR_11, VAR_10)) ^ VAR_14);
    int VAR_16 = (VAR_12 +
                      (VAR_15 ? VAR_6 : 0));
    uint32_t VAR_17 = (1 << VAR_16);
    uint32_t VAR_18;

    if (VAR_12 > VAR_2) {
        FUNC_1(VAR_11, "Invalid GPIO %d mode 0x%x port 0x%x gpio_port %d"
            " gpio_shift %d gpio_mask 0x%x\n",
            VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
        return (-1);
    }

    FUNC_4(VAR_11, VAR_1);


    VAR_18 = (FUNC_2(VAR_11, VAR_8) & VAR_4);

    switch (VAR_13) {
    case 128:
        FUNC_0(VAR_11, VAR_0,
              "Set GPIO %d (shift %d) -> output low\n",
              VAR_12, VAR_16);

        VAR_18 &= ~(VAR_17 << VAR_5);
        VAR_18 |= (VAR_17 << VAR_3);
        break;

    case 129:
        FUNC_0(VAR_11, VAR_0,
              "Set GPIO %d (shift %d) -> output high\n",
              VAR_12, VAR_16);

        VAR_18 &= ~(VAR_17 << VAR_5);
        VAR_18 |= (VAR_17 << VAR_7);
        break;

    case 130:
        FUNC_0(VAR_11, VAR_0,
              "Set GPIO %d (shift %d) -> input\n",
              VAR_12, VAR_16);

        VAR_18 |= (VAR_17 << VAR_5);
        break;

    default:
        break;
    }

    FUNC_3(VAR_11, VAR_8, VAR_18);
    FUNC_5(VAR_11, VAR_1);

    return (0);
}
