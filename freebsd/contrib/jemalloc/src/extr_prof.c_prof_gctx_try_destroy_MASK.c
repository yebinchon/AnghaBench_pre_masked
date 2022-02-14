
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
typedef int prof_tdata_t ;
struct TYPE_4__ {int nlimbo; int lock; int bt; int tctxs; } ;
typedef TYPE_1__ prof_gctx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*,int *,int *,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(tsd_t *VAR_2, prof_tdata_t *VAR_3, prof_gctx_t *VAR_4,
    prof_tdata_t *VAR_5) {
 FUNC_1(VAR_1);
 FUNC_7(VAR_2, VAR_3);
 FUNC_4(FUNC_10(VAR_2), VAR_4->lock);
 FUNC_0(VAR_4->nlimbo != 0);
 if (FUNC_9(&VAR_4->tctxs) && VAR_4->nlimbo == 1) {

  if (FUNC_2(VAR_2, &VAR_0, &VAR_4->bt, ((void*)0), ((void*)0))) {
   FUNC_6();
  }
  FUNC_8(VAR_2, VAR_3);

  FUNC_5(FUNC_10(VAR_2), VAR_4->lock);
  FUNC_3(FUNC_10(VAR_2), VAR_4, ((void*)0), ((void*)0), 1, 1);
 } else {




  VAR_4->nlimbo--;
  FUNC_5(FUNC_10(VAR_2), VAR_4->lock);
  FUNC_8(VAR_2, VAR_3);
 }
}
