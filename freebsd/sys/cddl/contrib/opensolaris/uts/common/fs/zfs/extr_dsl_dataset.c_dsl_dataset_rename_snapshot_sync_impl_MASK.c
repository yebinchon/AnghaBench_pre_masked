
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_15__ {int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_16__ {int ds_object; int ds_snapname; int ds_lock; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_17__ {char* ddrsa_oldsnapname; char* ddrsa_newsnapname; char* ddrsa_fsname; int * ddrsa_tx; } ;
typedef TYPE_3__ dsl_dataset_rename_snapshot_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {int ds_snapnames_zapobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,TYPE_2__**) ;
 TYPE_10__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int *) ;
 int FUNC_6 (TYPE_2__*,char*,int *,int ) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,char*,char*,char*) ;
 int FUNC_12 (TYPE_2__*,char*,int *,char*,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ,int ,int,int,int *,int *) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static int
FUNC_17(dsl_pool_t *VAR_5,
    dsl_dataset_t *VAR_6, void *VAR_7)
{





 dsl_dataset_rename_snapshot_arg_t *VAR_8 = VAR_7;
 dsl_dataset_t *VAR_9;
 uint64_t VAR_10;
 dmu_tx_t *VAR_11 = VAR_8->ddrsa_tx;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_6, VAR_8->ddrsa_oldsnapname, &VAR_10);
 FUNC_0(VAR_12 == 0 || VAR_12 == VAR_1);
 if (VAR_12 == VAR_1) {

  return (0);
 }

 FUNC_1(FUNC_2(VAR_5, VAR_10, VAR_2, &VAR_9));


 FUNC_12(VAR_9, "rename", VAR_11,
     "-> @%s", VAR_8->ddrsa_newsnapname);

 FUNC_1(FUNC_6(VAR_6, VAR_8->ddrsa_oldsnapname, VAR_11,
     VAR_0));
 FUNC_9(&VAR_9->ds_lock);
 (void) FUNC_13(VAR_9->ds_snapname, VAR_8->ddrsa_newsnapname);
 FUNC_10(&VAR_9->ds_lock);
 FUNC_1(FUNC_14(VAR_5->dp_meta_objset,
     FUNC_3(VAR_6)->ds_snapnames_zapobj,
     VAR_9->ds_snapname, 8, 1, &VAR_9->ds_object, VAR_11));
 FUNC_4(VAR_9, VAR_2);

 return (0);
}
