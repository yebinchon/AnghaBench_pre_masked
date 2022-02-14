
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct xt_target {size_t family; int list; } ;
struct TYPE_2__ {int mutex; int target; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

int
FUNC_3(struct xt_target *VAR_1)
{
 u_int8_t VAR_2 = VAR_1->family;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_0[VAR_2].mutex);
 if (VAR_3 != 0)
  return VAR_3;
 FUNC_0(&VAR_1->list, &VAR_0[VAR_2].target);
 FUNC_2(&VAR_0[VAR_2].mutex);
 return VAR_3;
}
