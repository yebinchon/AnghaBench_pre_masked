
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
typedef int prof_tdata_t ;
typedef int prof_tctx_t ;
typedef int prof_gctx_tree_t ;
struct TYPE_6__ {int lock; int nlimbo; int tctxs; } ;
typedef TYPE_1__ prof_gctx_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int *,int *,int *,int,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *,TYPE_1__*,int *) ;
 int VAR_0 ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int *,int ,void*) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(tsd_t *VAR_1, prof_gctx_tree_t *VAR_2) {
 prof_tdata_t *VAR_3 = FUNC_7(VAR_1, 0);
 prof_gctx_t *VAR_4;







 while ((VAR_4 = FUNC_0(VAR_2)) != ((void*)0)) {
  FUNC_1(VAR_2, VAR_4);
  FUNC_3(FUNC_11(VAR_1), VAR_4->lock);
  {
   prof_tctx_t *VAR_5;

   VAR_5 = ((void*)0);
   do {
    prof_tctx_t *VAR_6 =
        FUNC_8(&VAR_4->tctxs, VAR_5,
        VAR_0,
        (void *)FUNC_11(VAR_1));
    if (VAR_6 != ((void*)0)) {
     VAR_5 = FUNC_9(&VAR_4->tctxs,
         VAR_6);
     FUNC_10(&VAR_4->tctxs,
         VAR_6);
     FUNC_2(FUNC_11(VAR_1), VAR_6,
         ((void*)0), ((void*)0), 1, 1);
    } else {
     VAR_5 = ((void*)0);
    }
   } while (VAR_5 != ((void*)0));
  }
  VAR_4->nlimbo--;
  if (FUNC_5(VAR_4)) {
   VAR_4->nlimbo++;
   FUNC_4(FUNC_11(VAR_1), VAR_4->lock);
   FUNC_6(VAR_1, VAR_3, VAR_4, VAR_3);
  } else {
   FUNC_4(FUNC_11(VAR_1), VAR_4->lock);
  }
 }
}
