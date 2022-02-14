
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmatest_node {TYPE_1__* cma_id; scalar_t__ pd; scalar_t__ mem; int mr; scalar_t__* cq; } ;
struct TYPE_3__ {scalar_t__ qp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct cmatest_node *VAR_2)
{
 if (!VAR_2->cma_id)
  return;

 if (VAR_2->cma_id->qp)
  FUNC_5(VAR_2->cma_id);

 if (VAR_2->cq[VAR_1])
  FUNC_3(VAR_2->cq[VAR_1]);

 if (VAR_2->cq[VAR_0])
  FUNC_3(VAR_2->cq[VAR_0]);

 if (VAR_2->mem) {
  FUNC_2(VAR_2->mr);
  FUNC_0(VAR_2->mem);
 }

 if (VAR_2->pd)
  FUNC_1(VAR_2->pd);


 FUNC_4(VAR_2->cma_id);
}
