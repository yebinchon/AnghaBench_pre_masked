
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;

int
FUNC_5(void)
{
 int VAR_5;

 if ((VAR_5 = FUNC_3(VAR_0, VAR_1)) >= 0) {
  if ((VAR_4 = FUNC_2(VAR_5, "w")) != ((void*)0)) {
   if ((VAR_3 = FUNC_2(VAR_5, "r")) != ((void*)0))
    return(0);
   (void)FUNC_1(VAR_4);
  }
  (void)FUNC_0(VAR_5);
 }

 if (VAR_2) {
  FUNC_4(1, "Fatal error, cannot open %s", VAR_0);
  return(-1);
 }
 return(0);
}
