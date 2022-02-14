
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ bin_t ;
struct TYPE_6__ {TYPE_1__* bins; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (int *,TYPE_2__*,int *,void*,int) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(tsdn_t *VAR_0, arena_t *VAR_1, extent_t *VAR_2, void *VAR_3) {
 szind_t VAR_4 = FUNC_1(VAR_2);
 bin_t *VAR_5 = &VAR_1->bins[VAR_4];

 FUNC_2(VAR_0, &VAR_5->lock);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 FUNC_3(VAR_0, &VAR_5->lock);
}
