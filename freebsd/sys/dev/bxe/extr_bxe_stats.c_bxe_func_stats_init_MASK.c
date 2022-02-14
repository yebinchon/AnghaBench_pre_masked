
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct host_func_stats {int dummy; } ;
struct dmae_cmd {int dst_addr_lo; int len; int comp_val; void* comp_addr_hi; void* comp_addr_lo; scalar_t__ dst_addr_hi; void* src_addr_hi; void* src_addr_lo; int opcode; } ;
struct bxe_softc {int func_stx; scalar_t__ executer_idx; struct dmae_cmd stats_dmae; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__* FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct bxe_softc*,int ,int ,int ,int ) ;
 scalar_t__* VAR_5 ;
 int FUNC_6 (struct dmae_cmd*,int ,int) ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_7)
{
    struct dmae_cmd *VAR_8 = &VAR_7->stats_dmae;
    uint32_t *VAR_9 = FUNC_1(VAR_7, VAR_9);


    if (!VAR_7->func_stx) {
        FUNC_0(VAR_7, "BUG!\n");
        return;
    }

    VAR_7->executer_idx = 0;
    FUNC_6(VAR_8, 0, sizeof(struct dmae_cmd));

    VAR_8->opcode = FUNC_5(VAR_7, VAR_3, VAR_2,
                                   VAR_4, VAR_0);
    VAR_8->src_addr_lo = FUNC_4(FUNC_2(VAR_7, VAR_5));
    VAR_8->src_addr_hi = FUNC_3(FUNC_2(VAR_7, VAR_5));
    VAR_8->dst_addr_lo = (VAR_7->func_stx >> 2);
    VAR_8->dst_addr_hi = 0;
    VAR_8->len = (sizeof(struct host_func_stats) >> 2);
    VAR_8->comp_addr_lo = FUNC_4(FUNC_2(VAR_7, VAR_9));
    VAR_8->comp_addr_hi = FUNC_3(FUNC_2(VAR_7, VAR_9));
    VAR_8->comp_val = VAR_1;

    *VAR_9 = 0;
}
