
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int fw_seq; } ;
struct TYPE_2__ {int fw_mb_header; int drv_mb_header; int drv_mb_param; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,...) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*,int ) ;
 int FUNC_8 (struct bxe_softc*,int ,int) ;
 TYPE_1__* VAR_3 ;

uint32_t
FUNC_9(struct bxe_softc *VAR_4,
                    uint32_t VAR_5,
                    uint32_t VAR_6)
{
    int VAR_7 = FUNC_6(VAR_4);
    uint32_t VAR_8;
    uint32_t VAR_9 = 0;
    uint32_t VAR_10 = 1;
    uint8_t VAR_11 = FUNC_4(VAR_4) ? 100 : 10;

    FUNC_2(VAR_4);

    VAR_8 = ++VAR_4->fw_seq;
    FUNC_8(VAR_4, VAR_3[VAR_7].drv_mb_param, VAR_6);
    FUNC_8(VAR_4, VAR_3[VAR_7].drv_mb_header, (VAR_5 | VAR_8));

    FUNC_0(VAR_4, VAR_0,
          "wrote command 0x%08x to FW MB param 0x%08x\n",
          (VAR_5 | VAR_8), VAR_6);


    do {
        FUNC_5(VAR_11 * 1000);
        VAR_9 = FUNC_7(VAR_4, VAR_3[VAR_7].fw_mb_header);
    } while ((VAR_8 != (VAR_9 & VAR_2)) && (VAR_10++ < 500));

    FUNC_0(VAR_4, VAR_0,
          "[after %d ms] read 0x%x seq 0x%x from FW MB\n",
          VAR_10*VAR_11, VAR_9, VAR_8);


    if (VAR_8 == (VAR_9 & VAR_2)) {
        VAR_9 &= VAR_1;
    } else {

        FUNC_1(VAR_4, "FW failed to respond!\n");

        VAR_9 = 0;
    }

    FUNC_3(VAR_4);
    return (VAR_9);
}
