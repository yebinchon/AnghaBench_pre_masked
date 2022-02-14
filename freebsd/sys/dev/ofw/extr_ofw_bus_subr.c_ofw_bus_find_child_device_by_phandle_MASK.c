
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ***,int*) ;
 int FUNC_2 (int **,int ) ;

device_t
FUNC_3(device_t VAR_1, phandle_t VAR_2)
{
 device_t *VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;




 if (VAR_2 == -1)
  return (((void*)0));






 if (FUNC_1(VAR_1, &VAR_3, &VAR_6) != 0)
  return (((void*)0));
 VAR_4 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = VAR_3[VAR_7];
  if (FUNC_0(VAR_1, VAR_5) == VAR_2) {
   VAR_4 = VAR_5;
   break;
  }
 }
 FUNC_2(VAR_3, VAR_0);

 return (VAR_4);
}
