
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_25__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_33__ {struct TYPE_33__* buf; int len; int mtype; } ;
struct TYPE_31__ {int if_lno; char* if_name; int clen; int cp; } ;
struct TYPE_32__ {TYPE_25__ excmd; int tiq; int lno; int msgq; int (* scr_msg ) (TYPE_2__*,int ,TYPE_3__*,int ) ;struct TYPE_32__* gp; } ;
struct TYPE_30__ {int len; int lb; } ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ MSGS ;
typedef TYPE_2__ GS ;
typedef int EX_PRIVATE ;


 int FUNC_0 (TYPE_25__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_25__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 TYPE_1__* FUNC_13 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int ,char,int ) ;
 scalar_t__ FUNC_19 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_2__*,int ,char*) ;
 int FUNC_22 (TYPE_2__*,int ,int ) ;
 int VAR_18 ;
 int FUNC_23 (TYPE_2__*) ;
 TYPE_2__* FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*,int ,TYPE_3__*,int ) ;

int
FUNC_26(SCR **VAR_19)
{
 EX_PRIVATE *VAR_20;
 GS *VAR_21;
 MSGS *VAR_22;
 SCR *VAR_23;
 TEXT *VAR_24;
 u_int32_t VAR_25;

 VAR_23 = *VAR_19;
 VAR_21 = VAR_23->gp;
 VAR_20 = FUNC_2(VAR_23);


 if (FUNC_16(VAR_23))
  return (1);


 while ((VAR_22 = FUNC_11(VAR_21->msgq)) != ((void*)0)) {
  VAR_21->scr_msg(VAR_23, VAR_22->mtype, VAR_22->buf, VAR_22->len);
  FUNC_12(VAR_21->msgq, VAR_18);
  FUNC_20(VAR_22->buf);
  FUNC_20(VAR_22);
 }


 if (FUNC_5(VAR_21, VAR_1)) {
  VAR_21->excmd.if_lno = 1;
  VAR_21->excmd.if_name = "script";
 }
 FUNC_8(VAR_13 | VAR_15 | VAR_16);
 for (;; ++VAR_21->excmd.if_lno) {

  if (FUNC_5(VAR_23, VAR_11)) {
   if (!FUNC_5(VAR_23, VAR_8))
    FUNC_22(VAR_23, VAR_23->lno, 0);
   FUNC_3(VAR_23, VAR_11);
  }
  (void)FUNC_15(VAR_23);


  if (FUNC_10(VAR_23, VAR_4))
   FUNC_9(VAR_14);
  if (FUNC_10(VAR_23, VAR_5))
   FUNC_9(VAR_17);


  FUNC_1(VAR_23);
  if (FUNC_18(VAR_23, VAR_23->tiq, ':', VAR_25))
   return (1);
  if (FUNC_6(VAR_23)) {
   (void)FUNC_17(VAR_23, "\n");
   (void)FUNC_15(VAR_23);
   continue;
  }


  FUNC_0(&VAR_21->excmd);





  VAR_24 = FUNC_13(VAR_23->tiq);
  if (VAR_24->len == 0) {
   VAR_21->excmd.cp = FUNC_7(" ");
   VAR_21->excmd.clen = 1;
  } else {
   VAR_21->excmd.cp = VAR_24->lb;
   VAR_21->excmd.clen = VAR_24->len;
  }
  FUNC_4(&VAR_21->excmd, VAR_0);

  if (FUNC_14(VAR_23) && FUNC_5(VAR_21, VAR_1))
   return (1);

  if (FUNC_6(VAR_23)) {
   FUNC_1(VAR_23);
   FUNC_21(VAR_23, VAR_3, "170|Interrupted");
  }





  if (FUNC_5(VAR_21, VAR_2) || FUNC_5(VAR_23, VAR_10 | VAR_12)) {
   *VAR_19 = VAR_23;
   break;
  }


  FUNC_3(VAR_23, VAR_9);







  if (FUNC_5(VAR_23, VAR_6 | VAR_7)) {
   if (FUNC_19(VAR_23, ((void*)0), FUNC_5(VAR_23, VAR_7)))
    return (1);
   *VAR_19 = FUNC_24(VAR_23);
   return (FUNC_23(VAR_23));
  }
 }
 return (0);
}
