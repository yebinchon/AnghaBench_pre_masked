
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*,int ) ;
 int FUNC_5 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_6,
                    uint8_t VAR_7,
                    uint32_t VAR_8)
{
    uint32_t VAR_9;



    FUNC_4(VAR_6, VAR_1);


    VAR_9 = FUNC_2(VAR_6, VAR_5);
    VAR_9 &= ~(VAR_7 << VAR_3);
    VAR_9 &= ~(VAR_7 << VAR_2);
    VAR_9 &= ~(VAR_7 << VAR_4);

    switch (VAR_8) {
    case 128:
        FUNC_0(VAR_6, VAR_0, "Set GPIO 0x%x -> output low\n", VAR_7);

        VAR_9 |= (VAR_7 << VAR_2);
        break;

    case 129:
        FUNC_0(VAR_6, VAR_0, "Set GPIO 0x%x -> output high\n", VAR_7);

        VAR_9 |= (VAR_7 << VAR_4);
        break;

    case 130:
        FUNC_0(VAR_6, VAR_0, "Set GPIO 0x%x -> input\n", VAR_7);

        VAR_9 |= (VAR_7 << VAR_3);
        break;

    default:
        FUNC_1(VAR_6, "Invalid GPIO mode assignment pins 0x%x mode 0x%x"
            " gpio_reg 0x%x\n", VAR_7, VAR_8, VAR_9);
        FUNC_5(VAR_6, VAR_1);
        return (-1);
    }

    FUNC_3(VAR_6, VAR_5, VAR_9);
    FUNC_5(VAR_6, VAR_1);

    return (0);
}
