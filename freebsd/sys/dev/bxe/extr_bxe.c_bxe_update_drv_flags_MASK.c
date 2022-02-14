
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct bxe_softc*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct bxe_softc*,scalar_t__) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct bxe_softc*,int ) ;
 int FUNC_7 (struct bxe_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(struct bxe_softc *VAR_2,
                     uint32_t VAR_3,
                     uint32_t VAR_4)
{
    uint32_t VAR_5;

    if (FUNC_3(VAR_2, VAR_5)) {
        FUNC_6(VAR_2, VAR_1);
        VAR_5 = FUNC_4(VAR_2, VAR_5);

        if (VAR_4) {
            FUNC_2(VAR_5, VAR_3);
        } else {
            FUNC_1(VAR_5, VAR_3);
        }

        FUNC_5(VAR_2, VAR_5, VAR_5);
        FUNC_0(VAR_2, VAR_0, "drv_flags 0x%08x\n", VAR_5);

        FUNC_7(VAR_2, VAR_1);
    }
}
