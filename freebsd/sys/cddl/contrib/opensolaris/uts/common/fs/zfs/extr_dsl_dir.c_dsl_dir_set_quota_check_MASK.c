
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_9__ {int ddsqra_value; int ddsqra_source; int ddsqra_name; } ;
typedef TYPE_1__ dsl_dir_set_qr_arg_t ;
struct TYPE_10__ {TYPE_3__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {scalar_t__ dd_reserved; scalar_t__ dd_used_bytes; } ;
struct TYPE_11__ {int dd_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*,int ,int ,scalar_t__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_dir_set_qr_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_2(VAR_3);
 dsl_dataset_t *VAR_6;
 int VAR_7;
 uint64_t VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_5, VAR_4->ddsqra_name, VAR_1, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_7(VAR_6->ds_dir, "quota",
     VAR_4->ddsqra_source, VAR_4->ddsqra_value, &VAR_9);
 if (VAR_7 != 0) {
  FUNC_4(VAR_6, VAR_1);
  return (VAR_7);
 }

 if (VAR_9 == 0) {
  FUNC_4(VAR_6, VAR_1);
  return (0);
 }

 FUNC_8(&VAR_6->ds_dir->dd_lock);






 VAR_8 = FUNC_6(VAR_6->ds_dir);
 if ((FUNC_1(VAR_3) || VAR_8 == 0) &&
     (VAR_9 < FUNC_5(VAR_6->ds_dir)->dd_reserved ||
     VAR_9 < FUNC_5(VAR_6->ds_dir)->dd_used_bytes + VAR_8)) {
  VAR_7 = FUNC_0(VAR_0);
 }
 FUNC_9(&VAR_6->ds_dir->dd_lock);
 FUNC_4(VAR_6, VAR_1);
 return (VAR_7);
}
