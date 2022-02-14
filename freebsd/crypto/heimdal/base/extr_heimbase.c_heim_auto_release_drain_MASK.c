
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int heim_object_t ;
typedef TYPE_1__* heim_auto_release_t ;
struct TYPE_3__ {int pool_mutex; int pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(heim_auto_release_t VAR_0)
{
    heim_object_t VAR_1;



    FUNC_1(&VAR_0->pool_mutex);
    while(!FUNC_3(&VAR_0->pool)) {
 VAR_1 = FUNC_4(&VAR_0->pool);
 FUNC_2(&VAR_0->pool_mutex);
 FUNC_5(FUNC_0(VAR_1));
 FUNC_1(&VAR_0->pool_mutex);
    }
    FUNC_2(&VAR_0->pool_mutex);
}
