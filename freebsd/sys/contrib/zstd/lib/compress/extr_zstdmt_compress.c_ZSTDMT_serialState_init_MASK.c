
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ldmWindowCond; int ldmWindowMutex; int cond; int mutex; } ;
typedef TYPE_1__ serialState_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(serialState_t* VAR_0)
{
    int VAR_1 = 0;
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
    VAR_1 |= FUNC_1(&VAR_0->mutex, ((void*)0));
    VAR_1 |= FUNC_0(&VAR_0->cond, ((void*)0));
    VAR_1 |= FUNC_1(&VAR_0->ldmWindowMutex, ((void*)0));
    VAR_1 |= FUNC_0(&VAR_0->ldmWindowCond, ((void*)0));
    return VAR_1;
}
