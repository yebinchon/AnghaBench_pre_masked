
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_16__ {int lno; size_t cno; } ;
struct TYPE_15__ {int * rptlines; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,int *,size_t,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,size_t) ;
 int FUNC_2 (TYPE_1__*,int *,size_t,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int *,int *,size_t) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int *,size_t) ;
 int FUNC_9 (TYPE_1__*,int ,char*) ;

int
FUNC_10(
 SCR *VAR_5,
 MARK *VAR_6,
 MARK *VAR_7,
 int VAR_8)
{
 recno_t VAR_9;
 size_t VAR_10, VAR_11, VAR_12, VAR_13;
 CHAR_T *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = ((void*)0);


 if (VAR_8) {
  for (VAR_9 = VAR_7->lno; VAR_9 >= VAR_6->lno; --VAR_9) {
   if (FUNC_5(VAR_5, VAR_9))
    return (1);
   ++VAR_5->rptlines[VAR_3];
   if (VAR_9 % VAR_2 == 0 && FUNC_3(VAR_5))
    break;
  }
  goto done;
 }





 if (FUNC_7(VAR_5, &VAR_9))
  return (1);
 if (VAR_7->lno >= VAR_9) {
  if (VAR_7->lno == VAR_9) {
   if (FUNC_6(VAR_5, VAR_9, VAR_0, &VAR_15, &VAR_11))
    return (1);
   VAR_16 = VAR_7->cno != VAR_1 && VAR_7->cno >= VAR_11 ? 1 : 0;
  } else
   VAR_16 = 1;
  if (VAR_16) {
   for (VAR_9 = VAR_7->lno; VAR_9 > VAR_6->lno; --VAR_9) {
    if (FUNC_5(VAR_5, VAR_9))
     return (1);
    ++VAR_5->rptlines[VAR_3];
    if (VAR_9 %
        VAR_2 == 0 && FUNC_3(VAR_5))
     break;
   }
   if (FUNC_6(VAR_5, VAR_6->lno, VAR_0, &VAR_15, &VAR_11))
    return (1);
   FUNC_2(VAR_5, VAR_14, VAR_10, VAR_6->cno);
   FUNC_4(VAR_14, VAR_15, VAR_6->cno);
   if (FUNC_8(VAR_5, VAR_6->lno, VAR_14, VAR_6->cno))
    return (1);
   goto done;
  }
 }


 if (VAR_7->lno == VAR_6->lno) {
  if (FUNC_6(VAR_5, VAR_6->lno, VAR_0, &VAR_15, &VAR_11))
   return (1);
  FUNC_2(VAR_5, VAR_14, VAR_10, VAR_11);
  if (VAR_6->cno != 0)
   FUNC_4(VAR_14, VAR_15, VAR_6->cno);
  FUNC_4(VAR_14 + VAR_6->cno, VAR_15 + (VAR_7->cno + 1),
   VAR_11 - (VAR_7->cno + 1));
  if (FUNC_8(VAR_5, VAR_6->lno,
      VAR_14, VAR_11 - ((VAR_7->cno - VAR_6->cno) + 1)))
   goto err;
  goto done;
 }






 if ((VAR_13 = VAR_6->cno) != 0) {
  if (FUNC_6(VAR_5, VAR_6->lno, VAR_0, &VAR_15, ((void*)0)))
   return (1);
  FUNC_2(VAR_5, VAR_14, VAR_10, VAR_13 + 256);
  FUNC_4(VAR_14, VAR_15, VAR_13);
 }


 if (FUNC_6(VAR_5, VAR_7->lno, VAR_0, &VAR_15, &VAR_11))
  goto err;
 if (VAR_11 != 0 && VAR_7->cno != VAR_11 - 1) {






  VAR_12 = (VAR_11 - (VAR_7->cno + 1)) + VAR_13;
  if (VAR_13 > VAR_12) {
   FUNC_9(VAR_5, VAR_4, "002|Line length overflow");
   goto err;
  }
  if (VAR_13 == 0) {
   FUNC_2(VAR_5, VAR_14, VAR_10, VAR_12);
  } else
   FUNC_0(VAR_5, VAR_14, VAR_10, VAR_12);

  FUNC_4(VAR_14 + VAR_13, VAR_15 + (VAR_7->cno + 1), VAR_11 - (VAR_7->cno + 1));
  VAR_13 += VAR_11 - (VAR_7->cno + 1);
 }


 if (FUNC_8(VAR_5, VAR_6->lno, VAR_14, VAR_13))
  goto err;


 for (VAR_9 = VAR_7->lno; VAR_9 > VAR_6->lno; --VAR_9) {
  if (FUNC_5(VAR_5, VAR_9))
   goto err;
  ++VAR_5->rptlines[VAR_3];
  if (VAR_9 % VAR_2 == 0 && FUNC_3(VAR_5))
   break;
 }

done: VAR_17 = 0;
 if (0)
err: VAR_17 = 1;
 if (VAR_14 != ((void*)0))
  FUNC_1(VAR_5, VAR_14, VAR_10);
 return (VAR_17);
}
