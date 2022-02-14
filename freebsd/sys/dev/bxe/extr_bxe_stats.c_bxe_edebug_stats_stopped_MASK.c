
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_1 (struct bxe_softc*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static uint8_t
FUNC_2(struct bxe_softc *VAR_4)
{
    uint32_t VAR_5;

    if (FUNC_0(VAR_4, VAR_3[1])) {
        VAR_5 = FUNC_1(VAR_4, VAR_3[1]);

        if (VAR_5 == VAR_0) {
            return (VAR_2);
        }
    }

    return (VAR_1);
}
