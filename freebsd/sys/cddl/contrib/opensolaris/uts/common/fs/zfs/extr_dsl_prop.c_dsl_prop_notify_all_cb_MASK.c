
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int value ;
typedef int uint64_t ;
struct TYPE_14__ {TYPE_5__* cbr_ds; int cbr_arg; int (* cbr_func ) (int ,int ) ;TYPE_1__* cbr_pr; int pr_cbs; } ;
typedef TYPE_2__ dsl_prop_record_t ;
typedef TYPE_2__ dsl_prop_cb_record_t ;
typedef int dsl_pool_t ;
struct TYPE_15__ {int dd_lock; int dd_props; } ;
typedef TYPE_4__ dsl_dir_t ;
struct TYPE_16__ {TYPE_4__* ds_dir; } ;
typedef TYPE_5__ dsl_dataset_t ;
struct TYPE_13__ {int pr_propname; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ,int,int,int *,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(dsl_pool_t *VAR_1, dsl_dataset_t *VAR_2, void *VAR_3)
{
 dsl_dir_t *VAR_4 = VAR_2->ds_dir;
 dsl_prop_record_t *VAR_5;
 dsl_prop_cb_record_t *VAR_6;

 FUNC_5(&VAR_4->dd_lock);
 for (VAR_5 = FUNC_3(&VAR_4->dd_props);
     VAR_5; VAR_5 = FUNC_4(&VAR_4->dd_props, VAR_5)) {
  for (VAR_6 = FUNC_3(&VAR_5->pr_cbs); VAR_6;
      VAR_6 = FUNC_4(&VAR_5->pr_cbs, VAR_6)) {
   uint64_t VAR_7;
   if (VAR_2 != VAR_6->cbr_ds &&
       !FUNC_1(VAR_1, VAR_6->cbr_ds, VAR_0))
    continue;

   if (FUNC_2(VAR_6->cbr_ds,
       VAR_6->cbr_pr->pr_propname, sizeof (VAR_7), 1,
       &VAR_7, ((void*)0)) == 0)
    VAR_6->cbr_func(VAR_6->cbr_arg, VAR_7);

   if (VAR_2 != VAR_6->cbr_ds)
    FUNC_0(VAR_6->cbr_ds, VAR_0);
  }
 }
 FUNC_6(&VAR_4->dd_lock);

 return (0);
}
