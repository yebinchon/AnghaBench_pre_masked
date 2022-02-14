
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t bsz; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int * VAR_7 ;
 void* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (int,char*,size_t,size_t) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;

int
FUNC_3(void)
{
 VAR_5 = &(VAR_7[VAR_0]);







 if (!VAR_11)
  VAR_11 = VAR_9->bsz;
 if (VAR_11 > VAR_1) {
  FUNC_2(1, "Write block size of %d too large, maximum is: %d",
   VAR_11, VAR_1);
  return(-1);
 }
 if (VAR_11 % VAR_0) {
  FUNC_2(1, "Write block size of %d is not a %d byte multiple",
      VAR_11, VAR_0);
  return(-1);
 }
 if (VAR_11 > VAR_2) {
  FUNC_2(0, "Write block size of %d larger than POSIX max %d, archive may not be portable",
   VAR_11, VAR_2);
  return(-1);
 }




 VAR_4 = VAR_10 = VAR_11;
 if ((FUNC_1(VAR_3) < 0) && (FUNC_0() < 0))
  return(-1);
 VAR_12 = 0;
 VAR_6 = VAR_5 + VAR_11;
 VAR_8 = VAR_5;
 return(0);
}
