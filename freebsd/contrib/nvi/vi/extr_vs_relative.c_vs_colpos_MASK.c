
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_5__ {size_t cols; } ;
typedef TYPE_1__ SCR ;
typedef int CHAR_T ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int **,size_t*) ;

size_t
FUNC_3(SCR *VAR_3, recno_t VAR_4, size_t VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;
 CHAR_T *VAR_15, *VAR_16;


 (void)FUNC_2(VAR_3, VAR_4, 0, &VAR_15, &VAR_9);


 if (VAR_15 == ((void*)0) || VAR_9 == 0)
  return (0);


 VAR_14 = FUNC_1(VAR_3, VAR_1);
 VAR_13 = FUNC_1(VAR_3, VAR_0);


 VAR_10 = VAR_5 / VAR_3->cols;
 VAR_5 %= VAR_3->cols;
 for (VAR_11 = 0, VAR_16 = VAR_15, VAR_8 = VAR_9; VAR_10--;) {
  for (; VAR_8 && VAR_11 < VAR_3->cols; --VAR_8)
   VAR_11 += FUNC_0(VAR_11);





  if (VAR_8 == 0)
   return (VAR_9 - 1);







  if (VAR_13 && VAR_12 == '\t')
   VAR_11 = 0;
  else
   VAR_11 -= VAR_3->cols;
 }


 for (VAR_7 = VAR_11; VAR_8--;) {
  VAR_6 = FUNC_0(VAR_7);
  if ((VAR_11 += VAR_6) >= VAR_5) {
   VAR_10 = VAR_16 - VAR_15;
   return (VAR_11 == VAR_5 ?
       (VAR_10 < VAR_9 - 1 ? VAR_10 : VAR_9 - 1) : VAR_10 - 1);
  }

  VAR_2;
 }


 return (VAR_9 - 1);
}
