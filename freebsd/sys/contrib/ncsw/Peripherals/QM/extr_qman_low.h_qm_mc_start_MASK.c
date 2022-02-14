
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_mc {scalar_t__ state; struct qm_mc_command* cr; } ;
struct qm_portal {struct qm_mc mc; } ;
struct qm_mc_command {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qm_mc_command*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline__ struct qm_mc_command *FUNC_2(struct qm_portal *VAR_2)
{
    register struct qm_mc *VAR_3 = &VAR_2->mc;




    FUNC_1(VAR_3->cr);
    return VAR_3->cr;
}
