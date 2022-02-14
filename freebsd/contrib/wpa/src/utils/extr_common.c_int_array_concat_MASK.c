
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int*,int,int) ;

void FUNC_3(int **VAR_0, const int *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int *VAR_5;

 VAR_2 = FUNC_0(*VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 VAR_5 = FUNC_2(*VAR_0, VAR_2 + VAR_3 + 1, sizeof(int));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
  return;
 }
 for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++)
  VAR_5[VAR_2 + VAR_4] = VAR_1[VAR_4];
 *VAR_0 = VAR_5;
}
