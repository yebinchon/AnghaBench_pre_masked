
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_19__ {scalar_t__ lno; } ;
struct TYPE_18__ {scalar_t__ lno; } ;
struct TYPE_21__ {int addrcnt; TYPE_2__ addr1; TYPE_1__ addr2; int iflags; } ;
struct TYPE_20__ {int cno; scalar_t__ lno; int * rptlines; } ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ EXCMD ;
typedef char CHAR_T ;


 int FUNC_0 (TYPE_3__*,char*,size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,char*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_3__*,char*,size_t,int) ;
 int FUNC_5 (char*) ;
 size_t VAR_2 ;
 int FUNC_6 (char*,char*,size_t) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_3__*,scalar_t__,int ,char**,size_t*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_13 (char) ;
 int FUNC_14 (TYPE_3__*,int ,char*) ;

int
FUNC_15(SCR *VAR_4, EXCMD *VAR_5)
{
 recno_t VAR_6, VAR_7;
 size_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;
 CHAR_T *VAR_15, *VAR_16 = ((void*)0);
 CHAR_T *VAR_17;

 FUNC_7(VAR_4, VAR_5);

 VAR_6 = VAR_5->addr1.lno;
 VAR_7 = VAR_5->addr2.lno;


 if (!FUNC_10(VAR_4, VAR_6 + 1)) {
  FUNC_14(VAR_4, VAR_3, "131|No following lines to join");
  return (1);
 }

 FUNC_4(VAR_4, VAR_15, VAR_8, 256);





 if (FUNC_3(VAR_5, VAR_0) || VAR_5->addrcnt == 1)
  ++VAR_5->addr2.lno;

 VAR_9 = VAR_11 = 0;
 for (VAR_14 = 1,
     VAR_6 = VAR_5->addr1.lno, VAR_7 = VAR_5->addr2.lno; VAR_6 <= VAR_7; ++VAR_6) {




  if (FUNC_11(VAR_4, VAR_6, 0, &VAR_17, &VAR_10)) {
   VAR_5->addr2.lno = VAR_6 - 1;
   break;
  }


  if (VAR_10 == 0)
   continue;






  VAR_11 += VAR_10 + 2;
  FUNC_0(VAR_4, VAR_15, VAR_8, VAR_11);
  VAR_16 = VAR_15 + VAR_9;
  VAR_13 = 0;
  if (!VAR_14 && !FUNC_1(VAR_5->iflags, VAR_1)) {
   if (FUNC_13(VAR_12))
    for (; VAR_10 && FUNC_13(*VAR_17); --VAR_10, ++VAR_17);
   else if (VAR_17[0] != ')') {
    if (FUNC_8(FUNC_5(".?!"), VAR_12)) {
     *VAR_16++ = ' ';
     ++VAR_9;
     VAR_13 = 1;
    }
    *VAR_16++ = ' ';
    ++VAR_9;
    for (; VAR_10 && FUNC_13(*VAR_17); --VAR_10, ++VAR_17);
   }
  }

  if (VAR_10 != 0) {
   FUNC_6(VAR_16, VAR_17, VAR_10);
   VAR_16 += VAR_10;
   VAR_9 += VAR_10;
   VAR_12 = VAR_17[VAR_10 - 1];
  } else
   VAR_12 = ' ';
  if (VAR_14) {
   VAR_4->cno = (VAR_16 - VAR_15) - (1 + VAR_13);
   VAR_14 = 0;
  } else
   VAR_4->cno = (VAR_16 - VAR_15) - VAR_10 - (1 + VAR_13);
 }
 VAR_4->lno = VAR_5->addr1.lno;


 for (VAR_6 = VAR_5->addr1.lno, VAR_7 = VAR_5->addr2.lno; VAR_7 > VAR_6; --VAR_7)
  if (FUNC_9(VAR_4, VAR_7))
   goto err;


 if (!VAR_14 && FUNC_12(VAR_4, VAR_6, VAR_15, VAR_16 - VAR_15)) {
err: FUNC_2(VAR_4, VAR_15, VAR_8);
  return (1);
 }
 FUNC_2(VAR_4, VAR_15, VAR_8);

 VAR_4->rptlines[VAR_2] += (VAR_5->addr2.lno - VAR_5->addr1.lno) + 1;
 return (0);
}
