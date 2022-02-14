
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_66__ TYPE_8__ ;
typedef struct TYPE_65__ TYPE_5__ ;
typedef struct TYPE_64__ TYPE_4__ ;
typedef struct TYPE_63__ TYPE_3__ ;
typedef struct TYPE_62__ TYPE_2__ ;
typedef struct TYPE_61__ TYPE_21__ ;
typedef struct TYPE_60__ TYPE_1__ ;


struct TYPE_62__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_63__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_60__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_65__ {int flags; scalar_t__ lno; scalar_t__ cno; int count; int (* scr_discard ) (TYPE_5__*,int *) ;TYPE_4__* frp; int (* scr_rename ) (TYPE_5__*,int ,int) ;struct TYPE_65__* gp; struct TYPE_65__* nextdisp; TYPE_2__ m_final; scalar_t__ (* func ) (TYPE_5__*,TYPE_5__*) ;struct TYPE_65__* kp; int ccnt; TYPE_3__ m_stop; TYPE_1__ m_start; int key; int rcm; int showmode; int member_0; } ;
typedef TYPE_5__ VI_PRIVATE ;
typedef TYPE_5__ VICMD ;
struct TYPE_66__ {scalar_t__ lno; scalar_t__ cno; } ;
struct TYPE_64__ {int name; } ;
struct TYPE_61__ {int count; } ;
typedef TYPE_5__ SCR ;
typedef TYPE_8__ MARK ;
typedef TYPE_5__ GS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* VAR_2 ;
 TYPE_21__* VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,int) ;






 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_5__* FUNC_9 (TYPE_5__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

 int VAR_25 ;




 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ,TYPE_8__*,int) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (TYPE_5__*,int ,char*) ;
 int FUNC_17 (TYPE_5__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_20 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*,int ,int) ;
 int FUNC_22 (TYPE_5__*,int ,int) ;
 int FUNC_23 (TYPE_5__*,int ,int) ;
 int FUNC_24 (TYPE_5__*,int *) ;
 int FUNC_25 (TYPE_5__*,TYPE_5__*,TYPE_5__*,int *,int*,int*) ;
 int FUNC_26 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_27 (TYPE_5__*) ;
 scalar_t__ FUNC_28 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_29 (TYPE_5__*) ;
 scalar_t__ FUNC_30 (TYPE_5__*,TYPE_21__*,TYPE_5__*,int*) ;
 TYPE_5__* VAR_32 ;
 int FUNC_31 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_32 (TYPE_5__*,TYPE_5__**) ;
 scalar_t__ FUNC_33 (TYPE_5__*,scalar_t__,int) ;
 scalar_t__ FUNC_34 (TYPE_5__*,int) ;
 scalar_t__ FUNC_35 (TYPE_5__*,int *,int ) ;
 scalar_t__ FUNC_36 (TYPE_5__*,TYPE_5__**,int *) ;

