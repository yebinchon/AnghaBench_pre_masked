
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int** VAR_0 ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_1, uint32_t VAR_2)
{
    if (FUNC_0(VAR_1))
        return VAR_0[0][VAR_2-1];
    else if (FUNC_1(VAR_1))
        return VAR_0[1][VAR_2-1];
    else if (FUNC_2(VAR_1))
        return VAR_0[2][VAR_2-1];
    else if (FUNC_3(VAR_1))
        return VAR_0[3][VAR_2-1];
    else if (FUNC_4(VAR_1))
        return VAR_0[4][VAR_2-1];
    else
        return 0;
}
