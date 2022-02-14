
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct calculate_send_arg {int compressed; int uncompressed; int member_0; } ;
typedef int dsl_pool_t ;
struct TYPE_9__ {int ds_is_snapshot; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ ds_creation_txg; } ;
struct TYPE_8__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,scalar_t__*) ;
 int VAR_3 ;
 TYPE_4__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int ,int ,struct calculate_send_arg*) ;

int
FUNC_6(dsl_dataset_t *VAR_4, uint64_t VAR_5,
    boolean_t VAR_6, uint64_t *VAR_7)
{
 dsl_pool_t *VAR_8 = VAR_4->ds_dir->dd_pool;
 int VAR_9;
 struct calculate_send_arg VAR_10 = { 0 };

 FUNC_0(FUNC_4(VAR_8));


 if (!VAR_4->ds_is_snapshot)
  return (FUNC_1(VAR_0));


 if (VAR_5 >= FUNC_3(VAR_4)->ds_creation_txg) {
  return (FUNC_1(VAR_1));
 }





 VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_2,
     VAR_3, &VAR_10);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_2(VAR_4, VAR_10.uncompressed,
     VAR_10.compressed, VAR_6, VAR_7);
 return (VAR_9);
}
