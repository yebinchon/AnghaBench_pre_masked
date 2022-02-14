
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_9__ {int curregs; int nrequests; int nmalloc; } ;
struct TYPE_10__ {int lock; TYPE_1__ stats; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
struct TYPE_11__ {TYPE_2__* bins; } ;
typedef TYPE_3__ arena_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int) ;
 void* FUNC_1 (int *,TYPE_3__*,TYPE_2__*,size_t) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,size_t) ;
 void* FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (void*,int ,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 size_t FUNC_11 (size_t) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void *
FUNC_13(tsdn_t *VAR_7, arena_t *VAR_8, szind_t VAR_9, bool VAR_10) {
 void *VAR_11;
 bin_t *VAR_12;
 size_t VAR_13;
 extent_t *VAR_14;

 FUNC_5(VAR_9 < VAR_0);
 VAR_12 = &VAR_8->bins[VAR_9];
 VAR_13 = FUNC_11(VAR_9);

 FUNC_7(VAR_7, &VAR_12->lock);
 if ((VAR_14 = VAR_12->slabcur) != ((void*)0) && FUNC_6(VAR_14) > 0) {
  VAR_11 = FUNC_4(VAR_14, &VAR_1[VAR_9]);
 } else {
  VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_12, VAR_9);
 }

 if (VAR_11 == ((void*)0)) {
  FUNC_8(VAR_7, &VAR_12->lock);
  return ((void*)0);
 }

 if (VAR_4) {
  VAR_12->stats.nmalloc++;
  VAR_12->stats.nrequests++;
  VAR_12->stats.curregs++;
 }
 FUNC_8(VAR_7, &VAR_12->lock);
 if (VAR_3 && FUNC_3(VAR_7, VAR_8, VAR_13)) {
  FUNC_10(VAR_7);
 }

 if (!VAR_10) {
  if (VAR_2) {
   if (FUNC_12(VAR_5)) {
    FUNC_0(VAR_11,
        &VAR_1[VAR_9], 0);
   } else if (FUNC_12(VAR_6)) {
    FUNC_9(VAR_11, 0, VAR_13);
   }
  }
 } else {
  if (VAR_2 && FUNC_12(VAR_5)) {
   FUNC_0(VAR_11, &VAR_1[VAR_9],
       1);
  }
  FUNC_9(VAR_11, 0, VAR_13);
 }

 FUNC_2(VAR_7, VAR_8);
 return VAR_11;
}
