
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dmae_cmd {int dst_addr_lo; int len; int comp_addr_lo; int comp_val; scalar_t__ comp_addr_hi; scalar_t__ dst_addr_hi; int src_addr_hi; int src_addr_lo; scalar_t__ opcode; } ;
struct bxe_softc {scalar_t__ func_stx; scalar_t__ executer_idx; int func_stats; struct dmae_cmd stats_dmae; } ;


 scalar_t__* FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,struct dmae_cmd) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct bxe_softc*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct bxe_softc*,struct dmae_cmd*,int) ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__*,int *,int) ;
 int FUNC_12 (struct dmae_cmd*,int ,int) ;
 scalar_t__* VAR_8 ;

__attribute__((used)) static void
FUNC_13(struct bxe_softc *VAR_9)
{
    struct dmae_cmd *VAR_10 = &VAR_9->stats_dmae;
    uint32_t *VAR_11 = FUNC_0(VAR_9, VAR_11);
    int VAR_12;
    uint32_t VAR_13;

    *VAR_11 = VAR_1;
    if (FUNC_3(VAR_9)) {
        return;
    }


    if (VAR_9->func_stx) {
        FUNC_11(FUNC_0(VAR_9, VAR_7), &VAR_9->func_stats,
               sizeof(VAR_9->func_stats));
    }


    if (VAR_9->executer_idx) {
        VAR_12 = FUNC_5(VAR_9);
        VAR_13 = FUNC_8(VAR_9, VAR_4, VAR_2,
                                  VAR_5, VAR_0);
        VAR_13 = FUNC_9(VAR_13);

        FUNC_12(VAR_10, 0, sizeof(struct dmae_cmd));
        VAR_10->opcode = VAR_13;
        VAR_10->src_addr_lo = FUNC_7(FUNC_1(VAR_9, VAR_10[0]));
        VAR_10->src_addr_hi = FUNC_6(FUNC_1(VAR_9, VAR_10[0]));
        VAR_10->dst_addr_lo = ((VAR_3 +
                              sizeof(struct dmae_cmd) *
                              (VAR_12 + 1)) >> 2);
        VAR_10->dst_addr_hi = 0;
        VAR_10->len = sizeof(struct dmae_cmd) >> 2;
        if (FUNC_2(VAR_9)) {
            VAR_10->len--;
        }
        VAR_10->comp_addr_lo = (VAR_6[VAR_12 + 1] >> 2);
        VAR_10->comp_addr_hi = 0;
        VAR_10->comp_val = 1;

        *VAR_11 = 0;
        FUNC_10(VAR_9, VAR_10, VAR_12);
    } else if (VAR_9->func_stx) {
        *VAR_11 = 0;
        FUNC_10(VAR_9, VAR_10, FUNC_4(VAR_9));
    }
}
