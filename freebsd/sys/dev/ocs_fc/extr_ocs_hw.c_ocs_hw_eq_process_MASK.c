
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
typedef size_t time_t ;
typedef int sli4_eqe_t ;
struct TYPE_9__ {size_t cq_count; int sli; int os; int * hw_cq; int cq_hash; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {TYPE_3__* queue; } ;
typedef TYPE_2__ hw_eq_t ;
struct TYPE_11__ {scalar_t__ n_posted; scalar_t__ posted_limit; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 size_t FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,TYPE_3__*,size_t) ;
 int FUNC_8 (int *,TYPE_3__*,size_t) ;
 int FUNC_9 (int *,TYPE_3__*,int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

int32_t
FUNC_11(ocs_hw_t *VAR_3, hw_eq_t *VAR_4, uint32_t VAR_5)
{
 uint8_t VAR_6[sizeof(sli4_eqe_t)] = { 0 };
 uint32_t VAR_7 = VAR_0;
 uint32_t VAR_8;
 time_t VAR_9;
 time_t VAR_10;

 VAR_8 = VAR_1;
 VAR_9 = FUNC_5();

 FUNC_0("");

 while (!VAR_7 && !FUNC_9(&VAR_3->sli, VAR_4->queue, VAR_6)) {
  uint16_t VAR_11 = 0;
  int32_t VAR_12;

  VAR_12 = FUNC_6(&VAR_3->sli, VAR_6, &VAR_11);
  if (FUNC_10(VAR_12)) {
   if (VAR_12 > 0) {
    uint32_t VAR_13;





    for (VAR_13 = 0; VAR_13 < VAR_3->cq_count; VAR_13++) {
     FUNC_2(VAR_3, VAR_3->hw_cq[VAR_13]);
    }
    continue;
   } else {
    return VAR_12;
   }
  } else {
   int32_t VAR_14 = FUNC_3(VAR_3->cq_hash, VAR_11);
   if (FUNC_1(VAR_14 >= 0)) {
    FUNC_2(VAR_3, VAR_3->hw_cq[VAR_14]);
   } else {
    FUNC_4(VAR_3->os, "bad CQ_ID %#06x\n", VAR_11);
   }
  }


  if (VAR_4->queue->n_posted > (VAR_4->queue->posted_limit)) {
   FUNC_7(&VAR_3->sli, VAR_4->queue, VAR_0);
  }

  if (VAR_8 && (--VAR_8 == 0)) {
   VAR_8 = VAR_1;
   VAR_10 = FUNC_5() - VAR_9;
   if (VAR_10 >= VAR_5) {
    VAR_7 = VAR_2;
   }
  }
 }
 FUNC_8(&VAR_3->sli, VAR_4->queue, VAR_2);

 return 0;
}
