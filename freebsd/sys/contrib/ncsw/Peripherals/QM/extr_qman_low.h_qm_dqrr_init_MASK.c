
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int t_Error ;
struct qm_portal_config {int cpu; } ;
struct TYPE_2__ {int addr_ce; } ;
struct qm_dqrr {int ring; int pi; int ci; int cursor; int vbit; int ithresh; int dmode; int cmode; int flags; int pmode; int fill; } ;
struct qm_portal {TYPE_1__ addr; struct qm_portal_config config; struct qm_dqrr dqrr; } ;
typedef int e_QmPortalProduceMode ;
typedef int e_QmPortalDqrrConsumeMode ;
typedef int e_QmPortalDequeueMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct qm_portal*,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static __inline__ t_Error FUNC_7(struct qm_portal *VAR_16, e_QmPortalDequeueMode VAR_17,
        e_QmPortalProduceMode VAR_18, e_QmPortalDqrrConsumeMode VAR_19,
        uint8_t VAR_20, int VAR_21, int VAR_22)
{
    register struct qm_dqrr *VAR_23 = &VAR_16->dqrr;
    const struct qm_portal_config *VAR_24 = &VAR_16->config;
    uint32_t VAR_25;

    if (FUNC_2(VAR_16, VAR_11))
        return FUNC_0(VAR_8);
    if ((VAR_21 || VAR_22) && (VAR_24->cpu == -1))
        return FUNC_0(VAR_9);

    FUNC_6(VAR_6, 0);
    FUNC_6(VAR_7, 0);
    FUNC_6(VAR_4, 0);
    VAR_23->ring = FUNC_4(VAR_16->addr.addr_ce, VAR_1);
    VAR_23->pi = (uint8_t)(FUNC_5(VAR_5) & (VAR_14 - 1));
    VAR_23->ci = (uint8_t)(FUNC_5(VAR_2) & (VAR_14 - 1));
    VAR_23->cursor = VAR_23->ring + VAR_23->ci;
    VAR_23->fill = FUNC_3(VAR_14, VAR_23->ci, VAR_23->pi);
    VAR_23->vbit = (uint8_t)((FUNC_5(VAR_5) & VAR_14) ?
            VAR_15 : 0);
    VAR_23->ithresh = (uint8_t)FUNC_5(VAR_3);
    FUNC_1(VAR_18);


    VAR_25 = (FUNC_5(VAR_0) & 0xff000f00) |
        ((VAR_20 & (VAR_14 - 1)) << 20) |
        ((VAR_17 & 1) << 18) |
        ((VAR_19 & 3) << 16) |
        (VAR_21 ? 0x80 : 0) |
        (0 ? 0x40 : 0) |
        (VAR_22 ? 0x20 : 0) |
        (0 ? 0x10 : 0);
    FUNC_6(VAR_0, VAR_25);
    return VAR_10;
}
