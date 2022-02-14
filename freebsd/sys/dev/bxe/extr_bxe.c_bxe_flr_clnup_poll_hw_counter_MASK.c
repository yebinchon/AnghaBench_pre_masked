
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bxe_softc*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct bxe_softc *VAR_0,
                              uint32_t VAR_1,
                              char *VAR_2,
                              uint32_t VAR_3)
{
    uint32_t VAR_4 = FUNC_1(VAR_0, VAR_1, 0, VAR_3);

    if (VAR_4 != 0) {
        FUNC_0(VAR_0, "%s usage count=%d\n", VAR_2, VAR_4);
        return (1);
    }

    return (0);
}
