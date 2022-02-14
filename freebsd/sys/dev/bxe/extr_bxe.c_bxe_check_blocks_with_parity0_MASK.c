
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
 int FUNC_0 (struct bxe_softc*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct bxe_softc *VAR_0,
                              uint32_t VAR_1,
                              int VAR_2,
                              uint8_t VAR_3)
{
    uint32_t VAR_4 = 0;
    int VAR_5 = 0;

    for (VAR_5 = 0; VAR_1; VAR_5++) {
        VAR_4 = ((uint32_t)0x1 << VAR_5);
        if (VAR_1 & VAR_4) {
            switch (VAR_4) {
            case 134:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "BRB");
                break;
            case 133:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "PARSER");
                break;
            case 129:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "TSDM");
                break;
            case 131:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "SEARCHER");
                break;
            case 130:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "TCM");
                break;
            case 128:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "TSEMI");
                break;
            case 132:
                if (VAR_3)
                    FUNC_0(VAR_0, VAR_2++, "XPB");
                break;
            }


            VAR_1 &= ~VAR_4;
        }
    }

    return (VAR_2);
}
