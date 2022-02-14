
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ds_lock; int ds_snapname; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6(dsl_dataset_t *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_3(&VAR_0->ds_lock);
 int VAR_1 = FUNC_2(VAR_0->ds_dir) + 1 + FUNC_5(VAR_0->ds_snapname);
 FUNC_4(&VAR_0->ds_lock);
 return (VAR_1);
}
