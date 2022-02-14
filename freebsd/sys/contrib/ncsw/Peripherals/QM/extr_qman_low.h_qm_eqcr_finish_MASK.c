
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct qm_eqcr {scalar_t__ ci; int cursor; int busy; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct qm_portal*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static __inline__ void FUNC_5(struct qm_portal *VAR_6)
{
    register struct qm_eqcr *VAR_7 = &VAR_6->eqcr;
    uint8_t VAR_8 = (uint8_t)(FUNC_4(VAR_1) & (VAR_4 - 1));
    uint8_t VAR_9 = (uint8_t)(FUNC_4(VAR_0) & (VAR_4 - 1));




    if (VAR_8 != FUNC_1(VAR_7->cursor))
        FUNC_2(VAR_5, VAR_2, ("losing uncommitted EQCR entries"));
    if (VAR_9 != VAR_7->ci)
        FUNC_2(VAR_5, VAR_2, ("missing existing EQCR completions"));
    if (VAR_7->ci != FUNC_1(VAR_7->cursor))
        FUNC_2(VAR_5, VAR_2, ("EQCR destroyed unquiesced"));
    FUNC_3(VAR_6, VAR_3);
}
