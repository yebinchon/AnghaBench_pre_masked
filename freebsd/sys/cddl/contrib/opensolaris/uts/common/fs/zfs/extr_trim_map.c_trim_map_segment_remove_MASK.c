
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ ts_start; scalar_t__ ts_end; int ts_time; int ts_txg; } ;
typedef TYPE_1__ trim_seg_t ;
struct TYPE_15__ {int tm_queued_frees; int tm_lock; } ;
typedef TYPE_2__ trim_map_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_8(trim_map_t *VAR_2, trim_seg_t *VAR_3, uint64_t VAR_4,
    uint64_t VAR_5)
{
 trim_seg_t *VAR_6;
 boolean_t VAR_7, VAR_8;

 FUNC_0(FUNC_1(&VAR_2->tm_lock));

 VAR_7 = (VAR_3->ts_start < VAR_4);
 VAR_8 = (VAR_3->ts_end > VAR_5);

 FUNC_3(VAR_2, VAR_3);
 if (VAR_7 && VAR_8) {
  VAR_6 = FUNC_6(sizeof (*VAR_6), VAR_1);
  VAR_6->ts_start = VAR_5;
  VAR_6->ts_end = VAR_3->ts_end;
  VAR_6->ts_txg = VAR_3->ts_txg;
  VAR_6->ts_time = VAR_3->ts_time;
  VAR_3->ts_end = VAR_4;
  FUNC_4(&VAR_2->tm_queued_frees, VAR_6, VAR_3, VAR_0);
  FUNC_2(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_6);
 } else if (VAR_7) {
  VAR_3->ts_end = VAR_4;
  FUNC_2(VAR_2, VAR_3);
 } else if (VAR_8) {
  VAR_3->ts_start = VAR_5;
  FUNC_2(VAR_2, VAR_3);
 } else {
  FUNC_5(&VAR_2->tm_queued_frees, VAR_3);
  FUNC_7(VAR_3, sizeof (*VAR_3));
 }
}
