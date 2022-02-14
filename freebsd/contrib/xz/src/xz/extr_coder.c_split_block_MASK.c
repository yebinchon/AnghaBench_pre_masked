
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_2,
     uint64_t *VAR_3,
     size_t *VAR_4)
{
 if (*VAR_3 > 0) {

  FUNC_0(FUNC_1() == 1);
  FUNC_0(VAR_1 > 0);
  FUNC_0(VAR_0 != ((void*)0));

  if (*VAR_3 > VAR_1) {


   *VAR_2 = VAR_1;
  } else {


   *VAR_2 = *VAR_3;
  }

  *VAR_3 -= *VAR_2;

 } else {



  if (VAR_0[*VAR_4 + 1] != 0)
   ++*VAR_4;

  *VAR_2 = VAR_0[*VAR_4];




  if (FUNC_1() == 1 && VAR_1 > 0
    && *VAR_2 > VAR_1) {
   *VAR_3
     = *VAR_2 - VAR_1;
   *VAR_2 = VAR_1;
  }
 }
}
