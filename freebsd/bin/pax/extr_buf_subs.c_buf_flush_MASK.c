
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blkalgn; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_4(int VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;







 if ((VAR_7 > 0) && (VAR_6 > VAR_7)) {
  FUNC_3(0, "User specified archive volume byte limit reached.");
  if (FUNC_0() < 0) {
   VAR_6 = 0;
   VAR_4 = 1;
   return(-1);
  }
  VAR_6 = 0;
  VAR_2 = VAR_1 + VAR_0;
  if (VAR_0 > VAR_8)
   return(0);
  if (VAR_0 < VAR_8)
   VAR_10 = VAR_8 - VAR_0;
 }




 for (;;) {



  VAR_9 = FUNC_1(VAR_1, VAR_0);
  if (VAR_9 == VAR_0) {



   VAR_6 += VAR_9;
   VAR_11 += VAR_9;
   if (VAR_10 > 0) {




    FUNC_2(VAR_1, VAR_2, VAR_10);
    VAR_3 = VAR_1 + VAR_10;
    if (VAR_10 >= VAR_0) {
     VAR_10 -= VAR_0;
     continue;
    }
   } else
    VAR_3 = VAR_1;
   return(VAR_11);
  } else if (VAR_9 > 0) {






   VAR_11 += VAR_9;
   VAR_6 += VAR_9;
   VAR_3 = VAR_1 + VAR_9;
   VAR_9 = VAR_8 - VAR_9;
   FUNC_2(VAR_1, VAR_3, VAR_9);
   VAR_3 = VAR_1 + VAR_9;
   if (!VAR_5->blkalgn || ((VAR_9 % VAR_5->blkalgn) == 0))
    return(VAR_11);
   break;
  }




  VAR_6 = 0;
  if (FUNC_0() < 0)
   break;






  VAR_2 = VAR_1 + VAR_0;
  if (VAR_0 > VAR_8)
   return(0);
  if (VAR_0 < VAR_8)
   VAR_10 = VAR_8 - VAR_0;
 }




 VAR_4 = 1;
 return(-1);
}
