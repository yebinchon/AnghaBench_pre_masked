
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {TYPE_1__* bar; } ;
struct TYPE_2__ {int handle; int tag; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct bxe_softc*,int,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_16,
                     uint8_t VAR_17,
                     uint8_t VAR_18,
                     uint8_t VAR_19)
{
    uint32_t VAR_20, VAR_21, VAR_22 = 100;
    uint32_t VAR_23 = VAR_12;
    uint32_t VAR_24 = VAR_13;
    uint32_t VAR_25 = VAR_14 + (VAR_18/32)*4;
    uint32_t VAR_26 = 1 << (VAR_18%32);
    uint32_t VAR_27 = VAR_17 | (VAR_19 ? 1 : 0) << VAR_8;
    uint32_t VAR_28 = VAR_3 + VAR_18;


    if (FUNC_1(VAR_16)) {
        return;
    }

    VAR_20 = ((VAR_15 <<
             VAR_11) |
            VAR_10 |
            VAR_9);

    VAR_21 = ((VAR_28 << VAR_5) |
           (VAR_27 << VAR_6) |
           (VAR_4 << VAR_7));

    FUNC_0(VAR_16, VAR_2, "write 0x%08x to IGU(via GRC) addr 0x%x\n",
            VAR_20, VAR_23);
    FUNC_4(VAR_16, VAR_23, VAR_20);

    FUNC_5(VAR_16->bar[VAR_0].tag, VAR_16->bar[VAR_0].handle, 0, 0,
                      VAR_1);
    FUNC_6();

    FUNC_0(VAR_16, VAR_2, "write 0x%08x to IGU(via GRC) addr 0x%x\n",
            VAR_21, VAR_24);
    FUNC_4(VAR_16, VAR_24, VAR_21);

    FUNC_5(VAR_16->bar[VAR_0].tag, VAR_16->bar[VAR_0].handle, 0, 0,
                      VAR_1);
    FUNC_6();


    while (!(FUNC_3(VAR_16, VAR_25) & VAR_26) && --VAR_22) {
        FUNC_2(20000);
    }

    if (!(FUNC_3(VAR_16, VAR_25) & VAR_26)) {
        FUNC_0(VAR_16, VAR_2,
              "Unable to finish IGU cleanup: "
              "idu_sb_id %d offset %d bit %d (cnt %d)\n",
              VAR_18, VAR_18/32, VAR_18%32, VAR_22);
    }
}
