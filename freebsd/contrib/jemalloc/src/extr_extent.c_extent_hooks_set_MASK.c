
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int mtx; } ;
typedef TYPE_1__ background_thread_info_t ;
struct TYPE_7__ {int base; } ;
typedef TYPE_2__ arena_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

extent_hooks_t *
FUNC_5(tsd_t *VAR_1, arena_t *VAR_2, extent_hooks_t *VAR_3) {
 background_thread_info_t *VAR_4;
 if (VAR_0) {
  VAR_4 = FUNC_0(VAR_2);
  FUNC_2(FUNC_4(VAR_1), &VAR_4->mtx);
 }
 extent_hooks_t *VAR_5 = FUNC_1(VAR_2->base, VAR_3);
 if (VAR_0) {
  FUNC_3(FUNC_4(VAR_1), &VAR_4->mtx);
 }

 return VAR_5;
}
