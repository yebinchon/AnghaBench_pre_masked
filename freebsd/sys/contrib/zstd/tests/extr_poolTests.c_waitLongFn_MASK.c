
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ val; scalar_t__ max; scalar_t__ countdown; int mut; int cond; } ;
typedef TYPE_1__ poolTest_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0) {
  poolTest_t* const VAR_1 = (poolTest_t*) VAR_0;
  FUNC_2(&VAR_1->mut);
  VAR_1->val++;
  if (VAR_1->val > VAR_1->max)
      VAR_1->max = VAR_1->val;
  FUNC_3(&VAR_1->mut);

  FUNC_0(10);

  FUNC_2(&VAR_1->mut);
  VAR_1->val--;
  VAR_1->countdown--;
  if (VAR_1->countdown == 0)
      FUNC_1(&VAR_1->cond);
  FUNC_3(&VAR_1->mut);
}
