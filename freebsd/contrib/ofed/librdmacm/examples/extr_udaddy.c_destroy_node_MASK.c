
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmatest_node {TYPE_1__* cma_id; scalar_t__ pd; scalar_t__ mem; int mr; scalar_t__ cq; scalar_t__ ah; } ;
struct TYPE_3__ {scalar_t__ qp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct cmatest_node *VAR_0)
{
 if (!VAR_0->cma_id)
  return;

 if (VAR_0->ah)
  FUNC_3(VAR_0->ah);

 if (VAR_0->cma_id->qp)
  FUNC_6(VAR_0->cma_id);

 if (VAR_0->cq)
  FUNC_4(VAR_0->cq);

 if (VAR_0->mem) {
  FUNC_2(VAR_0->mr);
  FUNC_0(VAR_0->mem);
 }

 if (VAR_0->pd)
  FUNC_1(VAR_0->pd);


 FUNC_5(VAR_0->cma_id);
}
