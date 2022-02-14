
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 device_t * VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_1 == ((void*)0))
  return;
 if (FUNC_0(VAR_1, &VAR_3, &VAR_4) != 0)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(FUNC_2(VAR_3[VAR_5]), VAR_3[VAR_5]);
 FUNC_3(VAR_3, VAR_0);
}
