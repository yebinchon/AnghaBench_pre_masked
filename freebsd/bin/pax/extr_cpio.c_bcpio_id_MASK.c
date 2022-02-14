
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int HD_BCPIO ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_1 ;

int
FUNC_2(char *VAR_2, int VAR_3)
{
 if (VAR_3 < (int)sizeof(HD_BCPIO))
  return(-1);




 if (((u_short)FUNC_1(VAR_2)) == VAR_0)
  return(0);
 if (((u_short)FUNC_0(VAR_2)) == VAR_0) {
  if (!VAR_1)
   ++VAR_1;
  return(0);
 }
 return(-1);
}
