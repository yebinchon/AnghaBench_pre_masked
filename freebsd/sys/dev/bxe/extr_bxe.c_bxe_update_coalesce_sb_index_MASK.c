
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,int,int,int,int) ;
 int FUNC_2 (struct bxe_softc*,int,int,int,int) ;

void
FUNC_3(struct bxe_softc *VAR_0,
                             uint8_t VAR_1,
                             uint8_t VAR_2,
                             uint8_t VAR_3,
                             uint16_t VAR_4)
{
    int VAR_5 = FUNC_0(VAR_0);
    uint8_t VAR_6 = (VAR_4 / 4);

    FUNC_2(VAR_0, VAR_5, VAR_1, VAR_2, VAR_6);

    VAR_3 = (VAR_3) ? 1 : ((VAR_4) ? 0 : 1);
    FUNC_1(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3);
}
