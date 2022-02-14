
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_1)
{
    uint32_t VAR_2 = 1000;
    uint32_t VAR_3 = 0;

    do {
        VAR_3 = FUNC_2(VAR_1, VAR_0);

        if (VAR_3 == 0) {
            break;
        }

        FUNC_1(1000);
    } while (--VAR_2 > 0);

    if (VAR_2 == 0) {
        FUNC_0(VAR_1, "Still pending IGU requests bits=0x%08x!\n", VAR_3);
        return (-1);
    }

    return (0);
}
