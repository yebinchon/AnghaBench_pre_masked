
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_dqrr {scalar_t__ ci; int cursor; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct qm_portal*,int ) ;

__attribute__((used)) static __inline__ void FUNC_3(struct qm_portal *VAR_3)
{
    register struct qm_dqrr *VAR_4 = &VAR_3->dqrr;
    if (VAR_4->ci != FUNC_0(VAR_4->cursor))
        FUNC_1(VAR_2, VAR_0, ("Ignoring completed DQRR entries"));
    FUNC_2(VAR_3, VAR_1);
}
