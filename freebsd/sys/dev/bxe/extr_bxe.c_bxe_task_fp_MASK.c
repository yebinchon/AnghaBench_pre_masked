
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {int dummy; } ;
struct bxe_fastpath {int fp_hc_idx; int igu_sb_id; int tq_task; int tq; int index; struct bxe_softc* sc; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ) ;
 int FUNC_1 (struct bxe_fastpath*) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct bxe_fastpath*) ;
 scalar_t__ FUNC_5 (struct bxe_fastpath*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*,struct bxe_fastpath*) ;
 scalar_t__ FUNC_7 (struct bxe_softc*,struct bxe_fastpath*) ;
 int FUNC_8 (struct bxe_fastpath*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct bxe_fastpath *VAR_4)
{
    struct bxe_softc *VAR_5 = VAR_4->sc;
    uint8_t VAR_6 = VAR_1;
    uint8_t VAR_7 = VAR_1;

    FUNC_0(VAR_5, VAR_0, "---> FP TASK ISR (%d) <---\n", VAR_4->index);


    FUNC_8(VAR_4);



    if (FUNC_5(VAR_4)) {
        FUNC_1(VAR_4);
        VAR_6 = FUNC_7(VAR_5, VAR_4);
        FUNC_2(VAR_4);
    }

    if (FUNC_4(VAR_4)) {
        VAR_7 = FUNC_6(VAR_5, VAR_4);
    }

    if (VAR_7 ) {

        FUNC_10(VAR_4->tq, &VAR_4->tq_task);
        return;
    }
    FUNC_3(VAR_5, VAR_4->igu_sb_id, VAR_3,
               FUNC_9(VAR_4->fp_hc_idx), VAR_2, 1);
}
