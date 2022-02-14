
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int,int) ;

void
FUNC_2(struct bxe_softc *VAR_0,
                        bus_addr_t VAR_1,
                        uint32_t VAR_2,
                        uint32_t VAR_3)
{
    int VAR_4 = FUNC_0(VAR_0);
    int VAR_5 = 0;

    while (VAR_3 > VAR_4) {
        FUNC_1(VAR_0,
                       (VAR_1 + VAR_5),
                       (VAR_2 + VAR_5),
                       VAR_4);
        VAR_5 += (VAR_4 * 4);
        VAR_3 -= VAR_4;
    }

    FUNC_1(VAR_0,
                   (VAR_1 + VAR_5),
                   (VAR_2 + VAR_5),
                   VAR_3);
}
