
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_rspq {int unhandled_irqs; } ;
struct sge_qset {struct sge_rspq rspq; TYPE_1__* port; } ;
typedef int adapter_t ;
struct TYPE_2__ {int * adapter; } ;


 scalar_t__ FUNC_0 (int *,struct sge_rspq*) ;

void
FUNC_1(void *VAR_0)
{
 struct sge_qset *VAR_1 = VAR_0;
 adapter_t *VAR_2 = VAR_1->port->adapter;
 struct sge_rspq *VAR_3 = &VAR_1->rspq;

 if (FUNC_0(VAR_2, VAR_3) == 0)
  VAR_3->unhandled_irqs++;
}
