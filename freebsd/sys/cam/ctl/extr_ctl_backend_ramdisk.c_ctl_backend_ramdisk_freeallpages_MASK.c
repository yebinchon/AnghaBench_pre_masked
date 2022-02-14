
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ) ;

__attribute__((used)) static void
FUNC_1(uint8_t **VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;
 if (VAR_3 == 0) {
  FUNC_0(VAR_2, VAR_0);
  return;
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4] == ((void*)0))
   continue;
  FUNC_1((uint8_t **)VAR_2[VAR_4], VAR_3 - 1);
 }
 FUNC_0(VAR_2, VAR_0);
}
