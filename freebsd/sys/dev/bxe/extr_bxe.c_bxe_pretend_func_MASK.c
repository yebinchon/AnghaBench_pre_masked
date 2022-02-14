
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int ) ;
 int FUNC_3 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_1,
                 uint16_t VAR_2)
{
    uint32_t VAR_3;

    if (FUNC_0(VAR_1) && (VAR_2 > VAR_0)) {
        return (-1);
    }


    VAR_3 = FUNC_3(VAR_1);
    FUNC_2(VAR_1, VAR_3, VAR_2);
    FUNC_1(VAR_1, VAR_3);
    return (0);
}
