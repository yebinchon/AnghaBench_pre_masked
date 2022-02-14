
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
typedef scalar_t__ pid_t ;
typedef enum filtertype { ____Placeholder_filtertype } filtertype ;
struct TYPE_28__ {scalar_t__ lno; } ;
struct TYPE_27__ {int ep; int * rptlines; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef int FILE ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__,char*,size_t) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_4 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int *,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*,char*,int *,TYPE_2__*,scalar_t__*,int) ;
 int FUNC_13 (TYPE_1__*,char*,int *,TYPE_2__*,TYPE_2__*,int *,int *,int) ;
 int FUNC_14 (char*,char*,char*,char*,char*) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int,char*) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (TYPE_1__*,int ,char*) ;
 int FUNC_20 (TYPE_1__*,int ,char*,char*) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_22 (int*) ;
 scalar_t__ FUNC_23 (TYPE_1__*,long,char*,int,int) ;
 char* FUNC_24 (char*,char) ;
 scalar_t__ FUNC_25 () ;

int
FUNC_26(SCR *VAR_13, EXCMD *VAR_14, MARK *VAR_15, MARK *VAR_16, MARK *VAR_17, CHAR_T *VAR_18, enum filtertype VAR_19)
{
 FILE *VAR_20, *VAR_21;
 pid_t VAR_22, VAR_23;
 recno_t VAR_24;
 int VAR_25[2], VAR_26[2], VAR_27;
 char *VAR_28;
 char *VAR_29;
 size_t VAR_30;

 VAR_27 = 0;


 *VAR_17 = *VAR_15;
 if (VAR_17->lno == 0)
  VAR_17->lno = 1;


 if (FUNC_21(VAR_13, VAR_8, 0))
  return (1);
 VAR_21 = ((void*)0);
 VAR_25[0] = VAR_25[1] = VAR_26[0] = VAR_26[1] = -1;
 if (VAR_19 != VAR_3 && FUNC_22(VAR_25) < 0) {
  FUNC_19(VAR_13, VAR_7, "pipe");
  goto err;
 }


 if (FUNC_22(VAR_26) < 0) {
  FUNC_19(VAR_13, VAR_7, "pipe");
  goto err;
 }
 if ((VAR_21 = FUNC_16(VAR_26[0], "r")) == ((void*)0)) {
  FUNC_19(VAR_13, VAR_7, "fdopen");
  goto err;
 }


 switch (VAR_23 = FUNC_25()) {
 case -1:
  FUNC_19(VAR_13, VAR_7, "vfork");
err: if (VAR_25[0] != -1)
   (void)FUNC_7(VAR_25[0]);
  if (VAR_25[1] != -1)
   (void)FUNC_7(VAR_25[1]);
  if (VAR_21 != ((void*)0))
   (void)FUNC_15(VAR_21);
  else if (VAR_26[0] != -1)
   (void)FUNC_7(VAR_26[0]);
  if (VAR_26[1] != -1)
   (void)FUNC_7(VAR_26[1]);
  return (1);
 case 0:
  if (VAR_25[0] != -1)
   (void)FUNC_11(VAR_25[0], VAR_11);
  (void)FUNC_11(VAR_26[1], VAR_12);
  (void)FUNC_11(VAR_26[1], VAR_10);


  if (VAR_25[0] != -1)
   (void)FUNC_7(VAR_25[0]);
  if (VAR_25[1] != -1)
   (void)FUNC_7(VAR_25[1]);
  (void)FUNC_7(VAR_26[0]);
  (void)FUNC_7(VAR_26[1]);

  if ((VAR_28 = FUNC_24(FUNC_4(VAR_13, VAR_8), '/')) == ((void*)0))
   VAR_28 = FUNC_4(VAR_13, VAR_8);
  else
   ++VAR_28;

  FUNC_3(VAR_13, VAR_18, FUNC_5(VAR_18)+1, VAR_29, VAR_30);
  FUNC_14(FUNC_4(VAR_13, VAR_8), VAR_28, "-c", VAR_29, (char *)((void*)0));
  FUNC_20(VAR_13, VAR_7, FUNC_4(VAR_13, VAR_8), "execl: %s");
  FUNC_6 (127);

 default:

  if (VAR_25[0] != -1)
   (void)FUNC_7(VAR_25[0]);
  (void)FUNC_7(VAR_26[1]);
  break;
 }
 if (VAR_19 == VAR_2 || VAR_19 == VAR_3) {
  if (VAR_19 == VAR_2)
   (void)FUNC_7(VAR_25[1]);

  if (FUNC_12(VAR_13, "filter", VAR_21, VAR_15, &VAR_24, 1))
   VAR_27 = 1;
  VAR_13->rptlines[VAR_6] += VAR_24;
  if (VAR_19 == VAR_3)
   if (VAR_15->lno == 0)
    VAR_17->lno = VAR_24;
   else
    VAR_17->lno += VAR_24;
  goto uwait;
 }
 FUNC_2(VAR_13->ep, VAR_5);
 switch (VAR_22 = FUNC_18()) {
 case -1:
  FUNC_19(VAR_13, VAR_7, "fork");
  (void)FUNC_7(VAR_25[1]);
  (void)FUNC_7(VAR_26[0]);
  VAR_27 = 1;
  break;
 case 0:




  (void)FUNC_7(VAR_26[0]);
  if ((VAR_20 = FUNC_16(VAR_25[1], "w")) == ((void*)0))
   FUNC_6 (1);
  FUNC_6(FUNC_13(VAR_13, "filter", VAR_20, VAR_15, VAR_16, ((void*)0), ((void*)0), 1));


 default:
  (void)FUNC_7(VAR_25[1]);
  if (VAR_19 == VAR_4) {




   if (FUNC_17(VAR_13, VAR_21))
    VAR_27 = 1;
  } else {





   if (FUNC_12(VAR_13, "filter", VAR_21, VAR_16, &VAR_24, 1))
    VAR_27 = 1;
   VAR_13->rptlines[VAR_6] += VAR_24;
  }


  if (FUNC_23(VAR_13,
      (long)VAR_22, "parent-writer", 0, 1))
   VAR_27 = 1;


  if (VAR_27 == 0 && VAR_19 == VAR_1 &&
      (FUNC_8(VAR_13, ((void*)0), VAR_15, VAR_16, VAR_0) ||
      FUNC_10(VAR_13, VAR_15, VAR_16, 1))) {
   VAR_27 = 1;
   break;
  }






   if (VAR_17->lno > 1 && !FUNC_9(VAR_13, VAR_17->lno))
   --VAR_17->lno;
  break;
 }
 FUNC_0(VAR_13->ep, VAR_5);






uwait: FUNC_3(VAR_13, VAR_18, FUNC_5(VAR_18) + 1, VAR_29, VAR_30);
 return (FUNC_23(VAR_13, (long)VAR_23, VAR_29,
     VAR_19 == VAR_3 && FUNC_1(VAR_13, VAR_9) ? 1 : 0, 0) || VAR_27);
}
