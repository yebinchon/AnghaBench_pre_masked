
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_21__ {size_t rm_so; size_t rm_eo; } ;
typedef TYPE_2__ regmatch_t ;
typedef int recno_t ;
typedef int busy_t ;
struct TYPE_23__ {int lno; int cno; } ;
struct TYPE_22__ {TYPE_1__* gp; int re_c; } ;
struct TYPE_20__ {int (* scr_bell ) (TYPE_3__*) ;} ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ MARK ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_3__*,char*,int,size_t) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int*) ;
 int FUNC_6 (TYPE_3__*,int,int *) ;
 int FUNC_7 (int *,int *,int,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ,int *,size_t,int **,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

int
FUNC_13(
 SCR *VAR_18,
 MARK *VAR_19,
 MARK *VAR_20,
 CHAR_T *VAR_21,
 size_t VAR_22,
 CHAR_T **VAR_23,
 u_int VAR_24)
{
 busy_t VAR_25;
 recno_t VAR_26;
 regmatch_t VAR_27[1];
 size_t VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34;
 CHAR_T *VAR_35;

 if (FUNC_9(VAR_18, VAR_0, VAR_21, VAR_22, VAR_23, VAR_24))
  return (1);
 if (FUNC_1(VAR_11)) {
  VAR_26 = VAR_19->lno;
  VAR_28 = VAR_19->cno + 1;
 } else {
  if (VAR_19->cno == 0) {
   if (VAR_19->lno == 1 && !FUNC_2(VAR_18, VAR_5)) {
    if (FUNC_1(VAR_12))
     FUNC_10(VAR_18, VAR_16);
    return (1);
   }
   VAR_26 = VAR_19->lno - 1;
  } else
   VAR_26 = VAR_19->lno;
  VAR_28 = VAR_19->cno;
 }

 VAR_25 = VAR_2;
 for (VAR_31 = VAR_4, VAR_33 = 1, VAR_34 = 0;; --VAR_26, VAR_28 = 0) {
  if (VAR_31-- == 0) {
   if (FUNC_0(VAR_18))
    break;
   if (FUNC_1(VAR_12)) {
    FUNC_8(VAR_18, VAR_25);
    VAR_25 = VAR_3;
   }
   VAR_31 = VAR_4;
  }
  if ((VAR_34 && VAR_26 < VAR_19->lno) || VAR_26 == 0) {
   if (VAR_34) {
    if (FUNC_1(VAR_12))
     FUNC_10(VAR_18, VAR_15);
    break;
   }
   if (!FUNC_2(VAR_18, VAR_5)) {
    if (FUNC_1(VAR_12))
     FUNC_10(VAR_18, VAR_16);
    break;
   }
   if (FUNC_5(VAR_18, &VAR_26))
    break;
   if (VAR_26 == 0) {
    if (FUNC_1(VAR_12))
     FUNC_10(VAR_18, VAR_14);
    break;
   }
   ++VAR_26;
   VAR_34 = 1;
   continue;
  }

  if (FUNC_4(VAR_18, VAR_26, 0, &VAR_35, &VAR_30))
   break;


  VAR_27[0].rm_so = 0;
  VAR_27[0].rm_eo = VAR_30;





  VAR_32 = FUNC_7(&VAR_18->re_c, VAR_35, 1, VAR_27,
      (VAR_27[0].rm_eo == VAR_30 ? 0 : VAR_8) | VAR_9);
  if (VAR_32 == VAR_6)
   continue;
  if (VAR_32 != 0) {
   if (FUNC_1(VAR_12))
    FUNC_6(VAR_18, VAR_32, &VAR_18->re_c);
   else
    (void)VAR_18->gp->scr_bell(VAR_18);
   break;
  }


  if (VAR_28 != 0 && VAR_27[0].rm_so >= VAR_28)
   continue;


  if (VAR_34 && FUNC_1(VAR_13))
   FUNC_10(VAR_18, VAR_17);
  for (;;) {
   VAR_29 = VAR_27[0].rm_so++;
   if (VAR_27[0].rm_so >= VAR_30)
    break;
   VAR_27[0].rm_eo = VAR_30;
   VAR_32 = FUNC_7(&VAR_18->re_c, VAR_35, 1, VAR_27,
       (VAR_27[0].rm_so == 0 ? 0 : VAR_7) |
       VAR_9);
   if (VAR_32 == VAR_6)
    break;
   if (VAR_32 != 0) {
    if (FUNC_1(VAR_12))
     FUNC_6(VAR_18, VAR_32, &VAR_18->re_c);
    else
     (void)VAR_18->gp->scr_bell(VAR_18);
    goto err;
   }
   if (VAR_28 && VAR_27[0].rm_so >= VAR_28)
    break;
  }
  VAR_20->lno = VAR_26;


  if (!FUNC_1(VAR_10) && VAR_29 >= VAR_30)
   VAR_20->cno = VAR_30 != 0 ? VAR_30 - 1 : 0;
  else
   VAR_20->cno = VAR_29;
  VAR_33 = 0;
  break;
 }

err: if (FUNC_1(VAR_12))
  FUNC_8(VAR_18, VAR_1);
 return (VAR_33);
}
