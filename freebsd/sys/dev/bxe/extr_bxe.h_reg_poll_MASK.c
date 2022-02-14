
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bxe_softc*,scalar_t__) ;

__attribute__((used)) static inline uint32_t
FUNC_2(struct bxe_softc *VAR_0,
         uint32_t VAR_1,
         uint32_t VAR_2,
         int VAR_3,
         int VAR_4)
{
    uint32_t VAR_5;

    do {
        VAR_5 = FUNC_1(VAR_0, VAR_1);
        if (VAR_5 == VAR_2) {
            break;
        }
        VAR_3 -= VAR_4;
        FUNC_0(VAR_4 * 1000);
    } while (VAR_3 > 0);

    return (VAR_5);
}
