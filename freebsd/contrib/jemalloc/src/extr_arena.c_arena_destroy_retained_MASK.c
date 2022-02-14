
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int extents_retained; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int *,TYPE_1__*,int **,int *) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *,TYPE_1__*,int **,int *,int ) ;

__attribute__((used)) static void
FUNC_3(tsdn_t *VAR_0, arena_t *VAR_1) {
 extent_hooks_t *VAR_2 = FUNC_1(VAR_1);
 extent_t *VAR_3;
 while ((VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_2,
     &VAR_1->extents_retained, 0)) != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1, &VAR_2, VAR_3);
 }
}
