
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct bxe_softc *VAR_1,
                              uint32_t VAR_2,
                              int VAR_3,
                              uint8_t *VAR_4,
                              uint8_t VAR_5)
{
    uint32_t VAR_6 = 0;
    int VAR_7 = 0;

    for (VAR_7 = 0; VAR_2; VAR_7++) {
        VAR_6 = ((uint32_t)0x1 << VAR_7);
        if (VAR_2 & VAR_6) {
            switch (VAR_6) {
            case 131:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "MCP ROM");
                *VAR_4 = VAR_0;
                break;
            case 129:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++,
                              "MCP UMP RX");
                *VAR_4 = VAR_0;
                break;
            case 128:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++,
                              "MCP UMP TX");
                *VAR_4 = VAR_0;
                break;
            case 130:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++,
                              "MCP SCPAD");
                *VAR_4 = VAR_0;
                break;
            }


            VAR_2 &= ~VAR_6;
        }
    }

    return (VAR_3);
}
