
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ ts_txg; scalar_t__ ts_time; } ;
typedef TYPE_1__ trim_seg_t ;
struct TYPE_7__ {int tm_head; int tm_lock; } ;
typedef TYPE_2__ trim_map_t ;
typedef scalar_t__ hrtime_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static trim_seg_t *
FUNC_4(trim_map_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2, hrtime_t VAR_3,
    boolean_t VAR_4)
{
 trim_seg_t *VAR_5;

 FUNC_0(FUNC_1(&VAR_0->tm_lock));
 FUNC_2(VAR_2 >= VAR_1);

 VAR_5 = FUNC_3(&VAR_0->tm_head);
 if (VAR_5 != ((void*)0) && VAR_5->ts_txg <= VAR_2 &&
     (VAR_5->ts_txg <= VAR_1 || VAR_5->ts_time <= VAR_3 || VAR_4))
  return (VAR_5);
 return (((void*)0));
}
