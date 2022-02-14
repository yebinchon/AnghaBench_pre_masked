
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Cell ;


 int FUNC_0 (char*,int) ;
 int ** VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

Cell *FUNC_2(int VAR_2)
{
 if (VAR_2 < 0)
  FUNC_0("trying to access out of range field %d", VAR_2);
 if (VAR_2 > VAR_1)
  FUNC_1(VAR_2);
 return(VAR_0[VAR_2]);
}
