
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;




 int FUNC_1 (int ,int **,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_1)
{
 device_t VAR_2, *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if ((VAR_4 = FUNC_1(VAR_1, &VAR_3, &VAR_6)) != 0)
  return (VAR_4);




 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_2 = VAR_3[VAR_5];
  switch (FUNC_3(VAR_2)) {
  case 129:
  case 128:
  case 130:
  case 131:
   FUNC_0(VAR_1, VAR_2);
   break;
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_2 = VAR_3[VAR_5];
  switch (FUNC_3(VAR_2)) {
  case 129:
  case 128:
  case 130:
  case 131:
   break;
  default:
   FUNC_0(VAR_1, VAR_2);
  }
 }
 FUNC_2(VAR_3, VAR_0);
 return (0);
}
