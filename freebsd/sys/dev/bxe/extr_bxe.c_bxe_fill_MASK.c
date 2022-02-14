
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int,int) ;
 int FUNC_1 (struct bxe_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_0,
         uint32_t VAR_1,
         int VAR_2,
         uint32_t VAR_3)
{
    uint32_t VAR_4;

    if (!(VAR_3 % 4) && !(VAR_1 % 4)) {
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 4) {
            FUNC_0(VAR_0, (VAR_1 + VAR_4), VAR_2);
        }
    } else {
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
            FUNC_1(VAR_0, (VAR_1 + VAR_4), VAR_2);
        }
    }
}
