
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {int ifp; } ;
struct bxe_fastpath {int fp_hc_idx; int igu_sb_id; int tq_task; int tq; int index; struct bxe_softc* sc; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ) ;
 int FUNC_1 (struct bxe_fastpath*) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct bxe_fastpath*) ;
 scalar_t__ FUNC_5 (struct bxe_fastpath*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*,struct bxe_fastpath*) ;
 scalar_t__ FUNC_7 (struct bxe_softc*,struct bxe_fastpath*) ;
 int FUNC_8 (struct bxe_fastpath*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void
FUNC_12(void *VAR_5,
                 int VAR_6)
{
    struct bxe_fastpath *VAR_7 = (struct bxe_fastpath *)VAR_5;
    struct bxe_softc *VAR_8 = VAR_7->sc;
    uint8_t VAR_9 = VAR_1;
    uint8_t VAR_10 = VAR_1;

    FUNC_0(VAR_8, VAR_0, "---> FP TASK QUEUE (%d) <---\n", VAR_7->index);
    FUNC_8(VAR_7);



    if (FUNC_5(VAR_7)) {
        FUNC_1(VAR_7);
        VAR_9 = FUNC_7(VAR_8, VAR_7);
        FUNC_2(VAR_7);
    }

    if (FUNC_4(VAR_7)) {
        VAR_10 = FUNC_6(VAR_8, VAR_7);
    }

    if (VAR_10 ) {

        FUNC_11(VAR_7->tq, &VAR_7->tq_task);
        return;
    }

    FUNC_3(VAR_8, VAR_7->igu_sb_id, VAR_4,
               FUNC_10(VAR_7->fp_hc_idx), VAR_3, 1);
}
