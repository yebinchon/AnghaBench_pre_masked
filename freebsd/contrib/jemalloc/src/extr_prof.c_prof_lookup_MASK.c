
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_12__ {int lock; int bt2tctx; int tctx_uid_next; int thr_discrim; int thr_uid; } ;
typedef TYPE_1__ prof_tdata_t ;
struct TYPE_13__ {int prepared; int state; scalar_t__ tctx_uid; TYPE_3__* gctx; int cnts; int thr_discrim; int thr_uid; TYPE_1__* tdata; } ;
typedef TYPE_2__ prof_tctx_t ;
struct TYPE_14__ {int lock; int nlimbo; int tctxs; } ;
typedef TYPE_3__ prof_gctx_t ;
typedef int prof_cnt_t ;
typedef int prof_bt_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,void*,void*) ;
 int FUNC_3 (int *,int *,int *,void**) ;
 int VAR_0 ;
 void* FUNC_4 (int ,int,int ,int,int *,int,int ,int) ;
 int FUNC_5 (int ,void*,int *,int *,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,TYPE_1__*,TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *,int *,TYPE_1__*,void**,TYPE_3__**,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_11 (int *,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 int FUNC_14 (int *) ;

prof_tctx_t *
FUNC_15(tsd_t *VAR_3, prof_bt_t *VAR_4) {
 union {
  prof_tctx_t *p;
  void *v;
 } VAR_5;
 prof_tdata_t *VAR_6;
 bool VAR_7;

 FUNC_1(VAR_0);

 VAR_6 = FUNC_11(VAR_3, 0);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_6(FUNC_14(VAR_3), VAR_6->lock);
 VAR_7 = FUNC_3(&VAR_6->bt2tctx, VAR_4, ((void*)0), &VAR_5.v);
 if (!VAR_7) {
  VAR_5.p->prepared = 1;
 }
 FUNC_7(FUNC_14(VAR_3), VAR_6->lock);
 if (VAR_7) {
  void *VAR_8;
  prof_gctx_t *VAR_9;
  bool VAR_10, VAR_11;





  if (FUNC_10(VAR_3, VAR_4, VAR_6, &VAR_8, &VAR_9,
      &VAR_10)) {
   return ((void*)0);
  }


  VAR_5.v = FUNC_4(FUNC_14(VAR_3), sizeof(prof_tctx_t),
      FUNC_12(sizeof(prof_tctx_t)), 0, ((void*)0), 1,
      FUNC_0(VAR_3, ((void*)0)), 1);
  if (VAR_5.p == ((void*)0)) {
   if (VAR_10) {
    FUNC_9(VAR_3, VAR_6, VAR_9, VAR_6);
   }
   return ((void*)0);
  }
  VAR_5.p->tdata = VAR_6;
  VAR_5.p->thr_uid = VAR_6->thr_uid;
  VAR_5.p->thr_discrim = VAR_6->thr_discrim;
  FUNC_8(&VAR_5.p->cnts, 0, sizeof(prof_cnt_t));
  VAR_5.p->gctx = VAR_9;
  VAR_5.p->tctx_uid = VAR_6->tctx_uid_next++;
  VAR_5.p->prepared = 1;
  VAR_5.p->state = VAR_1;
  FUNC_6(FUNC_14(VAR_3), VAR_6->lock);
  VAR_11 = FUNC_2(VAR_3, &VAR_6->bt2tctx, VAR_8, VAR_5.v);
  FUNC_7(FUNC_14(VAR_3), VAR_6->lock);
  if (VAR_11) {
   if (VAR_10) {
    FUNC_9(VAR_3, VAR_6, VAR_9, VAR_6);
   }
   FUNC_5(FUNC_14(VAR_3), VAR_5.v, ((void*)0), ((void*)0), 1, 1);
   return ((void*)0);
  }
  FUNC_6(FUNC_14(VAR_3), VAR_9->lock);
  VAR_5.p->state = VAR_2;
  FUNC_13(&VAR_9->tctxs, VAR_5.p);
  VAR_9->nlimbo--;
  FUNC_7(FUNC_14(VAR_3), VAR_9->lock);
 }

 return VAR_5.p;
}
