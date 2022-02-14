
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_2(void)
{
 int VAR_7;
 static int VAR_8 = 0;

 if (VAR_8)
  return(0);

 for(;;) {




  if ((VAR_7 = FUNC_1(VAR_1, VAR_0)) > 0) {
   VAR_3 = VAR_1;
   VAR_2 = VAR_1 + VAR_7;
   VAR_6 += VAR_7;
   return(VAR_7);
  }







  if (VAR_7 < 0)
   break;
  if (VAR_5 == ((void*)0) || FUNC_0() < 0) {
   VAR_8 = 1;
   return(0);
  }
  VAR_6 = 0;
 }
 VAR_4 = 1;
 return(-1);
}
