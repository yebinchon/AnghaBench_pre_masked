
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtree_mem_dqinfo {int dummy; } ;
struct TYPE_2__ {int dqb_curinodes; int dqb_curspace; } ;
struct dquot {TYPE_1__ dq_dqb; int dq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct qtree_mem_dqinfo*,struct dquot*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct qtree_mem_dqinfo *VAR_1, struct dquot *VAR_2)
{
 if (FUNC_1(VAR_0, &VAR_2->dq_flags) &&
     !(VAR_2->dq_dqb.dqb_curinodes | VAR_2->dq_dqb.dqb_curspace))
  return FUNC_0(VAR_1, VAR_2);
 return 0;
}
