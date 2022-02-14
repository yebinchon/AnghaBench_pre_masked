
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_7__ {int auto_thp_switched; scalar_t__ n_thp; TYPE_2__* blocks; int mtx; } ;
typedef TYPE_1__ base_t ;
struct TYPE_8__ {int size; struct TYPE_8__* next; int extent; } ;
typedef TYPE_2__ base_block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_7(tsdn_t *VAR_7, base_t *VAR_8) {
 FUNC_1(VAR_6 == VAR_5);
 FUNC_5(VAR_7, &VAR_8->mtx);
 if (VAR_8->auto_thp_switched) {
  return;
 }

 bool VAR_9;
 if (FUNC_3(VAR_8) != 0) {
  VAR_9 = (FUNC_2(VAR_8, 1) ==
      VAR_0);
 } else {
  VAR_9 = (FUNC_2(VAR_8, 1) ==
      VAR_1);
 }
 if (!VAR_9) {
  return;
 }

 VAR_8->auto_thp_switched = 1;
 FUNC_1(!VAR_4 || VAR_8->n_thp == 0);

 base_block_t *VAR_10 = VAR_8->blocks;
 while (VAR_10 != ((void*)0)) {
  FUNC_1((VAR_10->size & VAR_2) == 0);
  FUNC_6(VAR_10, VAR_10->size);
  if (VAR_4) {
   VAR_8->n_thp += FUNC_0(VAR_10->size -
       FUNC_4(&VAR_10->extent)) >> VAR_3;
  }
  VAR_10 = VAR_10->next;
  FUNC_1(VAR_10 == ((void*)0) || (FUNC_3(VAR_8) == 0));
 }
}
