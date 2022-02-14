
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int zb_objset; } ;
typedef TYPE_2__ zbookmark_phys_t ;
typedef int scan_prefetch_ctx_t ;
struct TYPE_15__ {TYPE_2__ scn_bookmark; } ;
struct TYPE_17__ {int scn_objsets_visited_this_txg; TYPE_1__ scn_phys; TYPE_2__ scn_prefetch_bookmark; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_18__ {int ds_object; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,char*,char*) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*,int *,TYPE_4__*,TYPE_3__*,int ,int *) ;
 int * FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(dsl_scan_t *VAR_6, dsl_dataset_t *VAR_7, blkptr_t *VAR_8,
    dmu_tx_t *VAR_9)
{
 zbookmark_phys_t VAR_10;
 scan_prefetch_ctx_t *VAR_11;

 FUNC_0(&VAR_10, VAR_7 ? VAR_7->ds_object : VAR_0,
     VAR_5, VAR_4, VAR_3);

 if (FUNC_1(&VAR_6->scn_phys.scn_bookmark)) {
  FUNC_0(&VAR_6->scn_prefetch_bookmark,
      VAR_10.zb_objset, 0, 0, 0);
 } else {
  VAR_6->scn_prefetch_bookmark = VAR_6->scn_phys.scn_bookmark;
 }

 VAR_6->scn_objsets_visited_this_txg++;

 VAR_11 = FUNC_5(VAR_6, ((void*)0), VAR_2);
 FUNC_3(VAR_11, VAR_8, &VAR_10);
 FUNC_6(VAR_11, VAR_2);

 FUNC_4(VAR_8, &VAR_10, ((void*)0), VAR_7, VAR_6, VAR_1, VAR_9);

 FUNC_2(VAR_7, "finished scan%s", "");
}
