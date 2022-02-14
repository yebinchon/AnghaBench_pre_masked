
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,...) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int VAR_5 ;

__attribute__((used)) static uint8_t
FUNC_5(struct bxe_softc *VAR_6,
                    uint32_t VAR_7)
{
    uint32_t VAR_8;
    uint32_t VAR_9 = (1 << VAR_7);
    int VAR_10 = FUNC_4(VAR_6);
    uint32_t VAR_11;

    FUNC_0(VAR_6, VAR_0, "Trying to take a resource lock 0x%x\n", VAR_7);


    if (VAR_7 > VAR_2) {
        FUNC_0(VAR_6, VAR_0,
              "resource(0x%x) > HW_LOCK_MAX_RESOURCE_VALUE(0x%x)\n",
              VAR_7, VAR_2);
        return (VAR_1);
    }

    if (VAR_10 <= 5) {
        VAR_11 = (VAR_3 + VAR_10*8);
    } else {
        VAR_11 = (VAR_4 + (VAR_10 - 6)*8);
    }


    FUNC_3(VAR_6, VAR_11 + 4, VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_11);
    if (VAR_8 & VAR_9) {
        return (VAR_5);
    }

    FUNC_1(VAR_6, "Failed to get a resource lock 0x%x func %d "
        "lock_status 0x%x resource_bit 0x%x\n", VAR_7, VAR_10,
        VAR_8, VAR_9);

    return (VAR_1);
}
