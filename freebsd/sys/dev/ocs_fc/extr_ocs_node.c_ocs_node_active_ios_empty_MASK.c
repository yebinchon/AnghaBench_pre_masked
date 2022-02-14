
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_ios_lock; int active_ios; } ;
typedef TYPE_1__ ocs_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(ocs_node_t *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->active_ios_lock);
  VAR_1 = FUNC_0(&VAR_0->active_ios);
 FUNC_2(&VAR_0->active_ios_lock);
 return VAR_1;
}
