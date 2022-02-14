
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int igu_base_sb; int igu_sb_cnt; int igu_dsb_id; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int
FUNC_9(struct bxe_softc *VAR_7)
{
    int VAR_8 = FUNC_6(VAR_7);
    int VAR_9;
    uint32_t VAR_10;
    uint8_t VAR_11, VAR_12 = 0;

    VAR_7->igu_base_sb = 0xff;

    if (FUNC_1(VAR_7)) {
        int VAR_13 = FUNC_7(VAR_7);
        VAR_12 = VAR_7->igu_sb_cnt;
        VAR_7->igu_base_sb = ((FUNC_2(VAR_7) ? VAR_8 : VAR_13) *
                           VAR_1);
        VAR_7->igu_dsb_id = (VAR_0 * VAR_1 +
                          (FUNC_2(VAR_7) ? VAR_8 : VAR_13));
        return (0);
    }


    for (VAR_9 = 0;
         VAR_9 < VAR_5;
         VAR_9++) {
        VAR_10 = FUNC_5(VAR_7, VAR_4 + VAR_9 * 4);
        if (!(VAR_10 & VAR_6)) {
            continue;
        }
        VAR_11 = FUNC_3(VAR_10);
        if ((VAR_11 & VAR_2)) {
            if ((VAR_11 & VAR_3) != VAR_8) {
                continue;
            }
            if (FUNC_4(VAR_10) == 0) {

                VAR_7->igu_dsb_id = VAR_9;
            } else {
                if (VAR_7->igu_base_sb == 0xff) {
                    VAR_7->igu_base_sb = VAR_9;
                }
                VAR_12++;
            }
        }
    }







    VAR_7->igu_sb_cnt = FUNC_8(VAR_7->igu_sb_cnt, VAR_12);

    if (VAR_12 == 0) {
        FUNC_0(VAR_7, "CAM configuration error\n");
        return (-1);
    }

    return (0);
}
