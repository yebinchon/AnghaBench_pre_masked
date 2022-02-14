
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_7, int *VAR_8)
{

 FUNC_0(&VAR_6, VAR_3);
 if (VAR_7 >= 0) {
  if (VAR_7 >= VAR_4)
   *VAR_8 = VAR_1;
  else if (VAR_5[VAR_7] == ((void*)0))
   return (VAR_7);
  else
   *VAR_8 = VAR_0;
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   if (VAR_5[VAR_7] == ((void*)0))
    return (VAR_7);
  }
  *VAR_8 = VAR_2;
 }
 return (-1);
}
