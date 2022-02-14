
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int matchtype_t ;
struct TYPE_9__ {TYPE_3__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int ds_flags; int ds_snapnames_zapobj; } ;
struct TYPE_10__ {TYPE_1__* dd_pool; } ;
struct TYPE_8__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,int ,int *) ;
 int FUNC_3 (int *,int ,char const*,int *) ;
 int FUNC_4 (int *,int ,char const*,int,int *) ;

int
FUNC_5(dsl_dataset_t *VAR_4, const char *VAR_5, dmu_tx_t *VAR_6,
    boolean_t VAR_7)
{
 objset_t *VAR_8 = VAR_4->ds_dir->dd_pool->dp_meta_objset;
 uint64_t VAR_9 = FUNC_0(VAR_4)->ds_snapnames_zapobj;
 matchtype_t VAR_10 = 0;
 int VAR_11;

 FUNC_1(VAR_4->ds_dir);

 if (FUNC_0(VAR_4)->ds_flags & VAR_1)
  VAR_10 = VAR_3;

 VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_5, VAR_10, VAR_6);
 if (VAR_11 == VAR_2 && (VAR_10 & VAR_3))
  VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_5, VAR_6);

 if (VAR_11 == 0 && VAR_7)
  FUNC_2(VAR_4->ds_dir, -1,
      VAR_0, VAR_6);

 return (VAR_11);
}
