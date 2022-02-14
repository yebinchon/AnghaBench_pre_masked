
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bxe_softc {int def_att_idx; int igu_dsb_id; int def_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7,
                 int VAR_8)
{
    struct bxe_softc *VAR_9 = (struct bxe_softc *)VAR_7;
    uint16_t VAR_10;

    FUNC_0(VAR_9, VAR_3, "---> SP TASK <---\n");


    VAR_10 = FUNC_6(VAR_9);

    FUNC_0(VAR_9, VAR_3, "dsb status 0x%04x\n", VAR_10);


    if (VAR_10 & VAR_1) {
        FUNC_0(VAR_9, VAR_3, "---> ATTN INTR <---\n");
        FUNC_4(VAR_9);
        VAR_10 &= ~VAR_1;
    }


    if (VAR_10 & VAR_2) {

        FUNC_0(VAR_9, VAR_3, "---> EQ INTR <---\n");
        FUNC_5(VAR_9);
        FUNC_3(VAR_9, VAR_9->igu_dsb_id, VAR_6,
                   FUNC_7(VAR_9->def_idx), VAR_5, 1);
        VAR_10 &= ~VAR_2;
    }


    if (FUNC_2(VAR_10)) {
        FUNC_1(VAR_9, "Got an unknown SP interrupt! (0x%04x)\n", VAR_10);
    }


    FUNC_3(VAR_9, VAR_9->igu_dsb_id, VAR_0,
               FUNC_7(VAR_9->def_att_idx), VAR_4, 1);
}
