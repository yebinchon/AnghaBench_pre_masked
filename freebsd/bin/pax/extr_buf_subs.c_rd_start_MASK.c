
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int,char*,size_t,size_t) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;

int
FUNC_3(void)
{





 VAR_5 = &(VAR_7[VAR_1]);
 if ((VAR_3 == VAR_0) && VAR_11) {
  if (VAR_11 > VAR_2) {
   FUNC_2(1,"Write block size %d too large, maximum is: %d",
    VAR_11, VAR_2);
   return(-1);
  }
  if (VAR_11 % VAR_1) {
   FUNC_2(1, "Write block size %d is not a %d byte multiple",
   VAR_11, VAR_1);
   return(-1);
  }
 }




 if ((FUNC_1(VAR_4) < 0) && (FUNC_0() < 0))
  return(-1);
 VAR_6 = VAR_5 + VAR_9;
 VAR_8 = VAR_6;
 VAR_10 = 0;
 return(0);
}
