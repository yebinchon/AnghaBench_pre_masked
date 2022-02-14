
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*,int) ;
 int FUNC_2 (struct bxe_softc*,int,int) ;
 int FUNC_3 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_3,
                    uint32_t VAR_4)
{
    uint32_t VAR_5;
    uint32_t VAR_6 = (1 << VAR_4);
    int VAR_7 = FUNC_3(VAR_3);
    uint32_t VAR_8;


    if (VAR_4 > VAR_0) {
        FUNC_0(VAR_3, "(resource 0x%x > HW_LOCK_MAX_RESOURCE_VALUE)"
            " resource_bit 0x%x\n", VAR_4, VAR_6);
        return (-1);
    }

    if (VAR_7 <= 5) {
        VAR_8 = (VAR_1 + (VAR_7 * 8));
    } else {
        VAR_8 =
                (VAR_2 + ((VAR_7 - 6) * 8));
    }


    VAR_5 = FUNC_1(VAR_3, VAR_8);
    if (!(VAR_5 & VAR_6)) {
        FUNC_0(VAR_3, "resource (0x%x) not in use (status 0x%x bit 0x%x)\n",
              VAR_4, VAR_5, VAR_6);
        return (-1);
    }

    FUNC_2(VAR_3, VAR_8, VAR_6);
    return (0);
}
