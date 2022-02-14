
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_14__ {int lock; int bt2tctx; } ;
typedef TYPE_2__ prof_tdata_t ;
struct TYPE_13__ {scalar_t__ curobjs; scalar_t__ curbytes; scalar_t__ accumobjs; scalar_t__ accumbytes; } ;
struct TYPE_15__ {int state; TYPE_2__* tdata; TYPE_1__ cnts; TYPE_4__* gctx; } ;
typedef TYPE_3__ prof_tctx_t ;
struct TYPE_16__ {int lock; int nlimbo; int tctxs; int bt; } ;
typedef TYPE_4__ prof_gctx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (int ,TYPE_3__*,int *,int *,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int VAR_0 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,int ,TYPE_4__*,TYPE_2__*) ;


 int VAR_1 ;
 int FUNC_10 (int *,TYPE_2__*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,TYPE_2__*,int) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(tsd_t *VAR_2, prof_tctx_t *VAR_3) {
 prof_tdata_t *VAR_4 = VAR_3->tdata;
 prof_gctx_t *VAR_5 = VAR_3->gctx;
 bool VAR_6, VAR_7, VAR_8;

 FUNC_4(FUNC_14(VAR_2), VAR_3->tdata->lock);

 FUNC_0(VAR_3->cnts.curobjs == 0);
 FUNC_0(VAR_3->cnts.curbytes == 0);
 FUNC_0(!VAR_0);
 FUNC_0(VAR_3->cnts.accumobjs == 0);
 FUNC_0(VAR_3->cnts.accumbytes == 0);

 FUNC_1(VAR_2, &VAR_4->bt2tctx, &VAR_5->bt, ((void*)0), ((void*)0));
 VAR_6 = FUNC_12(FUNC_14(VAR_2), VAR_4, 0);
 FUNC_6(FUNC_14(VAR_2), VAR_4->lock);

 FUNC_5(FUNC_14(VAR_2), VAR_5->lock);
 switch (VAR_3->state) {
 case 128:
  FUNC_13(&VAR_5->tctxs, VAR_3);
  VAR_7 = 1;
  if (FUNC_8(VAR_5)) {
   VAR_5->nlimbo++;
   VAR_8 = 1;
  } else {
   VAR_8 = 0;
  }
  break;
 case 129:





  VAR_3->state = VAR_1;
  VAR_7 = 0;
  VAR_8 = 0;
  break;
 default:
  FUNC_7();
  VAR_7 = 0;
  VAR_8 = 0;
 }
 FUNC_6(FUNC_14(VAR_2), VAR_5->lock);
 if (VAR_8) {
  FUNC_9(VAR_2, FUNC_11(VAR_2, 0), VAR_5,
      VAR_4);
 }

 FUNC_3(FUNC_14(VAR_2), VAR_3->tdata->lock);

 if (VAR_6) {
  FUNC_10(VAR_2, VAR_4, 0);
 }

 if (VAR_7) {
  FUNC_2(FUNC_14(VAR_2), VAR_3, ((void*)0), ((void*)0), 1, 1);
 }
}
