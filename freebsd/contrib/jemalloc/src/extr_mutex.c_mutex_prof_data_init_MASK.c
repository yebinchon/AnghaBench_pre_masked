
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * prev_owner; int tot_wait_time; int max_wait_time; } ;
typedef TYPE_1__ mutex_prof_data_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(mutex_prof_data_t *VAR_0) {
 FUNC_0(VAR_0, 0, sizeof(mutex_prof_data_t));
 FUNC_1(&VAR_0->max_wait_time, 0);
 FUNC_1(&VAR_0->tot_wait_time, 0);
 VAR_0->prev_owner = ((void*)0);
}
