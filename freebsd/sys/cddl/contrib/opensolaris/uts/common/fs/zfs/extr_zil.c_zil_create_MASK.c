
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int zl_dmu_pool; TYPE_7__* zl_os; int zl_spa; int zl_destroy_txg; TYPE_3__* zl_header; } ;
typedef TYPE_2__ zilog_t ;
struct TYPE_11__ {scalar_t__ zh_claim_txg; scalar_t__ zh_replay_seq; int zh_log; } ;
typedef TYPE_3__ zil_header_t ;
typedef int uint64_t ;
typedef int lwb_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int blk ;
struct TYPE_12__ {TYPE_1__* os_dsl_dataset; } ;
struct TYPE_9__ {int ds_object; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (int ,int ,int ,int *,int *,int ,int *) ;
 int FUNC_16 (int ,int ,int *) ;

__attribute__((used)) static lwb_t *
FUNC_17(zilog_t *VAR_3)
{
 const zil_header_t *VAR_4 = VAR_3->zl_header;
 lwb_t *VAR_5 = ((void*)0);
 uint64_t VAR_6 = 0;
 dmu_tx_t *VAR_7 = ((void*)0);
 blkptr_t VAR_8;
 int VAR_9 = 0;
 boolean_t VAR_10 = VAR_0;




 FUNC_12(VAR_3->zl_dmu_pool, VAR_3->zl_destroy_txg);

 FUNC_0(VAR_4->zh_claim_txg == 0);
 FUNC_0(VAR_4->zh_replay_seq == 0);

 VAR_8 = VAR_4->zh_log;






 if (FUNC_1(&VAR_8) || FUNC_2(&VAR_8)) {
  VAR_7 = FUNC_9(VAR_3->zl_os);
  FUNC_4(FUNC_7(VAR_7, VAR_1));
  FUNC_11(FUNC_6(VAR_3->zl_os), VAR_7);
  VAR_6 = FUNC_10(VAR_7);

  if (!FUNC_1(&VAR_8)) {
   FUNC_16(VAR_3->zl_spa, VAR_6, &VAR_8);
   FUNC_3(&VAR_8);
  }

  VAR_9 = FUNC_15(VAR_3->zl_spa,
      VAR_3->zl_os->os_dsl_dataset->ds_object, VAR_6, &VAR_8, ((void*)0),
      VAR_2, &VAR_10);

  if (VAR_9 == 0)
   FUNC_14(VAR_3, &VAR_8);
 }




 if (VAR_9 == 0)
  VAR_5 = FUNC_13(VAR_3, &VAR_8, VAR_10, VAR_6);






 if (VAR_7 != ((void*)0)) {
  FUNC_8(VAR_7);
  FUNC_12(VAR_3->zl_dmu_pool, VAR_6);
 }

 FUNC_0(FUNC_5(&VAR_8, &VAR_4->zh_log, sizeof (VAR_8)) == 0);

 return (VAR_5);
}
