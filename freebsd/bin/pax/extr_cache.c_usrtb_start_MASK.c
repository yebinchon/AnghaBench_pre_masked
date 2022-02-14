
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UIDC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*) ;
 int ** VAR_1 ;

int
FUNC_2(void)
{
 static int VAR_2 = 0;

 if (VAR_1 != ((void*)0))
  return(0);
 if (VAR_2)
  return(-1);
 if ((VAR_1 = (UIDC **)FUNC_0(VAR_0, sizeof(UIDC *))) == ((void*)0)) {
  ++VAR_2;
  FUNC_1(1, "Unable to allocate memory for user name cache table");
  return(-1);
 }
 return(0);
}
