
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_31__ {int textq; } ;
struct TYPE_30__ {int lno; int cno; } ;
struct TYPE_29__ {int cno; int rptlchange; int * rptlines; TYPE_1__* gp; } ;
struct TYPE_28__ {size_t len; int * lb; } ;
struct TYPE_27__ {TYPE_5__* dcbp; } ;
typedef TYPE_2__ TEXT ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ MARK ;
typedef int CHAR_T ;
typedef TYPE_5__ CB ;


 int FUNC_0 (TYPE_3__*,int *,size_t,size_t) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,size_t) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_3__*,int *,size_t,size_t) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_6 (int *,int *,size_t) ;
 int VAR_4 ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (TYPE_3__*,int,int,int *,size_t) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int,int *,int) ;
 int FUNC_14 (TYPE_3__*,int ,char*,...) ;
 int FUNC_15 (TYPE_3__*,int,int*) ;
 int VAR_6 ;

int
FUNC_16(
 SCR *VAR_7,
 CB *VAR_8,
 CHAR_T *VAR_9,
 MARK *VAR_10,
 MARK *VAR_11,
 int VAR_12)
{
 CHAR_T VAR_13;
 TEXT *VAR_14, *VAR_15;
 recno_t VAR_16;
 size_t VAR_17, VAR_18, VAR_19;
 int VAR_20;
 CHAR_T *VAR_21, *VAR_22;
 CHAR_T *VAR_23;

 if (VAR_8 == ((void*)0))
  if (VAR_9 == ((void*)0)) {
   VAR_8 = VAR_7->gp->dcbp;
   if (VAR_8 == ((void*)0)) {
    FUNC_14(VAR_7, VAR_4,
        "053|The default buffer is empty");
    return (1);
   }
  } else {
   VAR_13 = *VAR_9;
   FUNC_1(VAR_7, VAR_8, VAR_13);
   if (VAR_8 == ((void*)0)) {
    FUNC_14(VAR_7, VAR_4, "054|Buffer %s is empty",
        FUNC_5(VAR_7, VAR_13));
    return (1);
   }
  }
 VAR_15 = FUNC_7(VAR_8->textq);
 if (VAR_10->lno == 1) {
  if (FUNC_12(VAR_7, &VAR_16))
   return (1);
  if (VAR_16 == 0) {
   for (; VAR_15 != ((void*)0);
       ++VAR_16, ++VAR_7->rptlines[VAR_2], VAR_15 = FUNC_9(VAR_15, VAR_6))
    if (FUNC_10(VAR_7, 1, VAR_16, VAR_15->lb, VAR_15->len))
     return (1);
   VAR_11->lno = 1;
   VAR_11->cno = 0;
   return (0);
  }
 }


 if (FUNC_3(VAR_8, VAR_0)) {
  VAR_16 = VAR_12 ? VAR_10->lno : VAR_10->lno - 1;
  VAR_11->lno = VAR_16 + 1;
  for (; VAR_15 != ((void*)0);
      ++VAR_16, ++VAR_7->rptlines[VAR_2], VAR_15 = FUNC_9(VAR_15, VAR_6))
   if (FUNC_10(VAR_7, 1, VAR_16, VAR_15->lb, VAR_15->len))
    return (1);
  VAR_11->cno = 0;
  (void)FUNC_15(VAR_7, VAR_11->lno, &VAR_11->cno);
  return (0);
 }
 VAR_16 = VAR_10->lno;
 if (FUNC_11(VAR_7, VAR_16, VAR_1, &VAR_23, &VAR_19))
  return (1);

 FUNC_4(VAR_7, VAR_21, VAR_17, VAR_15->len + VAR_19 + 1);
 VAR_22 = VAR_21;


 if (VAR_19 > 0 && (VAR_18 = VAR_10->cno + (VAR_12 ? 1 : 0)) > 0) {
  FUNC_6(VAR_21, VAR_23, VAR_18);
  VAR_23 += VAR_18;
  VAR_22 += VAR_18;
 }


 if (VAR_15->len != 0) {
  FUNC_6(VAR_22, VAR_15->lb, VAR_15->len);
  VAR_22 += VAR_15->len;
 }


 VAR_18 = VAR_19 == 0 ? 0 : VAR_19 - (VAR_10->cno + (VAR_12 ? 1 : 0));
 VAR_11->lno = VAR_16;
 VAR_11->cno = VAR_19 == 0 ? 0 : VAR_7->cno + (VAR_12 && VAR_15->len ? 1 : 0);







 if (FUNC_9(VAR_15, VAR_6) == ((void*)0)) {
  if (VAR_18 > 0) {
   FUNC_6(VAR_22, VAR_23, VAR_18);
   VAR_22 += VAR_18;
  }
  if (FUNC_13(VAR_7, VAR_16, VAR_21, VAR_22 - VAR_21))
   goto err;
  if (VAR_7->rptlchange != VAR_16) {
   VAR_7->rptlchange = VAR_16;
   ++VAR_7->rptlines[VAR_3];
  }
 } else {
  VAR_14 = FUNC_8(VAR_8->textq, VAR_5);
  VAR_19 = VAR_22 - VAR_21;
  FUNC_0(VAR_7, VAR_21, VAR_17, VAR_14->len + VAR_18);
  VAR_22 = VAR_21 + VAR_19;


  FUNC_6(VAR_22, VAR_14->lb, VAR_14->len);
  if (VAR_18)
   FUNC_6(VAR_22 + VAR_14->len, VAR_23, VAR_18);
  VAR_18 += VAR_14->len;
  if (FUNC_13(VAR_7, VAR_16, VAR_21, VAR_22 - VAR_21))
   goto err;
  if (VAR_7->rptlchange != VAR_16) {
   VAR_7->rptlchange = VAR_16;
   ++VAR_7->rptlines[VAR_3];
  }


  for (VAR_15 = FUNC_9(VAR_15, VAR_6); FUNC_9(VAR_15, VAR_6) != ((void*)0);
      ++VAR_16, ++VAR_7->rptlines[VAR_2], VAR_15 = FUNC_9(VAR_15, VAR_6))
   if (FUNC_10(VAR_7, 1, VAR_16, VAR_15->lb, VAR_15->len))
    goto err;

  if (FUNC_10(VAR_7, 1, VAR_16, VAR_22, VAR_18))
   goto err;
  ++VAR_7->rptlines[VAR_2];
 }
 VAR_20 = 0;

 if (0)
err: VAR_20 = 1;

 FUNC_2(VAR_7, VAR_21, VAR_17);
 return (VAR_20);
}
