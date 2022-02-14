
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ polling; int holdoff_tmr; } ;
struct sge_qset {TYPE_1__ rspq; } ;
struct qset_params {int coalesce_usecs; } ;


 int FUNC_0 (int,unsigned int) ;

void
FUNC_1(struct sge_qset *VAR_0, const struct qset_params *VAR_1)
{

 VAR_0->rspq.holdoff_tmr = FUNC_0(VAR_1->coalesce_usecs * 10, 1U);
 VAR_0->rspq.polling = 0 ;
}
