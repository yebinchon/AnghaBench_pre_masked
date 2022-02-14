
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct qm_mr_entry const* t_Handle ;
struct qman_fq {scalar_t__ state; int flags; } ;
struct qm_mr_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qm_mr_entry const*) ;
 int FUNC_1 (struct qman_fq*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(t_Handle VAR_2,
                   t_Handle VAR_3,
                   struct qman_fq *VAR_4,
                   const struct qm_mr_entry *VAR_5)
{
    FUNC_0(VAR_5);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    if (VAR_4->state == VAR_1 &&
        !(VAR_4->flags & VAR_0))
        FUNC_1(VAR_4);
}
