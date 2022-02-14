
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(char *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;




 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_2[VAR_5] != '\0')
   break;
 }




 if (VAR_5 != VAR_0)
  return(-1);
 if (!VAR_3 && (++*VAR_4 >= VAR_1))
  return(0);
 return(1);
}
