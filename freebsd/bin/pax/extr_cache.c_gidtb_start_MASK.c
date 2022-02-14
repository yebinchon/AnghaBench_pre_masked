
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GIDC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int ** VAR_1 ;
 int FUNC_1 (int,char*) ;

int
FUNC_2(void)
{
 static int VAR_2 = 0;

 if (VAR_1 != ((void*)0))
  return(0);
 if (VAR_2)
  return(-1);
 if ((VAR_1 = (GIDC **)FUNC_0(VAR_0, sizeof(GIDC *))) == ((void*)0)) {
  ++VAR_2;
  FUNC_1(1, "Unable to allocate memory for group id cache table");
  return(-1);
 }
 return(0);
}
