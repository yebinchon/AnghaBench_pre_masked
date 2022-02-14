
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
    int VAR_6 = 0;
    uint32_t VAR_7 = 0;
    for (VAR_6 = 0; VAR_2; VAR_6++) {
        VAR_7 = ((uint32_t)0x1 << VAR_6);
        if (VAR_2 & VAR_7) {
            switch (VAR_7) {
            case 138:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "PBF");
                break;
            case 137:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "QM");
                break;
            case 136:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "TM");
                break;
            case 129:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "XSDM");
                break;
            case 130:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "XCM");
                break;
            case 128:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "XSEMI");
                break;
            case 140:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "DOORBELLQ");
                break;
            case 139:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "NIG");
                break;
            case 131:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "VAUX PCI CORE");
                *VAR_4 = VAR_0;
                break;
            case 141:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "DEBUG");
                break;
            case 133:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "USDM");
                break;
            case 135:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "UCM");
                break;
            case 132:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "USEMI");
                break;
            case 134:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "UPB");
                break;
            case 142:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "CSDM");
                break;
            case 143:
                if (VAR_5)
                    FUNC_0(VAR_1, VAR_3++, "CCM");
                break;
            }


            VAR_2 &= ~VAR_7;
        }
    }

    return (VAR_3);
}
