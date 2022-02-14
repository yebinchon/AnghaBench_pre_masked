
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hsz; scalar_t__ (* id ) (char*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10 = VAR_1;
 char *VAR_11;
 int VAR_12 = 0;





 for (VAR_7 = 0; VAR_3[VAR_7] >= 0; ++VAR_7) {
  if (VAR_5[VAR_3[VAR_7]].hsz < VAR_10)
   VAR_10 = VAR_5[VAR_3[VAR_7]].hsz;
 }
 if (FUNC_3() < 0)
  return(-1);
 VAR_9 = VAR_1;
 VAR_8 = 0;
 VAR_11 = VAR_6;
 for(;;) {
  for (;;) {



   VAR_7 = FUNC_5(VAR_11, VAR_9);
   if (VAR_7 > 0)
    VAR_8 += VAR_7;
   if (VAR_8 >= VAR_10)
    break;




   if ((VAR_7 == 0) || (FUNC_4() < 0))
    goto out;







   VAR_9 = VAR_1;
   VAR_8 = 0;
   VAR_11 = VAR_6;
   if (!VAR_12) {
    if (VAR_2 == VAR_0)
     return(-1);
    FUNC_1(1,"Cannot identify format. Searching...");
    ++VAR_12;
   }
  }
  for (VAR_7 = 0; VAR_3[VAR_7] >= 0; ++VAR_7) {
   if ((*VAR_5[VAR_3[VAR_7]].id)(VAR_6, VAR_8) < 0)
    continue;
   VAR_4 = &(VAR_5[VAR_3[VAR_7]]);







   FUNC_2(VAR_6, VAR_8);
   return(0);
  }





  if (!VAR_12) {
   if (VAR_2 == VAR_0)
    return(-1);
   FUNC_1(1, "Cannot identify format. Searching...");
   ++VAR_12;
  }







  if (--VAR_8 > 0) {
   FUNC_0(VAR_6, VAR_6+1, VAR_8);
   VAR_9 = VAR_1 - VAR_8;
   VAR_11 = VAR_6 + VAR_8;
  } else {
   VAR_9 = VAR_1;
   VAR_11 = VAR_6;
   VAR_8 = 0;
  }
 }

    out:



 FUNC_1(1, "Sorry, unable to determine archive format.");
 return(-1);
}
