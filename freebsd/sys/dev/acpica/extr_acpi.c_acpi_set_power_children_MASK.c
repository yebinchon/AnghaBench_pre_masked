
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int **,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, int VAR_2)
{
 device_t VAR_3;
 device_t *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (FUNC_2(VAR_1, &VAR_4, &VAR_7) != 0)
  return;





 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_3 = VAR_4[VAR_6];
  VAR_5 = VAR_2;
  if (FUNC_3(VAR_3) &&
      FUNC_0(VAR_1, VAR_3, &VAR_5) == 0)
   FUNC_1(VAR_3, VAR_5);
 }
 FUNC_4(VAR_4, VAR_0);
}
