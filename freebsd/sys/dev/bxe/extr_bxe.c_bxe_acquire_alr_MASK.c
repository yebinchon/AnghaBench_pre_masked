
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct bxe_softc *VAR_1)
{
    uint32_t VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 1000; VAR_2++) {
        VAR_3 = (1UL << 31);
        FUNC_3(VAR_1, VAR_0 + 0x9c, VAR_3);
        VAR_3 = FUNC_2(VAR_1, VAR_0 + 0x9c);
        if (VAR_3 & (1L << 31))
            break;

        FUNC_1(5000);
    }

    if (!(VAR_3 & (1L << 31))) {
        FUNC_0(VAR_1, "Cannot acquire MCP access lock register\n");
        return (-1);
    }

    return (0);
}
