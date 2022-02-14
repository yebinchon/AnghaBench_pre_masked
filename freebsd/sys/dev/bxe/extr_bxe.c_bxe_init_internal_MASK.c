
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;




 int FUNC_1 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_0,
                  uint32_t VAR_1)
{
    switch (VAR_1) {
    case 131:
    case 130:
        FUNC_1(VAR_0);


    case 128:



    case 129:

        break;

    default:
        FUNC_0(VAR_0, "Unknown load_code (0x%x) from MCP\n", VAR_1);
        break;
    }
}
