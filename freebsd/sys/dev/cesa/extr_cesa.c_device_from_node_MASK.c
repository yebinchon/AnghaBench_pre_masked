
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ***,int*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int **,int ) ;

__attribute__((used)) static device_t
FUNC_4(device_t VAR_1, phandle_t VAR_2)
{
 device_t *VAR_3, VAR_4;
 int VAR_5, VAR_6;


 if (VAR_2 == -1)
  return (((void*)0));

 if (VAR_1 == ((void*)0))

  if ((VAR_1 = FUNC_2("root0")) == ((void*)0))
   return (((void*)0));

 if (FUNC_1(VAR_1, &VAR_3, &VAR_5) != 0)
  return (((void*)0));

 VAR_4 = ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  if (FUNC_0(VAR_1, VAR_3[VAR_6]) == VAR_2) {
   VAR_4 = VAR_3[VAR_6];
   break;
  }

  if ((VAR_4 = FUNC_4(VAR_3[VAR_6], VAR_2)) != ((void*)0))
   break;
 }
 FUNC_3(VAR_3, VAR_0);

 return (VAR_4);
}
