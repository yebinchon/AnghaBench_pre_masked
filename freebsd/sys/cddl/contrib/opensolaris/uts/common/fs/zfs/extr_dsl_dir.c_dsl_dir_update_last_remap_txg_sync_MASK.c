
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int last_remap_txg ;
struct TYPE_6__ {int dd_object; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {scalar_t__ ddlrta_txg; TYPE_2__* ddulrta_dd; } ;
typedef TYPE_3__ ddulrt_arg_t ;
struct TYPE_5__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int,int,scalar_t__*) ;
 int FUNC_3 (int *,int ,int ,int,int,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, dmu_tx_t *VAR_2)
{
 ddulrt_arg_t *VAR_3 = VAR_1;
 uint64_t VAR_4;
 dsl_dir_t *VAR_5 = VAR_3->ddulrta_dd;
 objset_t *VAR_6 = VAR_5->dd_pool->dp_meta_objset;

 FUNC_1(VAR_5, VAR_2);
 if (FUNC_2(VAR_6, VAR_5->dd_object, VAR_0,
     sizeof (VAR_4), 1, &VAR_4) != 0 ||
     VAR_4 < VAR_3->ddlrta_txg) {
  FUNC_0(FUNC_3(VAR_6, VAR_5->dd_object, VAR_0,
      sizeof (VAR_3->ddlrta_txg), 1, &VAR_3->ddlrta_txg, VAR_2));
 }
}
