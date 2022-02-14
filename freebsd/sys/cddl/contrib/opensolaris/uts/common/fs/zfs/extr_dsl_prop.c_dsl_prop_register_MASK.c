
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {int pr_cbs; } ;
typedef TYPE_1__ dsl_prop_record_t ;
typedef int (* dsl_prop_changed_cb_t ) (void*,int ) ;
struct TYPE_14__ {void* cbr_arg; int (* cbr_func ) (void*,int ) ;TYPE_1__* cbr_pr; TYPE_4__* cbr_ds; } ;
typedef TYPE_2__ dsl_prop_cb_record_t ;
typedef int dsl_pool_t ;
struct TYPE_15__ {int dd_lock; int * dd_pool; } ;
typedef TYPE_3__ dsl_dir_t ;
struct TYPE_16__ {int ds_prop_cbs; TYPE_3__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,char const*,int *) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,char const*) ;
 TYPE_1__* FUNC_4 (TYPE_3__*,char const*) ;
 TYPE_2__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*,int ) ;

int
FUNC_10(dsl_dataset_t *VAR_1, const char *VAR_2,
    dsl_prop_changed_cb_t *VAR_3, void *VAR_4)
{
 dsl_dir_t *VAR_5 = VAR_1->ds_dir;
 dsl_pool_t *VAR_6 = VAR_5->dd_pool;
 uint64_t VAR_7;
 dsl_prop_record_t *VAR_8;
 dsl_prop_cb_record_t *VAR_9;
 int VAR_10;

 FUNC_0(FUNC_1(VAR_6));

 VAR_10 = FUNC_2(VAR_1, VAR_2, &VAR_7);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_9 = FUNC_5(sizeof (dsl_prop_cb_record_t), VAR_0);
 VAR_9->cbr_ds = VAR_1;
 VAR_9->cbr_func = *VAR_3;
 VAR_9->cbr_arg = VAR_4;

 FUNC_7(&VAR_5->dd_lock);
 VAR_8 = FUNC_4(VAR_5, VAR_2);
 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_3(VAR_5, VAR_2);
 VAR_9->cbr_pr = VAR_8;
 FUNC_6(&VAR_8->pr_cbs, VAR_9);
 FUNC_6(&VAR_1->ds_prop_cbs, VAR_9);
 FUNC_8(&VAR_5->dd_lock);

 VAR_9->cbr_func(VAR_9->cbr_arg, VAR_7);
 return (0);
}
