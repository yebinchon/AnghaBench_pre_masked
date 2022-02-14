
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wreg_addr {int chips; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static bool
FUNC_10(struct bxe_softc *VAR_0, const struct wreg_addr *VAR_1)
{
    if (FUNC_0(VAR_0))
        return FUNC_6(VAR_1->chips);
    else if (FUNC_1(VAR_0))
        return FUNC_5(VAR_1->chips);
    else if (FUNC_2(VAR_0))
        return FUNC_7(VAR_1->chips);
    else if (FUNC_3(VAR_0))
        return FUNC_8(VAR_1->chips);
    else if (FUNC_4(VAR_0))
        return FUNC_9(VAR_1->chips);
    else
        return 0;
}
