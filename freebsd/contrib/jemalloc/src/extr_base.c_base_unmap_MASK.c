
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
struct TYPE_8__ {int (* purge_lazy ) (TYPE_1__*,void*,size_t,int ,size_t,unsigned int) ;int (* purge_forced ) (TYPE_1__*,void*,size_t,int ,size_t,unsigned int) ;int (* decommit ) (TYPE_1__*,void*,size_t,int ,size_t,unsigned int) ;int (* dalloc ) (TYPE_1__*,void*,size_t,int,unsigned int) ;} ;
typedef TYPE_1__ extent_hooks_t ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,size_t) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (void*,size_t) ;
 int FUNC_7 (void*,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_1__*,void*,size_t,int,unsigned int) ;
 int FUNC_11 (TYPE_1__*,void*,size_t,int ,size_t,unsigned int) ;
 int FUNC_12 (TYPE_1__*,void*,size_t,int ,size_t,unsigned int) ;
 int FUNC_13 (TYPE_1__*,void*,size_t,int ,size_t,unsigned int) ;
 int * FUNC_14 () ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(tsdn_t *VAR_2, extent_hooks_t *VAR_3, unsigned VAR_4, void *VAR_5,
    size_t VAR_6) {
 if (VAR_3 == &VAR_1) {
  if (!FUNC_1(VAR_5, VAR_6)) {
   goto label_done;
  }
  if (!FUNC_4(VAR_5, VAR_6)) {
   goto label_done;
  }
  if (!FUNC_6(VAR_5, VAR_6)) {
   goto label_done;
  }
  if (!FUNC_7(VAR_5, VAR_6)) {
   goto label_done;
  }

  FUNC_3();
 } else {
  tsd_t *VAR_7 = FUNC_15(VAR_2) ? FUNC_14() : FUNC_16(VAR_2);
  FUNC_9(VAR_7, ((void*)0));
  if (VAR_3->dalloc != ((void*)0) &&
      !VAR_3->dalloc(VAR_3, VAR_5, VAR_6, 1,
      VAR_4)) {
   goto label_post_reentrancy;
  }
  if (VAR_3->decommit != ((void*)0) &&
      !VAR_3->decommit(VAR_3, VAR_5, VAR_6, 0, VAR_6,
      VAR_4)) {
   goto label_post_reentrancy;
  }
  if (VAR_3->purge_forced != ((void*)0) &&
      !VAR_3->purge_forced(VAR_3, VAR_5, VAR_6, 0,
      VAR_6, VAR_4)) {
   goto label_post_reentrancy;
  }
  if (VAR_3->purge_lazy != ((void*)0) &&
      !VAR_3->purge_lazy(VAR_3, VAR_5, VAR_6, 0, VAR_6,
      VAR_4)) {
   goto label_post_reentrancy;
  }

 label_post_reentrancy:
  FUNC_8(VAR_7);
 }
label_done:
 if (FUNC_2()) {

  FUNC_0(((uintptr_t)VAR_5 & VAR_0) == 0 &&
      (VAR_6 & VAR_0) == 0);
  FUNC_5(VAR_5, VAR_6);
 }
}
