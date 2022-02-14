
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_16__ {int (* purge_lazy ) (TYPE_1__*,int ,int ,int ,int ,int ) ;int (* purge_forced ) (TYPE_1__*,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
struct TYPE_17__ {int extents_retained; } ;
typedef TYPE_2__ arena_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_1__**,int *) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_1__**,int *,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_11 (int *,TYPE_2__*,TYPE_1__**,int *,int *,int) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_17 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ,int ) ;

void
FUNC_20(tsdn_t *VAR_4, arena_t *VAR_5,
    extent_hooks_t **VAR_6, extent_t *VAR_7) {
 FUNC_1(FUNC_7(VAR_7));
 FUNC_19(FUNC_18(VAR_4),
     VAR_0, 0);





 FUNC_6(VAR_4, VAR_7);
 if (!FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7)) {
  return;
 }

 FUNC_12(VAR_4, VAR_7);
 if (*VAR_6 != &VAR_2) {
  FUNC_10(VAR_4, VAR_5);
 }

 bool VAR_8;
 if (!FUNC_3(VAR_7)) {
  VAR_8 = 1;
 } else if (!FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7,
     0, FUNC_13(VAR_7))) {
  VAR_8 = 1;
 } else if ((*VAR_6)->purge_forced != ((void*)0) &&
     !(*VAR_6)->purge_forced(*VAR_6,
     FUNC_2(VAR_7), FUNC_13(VAR_7), 0,
     FUNC_13(VAR_7), FUNC_0(VAR_5))) {
  VAR_8 = 1;
 } else if (FUNC_14(VAR_7) == VAR_3 ||
     ((*VAR_6)->purge_lazy != ((void*)0) &&
     !(*VAR_6)->purge_lazy(*VAR_6,
     FUNC_2(VAR_7), FUNC_13(VAR_7), 0,
     FUNC_13(VAR_7), FUNC_0(VAR_5)))) {
  VAR_8 = 0;
 } else {
  VAR_8 = 0;
 }
 if (*VAR_6 != &VAR_2) {
  FUNC_9(VAR_4);
 }
 FUNC_15(VAR_7, VAR_8);

 if (VAR_1) {
  FUNC_8(VAR_4, VAR_7);
 }

 FUNC_11(VAR_4, VAR_5, VAR_6, &VAR_5->extents_retained,
     VAR_7, 0);
}