int
FUNC_37(SCR **VAR_33)
{
 GS *VAR_34;
 MARK VAR_35;
 SCR *VAR_36, *VAR_37;
 VICMD VAR_38 = { 0 }, *VAR_39;
 VI_PRIVATE *VAR_40;
 int VAR_41, VAR_42, VAR_43;


 VAR_37 = *VAR_33;
 VAR_34 = VAR_37->gp;


 VAR_39 = &VAR_38;


 FUNC_4(VAR_39, 131);


 if (FUNC_29(VAR_37))
  return (1);


 (void)VAR_37->gp->scr_rename(VAR_37, VAR_37->frp->name, 1);

 for (VAR_40 = FUNC_9(VAR_37), VAR_43 = 0;;) {

  if (!FUNC_7(VAR_37) && FUNC_35(VAR_37, ((void*)0), 0))
   goto ret;





  if (FUNC_3(VAR_40, VAR_22))
   FUNC_2(VAR_40, VAR_22);
  else {
   VAR_37->showmode = VAR_16;
   if (FUNC_34(VAR_37, 0))
    goto ret;
  }


  if (FUNC_3(VAR_39, 131 | 130 | 128)) {
   FUNC_2(VAR_40, VAR_21);
   (void)FUNC_31(VAR_37, &VAR_37->rcm);
  }






  if (FUNC_7(VAR_37))
   VAR_42 = 1;
  else {
   if (FUNC_13(VAR_37))
    goto err;
   VAR_42 = 0;
  }






  if (FUNC_1(VAR_34)) {
   VAR_39->kp = &VAR_32[':'];
   goto ex_continue;
  }


  FUNC_15(VAR_39, 0, sizeof(VICMD));
  switch (FUNC_25(VAR_37, VAR_2, VAR_39, ((void*)0), &VAR_41, &VAR_42)) {
  case 138:
   goto err;
  case 137:
   goto gc_err_noflush;
  case 136:
   goto gc_event;
  case 135:
   goto ret;
  case 134:
   goto intr;
  case 133:
   break;
  }


  if (FUNC_3(VAR_39->kp, VAR_31) && FUNC_8(VAR_37, VAR_9)) {
   FUNC_11(VAR_37, FUNC_6(VAR_37, VAR_39->key), VAR_4);
   goto err;
  }






  if (FUNC_3(VAR_39, VAR_19) && VAR_41)
   VAR_3->count = 1;


  FUNC_4(VAR_39, VAR_39->kp->flags);


  if (FUNC_3(VAR_39, VAR_26 | VAR_27 | VAR_28)) {
   VAR_35.lno = VAR_37->lno;
   VAR_35.cno = VAR_37->cno;
  }







  VAR_39->m_start.lno = VAR_39->m_stop.lno = VAR_39->m_final.lno = VAR_37->lno;
  VAR_39->m_start.cno = VAR_39->m_stop.cno = VAR_39->m_final.cno = VAR_37->cno;





  if (FUNC_3(VAR_39, VAR_30) &&
      FUNC_30(VAR_37, VAR_3, VAR_39, &VAR_42)) {
   if (FUNC_5(VAR_37))
    goto intr;
   goto err;
  }
  if (FUNC_3(VAR_39, VAR_18) && FUNC_3(VAR_39, VAR_24))
   VAR_39->m_stop.lno += VAR_39->count - 1;


  ++VAR_37->ccnt;





ex_continue: if (VAR_39->kp->func(VAR_37, VAR_39))
   goto err;
gc_event:
  if (FUNC_3(VAR_37, VAR_11 | VAR_12)) {
   if (FUNC_12(VAR_37, ((void*)0), FUNC_3(VAR_37, VAR_12)))
    goto ret;
   if (FUNC_32(VAR_37, &VAR_36))
    goto ret;
   if (VAR_36 == ((void*)0) && FUNC_36(VAR_37, &VAR_36, ((void*)0)))
    goto ret;
   *VAR_33 = VAR_36;
   if (FUNC_18(VAR_37))
    goto ret;
   if (VAR_36 == ((void*)0))
    break;


   VAR_37 = VAR_36;
   VAR_40 = FUNC_9(VAR_37);
   (void)VAR_37->gp->scr_rename(VAR_37, VAR_37->frp->name, 1);


   FUNC_4(VAR_40, VAR_20);

   continue;
  }
  if (FUNC_3(VAR_39, VAR_29) && !VAR_42) {
   *VAR_2 = VAR_38;
   FUNC_4(VAR_2, VAR_19);






   if (FUNC_3(VAR_39, VAR_17))
    FUNC_4(VAR_2, VAR_18);


   FUNC_2(VAR_2, VAR_23 | VAR_25);
  }
  switch (FUNC_3(VAR_39, VAR_25)) {
  case 0:
  case 131:
   break;
  case 132:
   VAR_39->m_final.cno = FUNC_33(VAR_37,
       VAR_39->m_final.lno, FUNC_3(VAR_40, VAR_21));
   break;
  case 129:
   FUNC_4(VAR_40, VAR_21);
   break;
  case 130:
   VAR_39->m_final.cno = 0;

  case 128:
   if (FUNC_17(VAR_37, VAR_39->m_final.lno, &VAR_39->m_final.cno))
    goto err;
   break;
  default:
   FUNC_10();
  }


  VAR_37->lno = VAR_39->m_final.lno;
  VAR_37->cno = VAR_39->m_final.cno;





  if ((FUNC_3(VAR_39, VAR_26) ||
      (FUNC_3(VAR_39, VAR_28) && VAR_37->lno != VAR_35.lno) ||
      (FUNC_3(VAR_39, VAR_27) &&
      (VAR_37->lno != VAR_35.lno || VAR_37->cno != VAR_35.cno))) &&
      FUNC_14(VAR_37, VAR_0, &VAR_35, 1))
   goto err;

  if (0) {
err: if (FUNC_28(VAR_37, VAR_1))
    FUNC_16(VAR_37, VAR_7,
       "110|Vi command failed: mapped keys discarded");
  }





gc_err_noflush: if (FUNC_5(VAR_37)) {
intr: FUNC_0(VAR_37);
   if (FUNC_28(VAR_37, VAR_1))
    FUNC_16(VAR_37, VAR_8,
        "231|Interrupted: mapped keys discarded");
   else
    FUNC_16(VAR_37, VAR_8, "236|Interrupted");
  }


  if (FUNC_3(VAR_37, VAR_14)) {
   FUNC_2(VAR_37, VAR_14);





   FUNC_4(VAR_37, VAR_15);


   VAR_37 = VAR_37->nextdisp;
   VAR_40 = FUNC_9(VAR_37);
   (void)VAR_37->gp->scr_rename(VAR_37, VAR_37->frp->name, 1);


   FUNC_4(VAR_40, VAR_20);


   if (FUNC_34(VAR_37, 1))
    return (1);
  }


  if (FUNC_3(VAR_37, VAR_13)) {
   FUNC_2(VAR_37, VAR_13);
   (void)VAR_37->gp->scr_rename(VAR_37, VAR_37->frp->name, 1);
  }


  if (FUNC_3(VAR_34, VAR_5) || FUNC_3(VAR_37, VAR_10)) {
   *VAR_33 = VAR_37;
   FUNC_27(VAR_37);
   VAR_34->scr_discard(VAR_37, ((void*)0));
   break;
  }
 }
 if (0)
ret: VAR_43 = 1;
 return (VAR_43);
}
