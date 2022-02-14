
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_3__ {int extents_retained; int extents_muzzy; int extents_dirty; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(tsdn_t *VAR_0, arena_t *VAR_1) {
 FUNC_0(VAR_0, &VAR_1->extents_dirty);
 FUNC_0(VAR_0, &VAR_1->extents_muzzy);
 FUNC_0(VAR_0, &VAR_1->extents_retained);
}
