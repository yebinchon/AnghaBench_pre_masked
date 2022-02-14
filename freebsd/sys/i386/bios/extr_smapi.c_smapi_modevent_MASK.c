
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;
typedef int device_t ;




 int VAR_0 ;
 int FUNC_0 (int ,int **,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4 (module_t VAR_2, int VAR_3, void *VAR_4)
{
 device_t * VAR_5;
 int VAR_6;
 int VAR_7;

 switch (VAR_3) {
 case 129:
  break;
 case 128:
  FUNC_0(VAR_1, &VAR_5, &VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   FUNC_1(FUNC_2(VAR_5[VAR_7]), VAR_5[VAR_7]);
  }
  FUNC_3(VAR_5, VAR_0);
  break;
 default:
  break;
 }

 return (0);
}
