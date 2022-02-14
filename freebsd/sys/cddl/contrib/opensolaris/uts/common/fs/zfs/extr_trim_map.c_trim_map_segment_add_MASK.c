
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ ts_start; scalar_t__ ts_end; void* ts_time; scalar_t__ ts_txg; } ;
typedef TYPE_1__ trim_seg_t ;
struct TYPE_16__ {int tm_queued_frees; int tm_lock; } ;
typedef TYPE_2__ trim_map_t ;
typedef void* hrtime_t ;
typedef int boolean_t ;
typedef int avl_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 void* FUNC_9 () ;
 TYPE_1__* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_12(trim_map_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 avl_index_t VAR_7;
 trim_seg_t VAR_8, *VAR_9, *VAR_10, *VAR_11;
 boolean_t VAR_12, VAR_13;
 hrtime_t VAR_14;

 FUNC_0(FUNC_1(&VAR_3->tm_lock));
 FUNC_4(VAR_4 < VAR_5);

 VAR_14 = FUNC_9();
 VAR_8.ts_start = VAR_4;
 VAR_8.ts_end = VAR_5;

 VAR_11 = FUNC_5(&VAR_3->tm_queued_frees, &VAR_8, &VAR_7);
 if (VAR_11 != ((void*)0)) {
  if (VAR_4 < VAR_11->ts_start)
   FUNC_12(VAR_3, VAR_4, VAR_11->ts_start, VAR_6);
  if (VAR_5 > VAR_11->ts_end)
   FUNC_12(VAR_3, VAR_11->ts_end, VAR_5, VAR_6);
  return;
 }

 VAR_9 = FUNC_7(&VAR_3->tm_queued_frees, VAR_7, VAR_1);
 VAR_10 = FUNC_7(&VAR_3->tm_queued_frees, VAR_7, VAR_0);

 VAR_12 = (VAR_9 != ((void*)0) && VAR_9->ts_end == VAR_4);
 VAR_13 = (VAR_10 != ((void*)0) && VAR_10->ts_start == VAR_5);

 if (VAR_12 && VAR_13) {
  FUNC_8(&VAR_3->tm_queued_frees, VAR_9);
  FUNC_3(VAR_3, VAR_9);
  FUNC_3(VAR_3, VAR_10);
  VAR_10->ts_start = VAR_9->ts_start;
  VAR_10->ts_txg = VAR_6;
  VAR_10->ts_time = VAR_14;
  FUNC_2(VAR_3, VAR_10);
  FUNC_11(VAR_9, sizeof (*VAR_9));
 } else if (VAR_12) {
  FUNC_3(VAR_3, VAR_9);
  VAR_9->ts_end = VAR_5;
  VAR_9->ts_txg = VAR_6;
  VAR_9->ts_time = VAR_14;
  FUNC_2(VAR_3, VAR_9);
 } else if (VAR_13) {
  FUNC_3(VAR_3, VAR_10);
  VAR_10->ts_start = VAR_4;
  VAR_10->ts_txg = VAR_6;
  VAR_10->ts_time = VAR_14;
  FUNC_2(VAR_3, VAR_10);
 } else {
  VAR_11 = FUNC_10(sizeof (*VAR_11), VAR_2);
  VAR_11->ts_start = VAR_4;
  VAR_11->ts_end = VAR_5;
  VAR_11->ts_txg = VAR_6;
  VAR_11->ts_time = VAR_14;
  FUNC_6(&VAR_3->tm_queued_frees, VAR_11, VAR_7);
  FUNC_2(VAR_3, VAR_11);
 }
}
