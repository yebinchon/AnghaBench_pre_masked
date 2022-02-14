
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bxe_softc {int mrrs; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_4)
{
    uint16_t VAR_5;
    int VAR_6, VAR_7;

    VAR_5 = FUNC_1(VAR_4, VAR_3, 2);

    FUNC_0(VAR_4, VAR_0, "read 0x%08x from devctl\n", VAR_5);

    VAR_7 = ((VAR_5 & VAR_1) >> 5);

    if (VAR_4->mrrs == -1) {
        VAR_6 = ((VAR_5 & VAR_2) >> 12);
    } else {
        FUNC_0(VAR_4, VAR_0, "forcing read order to %d\n", VAR_4->mrrs);
        VAR_6 = VAR_4->mrrs;
    }

    FUNC_2(VAR_4, VAR_6, VAR_7);
}
