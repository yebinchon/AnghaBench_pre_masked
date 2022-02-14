
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {void* cbr_arg; TYPE_1__* cbr_pr; } ;
typedef TYPE_2__ dsl_prop_cb_record_t ;
struct TYPE_13__ {int dd_lock; } ;
typedef TYPE_3__ dsl_dir_t ;
struct TYPE_14__ {int ds_prop_cbs; TYPE_3__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
struct TYPE_11__ {int pr_cbs; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dsl_dataset_t *VAR_0, void *VAR_1)
{
 dsl_prop_cb_record_t *VAR_2, *VAR_3;

 dsl_dir_t *VAR_4 = VAR_0->ds_dir;

 FUNC_4(&VAR_4->dd_lock);
 VAR_3 = FUNC_1(&VAR_0->ds_prop_cbs);
 while (VAR_3 != ((void*)0)) {
  VAR_2 = VAR_3;
  VAR_3 = FUNC_2(&VAR_0->ds_prop_cbs, VAR_2);
  if (VAR_2->cbr_arg == VAR_1) {
   FUNC_3(&VAR_0->ds_prop_cbs, VAR_2);
   FUNC_3(&VAR_2->cbr_pr->pr_cbs, VAR_2);
   FUNC_0(VAR_2, sizeof (dsl_prop_cb_record_t));
  }
 }
 FUNC_5(&VAR_4->dd_lock);
}
