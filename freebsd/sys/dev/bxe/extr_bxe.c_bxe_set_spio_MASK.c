
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
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
             uint32_t VAR_11)
{
    uint32_t VAR_12;


    if ((VAR_10 != VAR_7) && (VAR_10 != VAR_8)) {
        FUNC_1(VAR_9, "Invalid SPIO 0x%x mode 0x%x\n", VAR_10, VAR_11);
        return (-1);
    }

    FUNC_4(VAR_9, VAR_1);


    VAR_12 = (FUNC_2(VAR_9, VAR_2) & VAR_4);

    switch (VAR_11) {
    case 128:
        FUNC_0(VAR_9, VAR_0, "Set SPIO 0x%x -> output low\n", VAR_10);

        VAR_12 &= ~(VAR_10 << VAR_5);
        VAR_12 |= (VAR_10 << VAR_3);
        break;

    case 129:
        FUNC_0(VAR_9, VAR_0, "Set SPIO 0x%x -> output high\n", VAR_10);

        VAR_12 &= ~(VAR_10 << VAR_5);
        VAR_12 |= (VAR_10 << VAR_6);
        break;

    case 130:
        FUNC_0(VAR_9, VAR_0, "Set SPIO 0x%x -> input\n", VAR_10);

        VAR_12 |= (VAR_10 << VAR_5);
        break;

    default:
        break;
    }

    FUNC_3(VAR_9, VAR_2, VAR_12);
    FUNC_5(VAR_9, VAR_1);

    return (0);
}
