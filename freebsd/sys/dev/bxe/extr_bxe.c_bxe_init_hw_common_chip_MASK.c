
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_0)
{
    int VAR_1 = FUNC_3(VAR_0);

    if (VAR_1) {
        FUNC_0(VAR_0, "bxe_init_hw_common failed rc=%d\n", VAR_1);
        return (VAR_1);
    }


    if (!FUNC_1(VAR_0)) {
        FUNC_2(VAR_0);
    }

    return (0);
}
