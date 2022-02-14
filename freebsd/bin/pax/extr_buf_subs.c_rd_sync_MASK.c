
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (void*,int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ VAR_7 ;

int
FUNC_4(void)
{
 int VAR_8 = 0;
 int VAR_9;




 if (VAR_6 == 0)
  return(-1);
 if (VAR_1 == VAR_0) {
  FUNC_3(1, "Unable to append when there are archive read errors.");
  return(-1);
 }




 if (FUNC_1() < 0) {
  if (FUNC_0() < 0)
   return(-1);
  else
   VAR_7 = 0;
 }

 for (;;) {
  if ((VAR_9 = FUNC_2(VAR_3, VAR_2)) > 0) {



   VAR_5 = VAR_3;
   VAR_4 = VAR_3 + VAR_9;
   VAR_7 += VAR_9;
   return(0);
  }
  if ((VAR_6 > 0) && (++VAR_8 > VAR_6))
   FUNC_3(0,"Archive read error limit (%d) reached",VAR_6);
  else if (FUNC_1() == 0)
   continue;
  if (FUNC_0() < 0)
   break;
  VAR_7 = 0;
  VAR_8 = 0;
 }
 return(-1);
}
