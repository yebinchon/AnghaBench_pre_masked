
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int rtree_ctx_t ;
struct TYPE_6__ {int mtx; int delay_coalesce; } ;
typedef TYPE_1__ extents_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *,int *) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int *,int **,int *,TYPE_1__*,int *,int*,int) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int * FUNC_15 (int *,int *,int *,uintptr_t,int) ;
 int * FUNC_16 (int *,int *) ;

__attribute__((used)) static void
FUNC_17(tsdn_t *VAR_6, arena_t *VAR_7, extent_hooks_t **VAR_8,
    extents_t *VAR_9, extent_t *VAR_10, bool VAR_11) {
 rtree_ctx_t VAR_12;
 rtree_ctx_t *VAR_13 = FUNC_16(VAR_6, &VAR_12);

 FUNC_0((FUNC_12(VAR_9) != VAR_3 &&
     FUNC_12(VAR_9) != VAR_4) ||
     !FUNC_11(VAR_10));

 FUNC_13(VAR_6, &VAR_9->mtx);
 FUNC_3(VAR_7, VAR_8);

 FUNC_9(VAR_10, VAR_1);
 if (FUNC_6(VAR_10)) {
  FUNC_4(VAR_6, VAR_13, VAR_10);
  FUNC_7(VAR_10, 0);
 }

 FUNC_0(FUNC_15(VAR_6, &VAR_5, VAR_13,
     (uintptr_t)FUNC_1(VAR_10), 1) == VAR_10);

 if (!VAR_9->delay_coalesce) {
  VAR_10 = FUNC_10(VAR_6, VAR_7, VAR_8,
      VAR_13, VAR_9, VAR_10, ((void*)0), VAR_11);
 } else if (FUNC_5(VAR_10) >= VAR_0) {

  bool VAR_14;
  size_t VAR_15;
  do {
   VAR_15 = FUNC_5(VAR_10);
   FUNC_0(FUNC_8(VAR_10) == VAR_2);
   VAR_10 = FUNC_10(VAR_6, VAR_7,
       VAR_8, VAR_13, VAR_9, VAR_10,
       &VAR_14, VAR_11);
  } while (VAR_14 &&
      FUNC_5(VAR_10) >= VAR_15 + VAR_0);
 }
 FUNC_2(VAR_6, VAR_7, VAR_9, VAR_10);

 FUNC_14(VAR_6, &VAR_9->mtx);
}
