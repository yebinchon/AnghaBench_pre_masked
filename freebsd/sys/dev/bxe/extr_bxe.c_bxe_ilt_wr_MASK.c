
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
typedef int bus_addr_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*,int,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct bxe_softc *VAR_2,
           uint32_t VAR_3,
           bus_addr_t VAR_4)
{
    int VAR_5;
    uint32_t VAR_6[2];

    if (FUNC_0(VAR_2)) {
        VAR_5 = VAR_0 + VAR_3*8;
    } else {
        VAR_5 = VAR_1 + VAR_3*8;
    }

    VAR_6[0] = FUNC_1(VAR_4);
    VAR_6[1] = FUNC_2(VAR_4);
    FUNC_3(VAR_2, VAR_5, VAR_6, 2);
}
