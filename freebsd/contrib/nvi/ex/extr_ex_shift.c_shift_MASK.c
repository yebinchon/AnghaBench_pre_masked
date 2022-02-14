
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef scalar_t__ recno_t ;
typedef enum which { ____Placeholder_which } which ;
struct TYPE_19__ {scalar_t__ lno; } ;
struct TYPE_20__ {scalar_t__ lno; } ;
struct TYPE_23__ {TYPE_11__ addr1; TYPE_12__ addr2; TYPE_1__** argv; } ;
struct TYPE_22__ {scalar_t__ lno; size_t cno; int * rptlines; } ;
struct TYPE_21__ {char* bp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXCMD ;
typedef char CHAR_T ;


 int FUNC_0 (TYPE_2__*,char*,size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,char*,size_t,int) ;
 size_t VAR_2 ;
 int FUNC_3 (char*,char*,size_t) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_5 (TYPE_2__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,TYPE_11__*,TYPE_12__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int ,char**,size_t*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__,char*,int) ;
 int FUNC_9 (TYPE_2__*,int ,char*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,size_t*) ;

__attribute__((used)) static int
FUNC_11(SCR *VAR_7, EXCMD *VAR_8, enum which VAR_9)
{
 recno_t VAR_10, VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 CHAR_T *VAR_20;
 CHAR_T *VAR_21, *VAR_22;

 FUNC_4(VAR_7, VAR_8);

 if (FUNC_5(VAR_7, VAR_4) == 0) {
  FUNC_9(VAR_7, VAR_3, "152|shiftwidth option set to 0");
  return (0);
 }


 if (FUNC_6(VAR_7, ((void*)0), &VAR_8->addr1, &VAR_8->addr2, VAR_0))
  return (1);
 for (VAR_20 = VAR_8->argv[0]->bp, VAR_18 = 0; *VAR_20 == '>' || *VAR_20 == '<'; ++VAR_20)
  VAR_18 += FUNC_5(VAR_7, VAR_4);

 FUNC_2(VAR_7, VAR_21, VAR_12, 256);

 VAR_19 = 0;
 for (VAR_10 = VAR_8->addr1.lno, VAR_11 = VAR_8->addr2.lno; VAR_10 <= VAR_11; ++VAR_10) {
  if (FUNC_7(VAR_7, VAR_10, VAR_1, &VAR_20, &VAR_13))
   goto err;
  if (!VAR_13) {
   if (VAR_7->lno == VAR_10)
    VAR_19 = 1;
   continue;
  }





  for (VAR_17 = 0, VAR_16 = 0; VAR_17 < VAR_13; ++VAR_17)
   if (VAR_20[VAR_17] == ' ')
    ++VAR_16;
   else if (VAR_20[VAR_17] == '\t')
    VAR_16 += FUNC_5(VAR_7, VAR_5) -
        VAR_16 % FUNC_5(VAR_7, VAR_5);
   else
    break;


  if (VAR_9 == VAR_6)
   VAR_14 = VAR_16 + VAR_18;
  else {
   VAR_14 = VAR_16 < VAR_18 ? 0 : VAR_16 - VAR_18;
   if (VAR_14 == VAR_16) {
    if (VAR_7->lno == VAR_10)
     VAR_19 = 1;
    continue;
   }
  }


  FUNC_0(VAR_7, VAR_21, VAR_12, VAR_14 + VAR_13);





  for (VAR_22 = VAR_21, VAR_15 = 0;
      VAR_14 >= FUNC_5(VAR_7, VAR_5); ++VAR_15) {
   *VAR_22++ = '\t';
   VAR_14 -= FUNC_5(VAR_7, VAR_5);
  }
  for (; VAR_14 > 0; --VAR_14, ++VAR_15)
   *VAR_22++ = ' ';


  FUNC_3(VAR_22, VAR_20 + VAR_17, VAR_13 - VAR_17);


  if (FUNC_8(VAR_7, VAR_10, VAR_21, (VAR_22 + (VAR_13 - VAR_17)) - VAR_21)) {
err: FUNC_1(VAR_7, VAR_21, VAR_12);
   return (1);
  }
  if (VAR_7->lno == VAR_10) {
   VAR_19 = 1;
   if (VAR_15 > VAR_17)
    VAR_7->cno += VAR_15 - VAR_17;
   else if (VAR_7->cno >= VAR_17 - VAR_15)
    VAR_7->cno -= VAR_17 - VAR_15;
  }
 }
 if (!VAR_19) {
  VAR_7->lno = VAR_11;
  VAR_7->cno = 0;
  (void)FUNC_10(VAR_7, VAR_11, &VAR_7->cno);
 }

 FUNC_1(VAR_7, VAR_21, VAR_12);

 VAR_7->rptlines[VAR_2] += VAR_8->addr2.lno - VAR_8->addr1.lno + 1;
 return (0);
}
