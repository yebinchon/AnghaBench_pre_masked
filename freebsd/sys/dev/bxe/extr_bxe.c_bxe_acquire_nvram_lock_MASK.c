
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_7(struct bxe_softc *VAR_5)
{
    int VAR_6 = FUNC_5(VAR_5);
    int VAR_7, VAR_8;
    uint32_t VAR_9 = 0;


    FUNC_6(VAR_5, VAR_0);


    VAR_7 = VAR_4;
    if (FUNC_1(VAR_5)) {
        VAR_7 *= 100;
    }


    FUNC_4(VAR_5, VAR_3,
           (VAR_2 << VAR_6));

    for (VAR_8 = 0; VAR_8 < VAR_7*10; VAR_8++) {
        VAR_9 = FUNC_3(VAR_5, VAR_3);
        if (VAR_9 & (VAR_1 << VAR_6)) {
            break;
        }

        FUNC_2(5);
    }

    if (!(VAR_9 & (VAR_1 << VAR_6))) {
        FUNC_0(VAR_5, "Cannot get access to nvram interface "
            "port %d val 0x%x (MCPR_NVM_SW_ARB_ARB_ARB1 << port)\n",
            VAR_6, VAR_9);
        return (-1);
    }

    return (0);
}
