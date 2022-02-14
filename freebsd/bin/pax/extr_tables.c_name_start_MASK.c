
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NAMT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int ** VAR_1 ;
 int FUNC_1 (int,char*) ;

int
FUNC_2(void)
{
 if (VAR_1 != ((void*)0))
  return(0);
  if ((VAR_1 = (NAMT **)FUNC_0(VAR_0, sizeof(NAMT *))) == ((void*)0)) {
  FUNC_1(1, "Cannot allocate memory for interactive rename table");
  return(-1);
 }
 return(0);
}
