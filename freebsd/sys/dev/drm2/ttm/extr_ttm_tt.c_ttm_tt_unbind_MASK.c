
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; TYPE_1__* func; } ;
struct TYPE_2__ {int (* unbind ) (struct ttm_tt*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ttm_tt*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2(struct ttm_tt *VAR_2)
{
 int VAR_3;

 if (VAR_2->state == VAR_0) {
  VAR_3 = VAR_2->func->unbind(VAR_2);
  FUNC_0(VAR_3 == 0);
  VAR_2->state = VAR_1;
 }
}
