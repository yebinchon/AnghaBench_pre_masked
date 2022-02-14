
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int,int,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int FUNC_6 (struct bxe_softc*,int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*,int ) ;
 int FUNC_9 (struct bxe_softc*) ;
 scalar_t__ FUNC_10 (struct bxe_softc*,int) ;
 int FUNC_11 (struct bxe_softc*,int*) ;
 int FUNC_12 (struct bxe_softc*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15(struct bxe_softc *VAR_10,
                 uint8_t VAR_11)
{
    int VAR_12 = 1000;
    uint32_t VAR_13 = 0;
    uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    uint32_t VAR_19 = 0;


    do {
        VAR_14 = FUNC_5(VAR_10, VAR_8);
        VAR_15 = FUNC_5(VAR_10, VAR_5);
        VAR_16 = FUNC_5(VAR_10, VAR_6);
        VAR_17 = FUNC_5(VAR_10, VAR_7);
        VAR_18 = FUNC_5(VAR_10, VAR_4);
        if (FUNC_3(VAR_10)) {
            VAR_19 = FUNC_5(VAR_10, VAR_3);
        }

        if ((VAR_14 == 0x7e) && (VAR_15 == 0xa0) &&
            ((VAR_16 & 0x1) == 0x1) &&
            ((VAR_17 & 0x1) == 0x1) &&
            (VAR_18 == 0xffffffff) &&
            (!FUNC_3(VAR_10) || (VAR_19 == 0xffffffff)))
            break;
        FUNC_4(1000);
    } while (VAR_12-- > 0);

    if (VAR_12 <= 0) {
        FUNC_0(VAR_10, "ERROR: Tetris buffer didn't get empty or there "
                  "are still outstanding read requests after 1s! "
                  "sr_cnt=0x%08x, blk_cnt=0x%08x, port_is_idle_0=0x%08x, "
                  "port_is_idle_1=0x%08x, pgl_exp_rom2=0x%08x\n",
              VAR_14, VAR_15, VAR_16,
              VAR_17, VAR_18);
        return (-1);
    }

    FUNC_13();


    FUNC_12(VAR_10, VAR_9);


    if (!FUNC_2(VAR_10) && FUNC_7(VAR_10)) {
        return (-1);
    }




    FUNC_6(VAR_10, VAR_1, 0);
    FUNC_13();


    FUNC_14();





    FUNC_4(1000);



    if (VAR_11) {
        FUNC_11(VAR_10, &VAR_13);
    }


    FUNC_9(VAR_10);
    FUNC_13();


    FUNC_8(VAR_10, VAR_11);
    FUNC_13();


    if (!FUNC_1(VAR_10))
        FUNC_6(VAR_10, VAR_2, 0x7f);



    if (VAR_11 && FUNC_10(VAR_10, VAR_13)) {
        return (-1);
    }




    FUNC_12(VAR_10, VAR_0);






    return (0);
}
