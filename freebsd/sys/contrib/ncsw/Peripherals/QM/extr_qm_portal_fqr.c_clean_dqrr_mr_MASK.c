
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_LowQmPortal; } ;
typedef TYPE_1__ t_QmPortal ;
struct qm_mr_entry {int dummy; } ;
struct qm_dqrr_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 struct qm_dqrr_entry* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 struct qm_mr_entry* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(t_QmPortal *VAR_0)
{
    struct qm_dqrr_entry *VAR_1;
    struct qm_mr_entry *VAR_2;
    int VAR_3 = 0;

    FUNC_8(VAR_0->p_LowQmPortal, 0);
    FUNC_9(VAR_0->p_LowQmPortal, 0);
drain_loop:
    FUNC_2(VAR_0->p_LowQmPortal);
    FUNC_3(VAR_0->p_LowQmPortal);
    FUNC_5(VAR_0->p_LowQmPortal);
    VAR_1 = FUNC_6(VAR_0->p_LowQmPortal);
    VAR_2 = FUNC_10(VAR_0->p_LowQmPortal);
    if (VAR_1) {
        FUNC_7(VAR_0->p_LowQmPortal);
        FUNC_1(VAR_0->p_LowQmPortal, 1);
    }
    if (VAR_2) {
    FUNC_11(VAR_0->p_LowQmPortal);
        FUNC_4(VAR_0->p_LowQmPortal, 1);
    }
    if (!VAR_1 && !VAR_2) {
    if (++VAR_3 < 5) {
    FUNC_0(1000);
    goto drain_loop;
    }
    } else {
    VAR_3 = 0;
    goto drain_loop;
    }
}
