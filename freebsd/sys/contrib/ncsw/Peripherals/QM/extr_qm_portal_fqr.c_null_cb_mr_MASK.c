
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_LowQmPortal; } ;
typedef TYPE_4__ t_QmPortal ;
typedef struct qman_fq* t_Handle ;
struct qman_fq {int dummy; } ;
struct TYPE_7__ {int portal; } ;
struct qm_mr_entry {int verb; TYPE_3__ dcern; } ;
struct TYPE_5__ {int cpu; } ;
struct TYPE_6__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (struct qman_fq*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(t_Handle VAR_1,
                       t_Handle VAR_2,
                       struct qman_fq *VAR_3,
                       const struct qm_mr_entry *VAR_4)
{
    t_QmPortal *VAR_5 = (t_QmPortal *)VAR_2;

    FUNC_0(VAR_3);FUNC_0(VAR_1);

    if ((VAR_4->verb & VAR_0) == VAR_0)
        FUNC_1("Ignoring unowned MR frame on cpu %d, dc-portal 0x%02x.\n",
                 VAR_5->p_LowQmPortal->config.cpu,VAR_4->dcern.portal);
    else
        FUNC_1("Ignoring unowned MR frame on cpu %d, verb 0x%02x.\n",
                 VAR_5->p_LowQmPortal->config.cpu,VAR_4->verb);
}
