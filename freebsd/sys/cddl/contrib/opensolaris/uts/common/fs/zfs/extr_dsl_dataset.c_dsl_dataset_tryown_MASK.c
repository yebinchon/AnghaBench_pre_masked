
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ds_lock; int * ds_owner; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_6__ {int dd_pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

boolean_t
FUNC_6(dsl_dataset_t *VAR_2, void *VAR_3)
{
 boolean_t VAR_4 = VAR_0;

 FUNC_0(FUNC_3(VAR_2->ds_dir->dd_pool));
 FUNC_4(&VAR_2->ds_lock);
 if (VAR_2->ds_owner == ((void*)0) && !FUNC_1(VAR_2)) {
  VAR_2->ds_owner = VAR_3;
  FUNC_2(VAR_2, VAR_3);
  VAR_4 = VAR_1;
 }
 FUNC_5(&VAR_2->ds_lock);
 return (VAR_4);
}
