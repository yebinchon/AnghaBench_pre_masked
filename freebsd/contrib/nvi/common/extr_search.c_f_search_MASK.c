
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_19__ {size_t rm_so; size_t rm_eo; } ;
typedef TYPE_2__ regmatch_t ;
typedef int recno_t ;
typedef int busy_t ;
struct TYPE_21__ {int lno; size_t cno; } ;
struct TYPE_20__ {TYPE_1__* gp; int re_c; } ;
struct TYPE_18__ {int (* scr_bell ) (TYPE_3__*) ;} ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ MARK ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
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
 int FUNC_3 (TYPE_3__*,char*,size_t,size_t,...) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ,int **,size_t*) ;
 int FUNC_5 (TYPE_3__*,int,int *) ;
 int FUNC_6 (int *,int *,int,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ,int *,size_t,int **,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;

int
FUNC_11(
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
 size_t VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33 = 0;
 CHAR_T *VAR_34;

 if (FUNC_8(VAR_18, VAR_4, VAR_21, VAR_22, VAR_23, VAR_24))
  return (1);

 if (FUNC_1(VAR_11)) {
  VAR_26 = 1;
  VAR_28 = 0;
 } else {
  if (FUNC_4(VAR_18, VAR_19->lno, VAR_3, &VAR_34, &VAR_29))
   return (1);
  VAR_26 = VAR_19->lno;
  if (FUNC_1(VAR_12)) {
   if ((VAR_28 = VAR_19->cno) != 0)
    --VAR_28;
  } else if (VAR_19->cno + 1 >= VAR_29) {
   VAR_28 = 0;
   VAR_26 = VAR_19->lno + 1;
   if (FUNC_4(VAR_18, VAR_26, 0, &VAR_34, &VAR_29)) {
    if (!FUNC_2(VAR_18, VAR_6)) {
     if (FUNC_1(VAR_13))
      FUNC_9(VAR_18, VAR_15);
     return (1);
    }
    VAR_26 = 1;
    VAR_33 = 1;
   }
  } else
   VAR_28 = VAR_19->cno + 1;
 }

 VAR_25 = VAR_1;
 for (VAR_30 = VAR_5, VAR_32 = 1;; ++VAR_26, VAR_28 = 0) {
  if (VAR_30-- == 0) {
   if (FUNC_0(VAR_18))
    break;
   if (FUNC_1(VAR_13)) {
    FUNC_7(VAR_18, VAR_25);
    VAR_25 = VAR_2;
   }
   VAR_30 = VAR_5;
  }
  if ((VAR_33 && VAR_26 > VAR_19->lno) || FUNC_4(VAR_18, VAR_26, 0, &VAR_34, &VAR_29)) {
   if (VAR_33) {
    if (FUNC_1(VAR_13))
     FUNC_9(VAR_18, VAR_16);
    break;
   }
   if (!FUNC_2(VAR_18, VAR_6)) {
    if (FUNC_1(VAR_13))
     FUNC_9(VAR_18, VAR_15);
    break;
   }
   VAR_26 = 0;
   VAR_33 = 1;
   continue;
  }


  if (VAR_29 != 0 && VAR_28 == VAR_29)
   continue;


  VAR_27[0].rm_so = VAR_28;
  VAR_27[0].rm_eo = VAR_29;






  VAR_31 = FUNC_6(&VAR_18->re_c, VAR_34, 1, VAR_27,
      (VAR_27[0].rm_so == 0 ? 0 : VAR_8) | VAR_9);
  if (VAR_31 == VAR_7)
   continue;
  if (VAR_31 != 0) {
   if (FUNC_1(VAR_13))
    FUNC_5(VAR_18, VAR_31, &VAR_18->re_c);
   else
    (void)VAR_18->gp->scr_bell(VAR_18);
   break;
  }


  if (VAR_33 && FUNC_1(VAR_14))
   FUNC_9(VAR_18, VAR_17);





  VAR_20->lno = VAR_26;
  VAR_20->cno = VAR_27[0].rm_so;







  if (!FUNC_1(VAR_10) && VAR_20->cno >= VAR_29)
   VAR_20->cno = VAR_29 != 0 ? VAR_29 - 1 : 0;

  VAR_32 = 0;
  break;
 }

 if (FUNC_1(VAR_13))
  FUNC_7(VAR_18, VAR_0);
 return (VAR_32);
}
