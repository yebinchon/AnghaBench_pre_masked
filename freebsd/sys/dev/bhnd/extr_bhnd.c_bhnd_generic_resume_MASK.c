
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int **,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_2)
{
 device_t *VAR_3;
 int VAR_4;
 int VAR_5;

 if (!FUNC_4(VAR_2))
  return (VAR_1);


 VAR_5 = FUNC_2(VAR_2, &VAR_3, &VAR_4,
     VAR_0);
 if (VAR_5)
  return (VAR_5);


 for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  device_t VAR_7 = VAR_3[VAR_6];


  if ((VAR_5 = FUNC_0(FUNC_3(VAR_7), VAR_7)))
   goto cleanup;
 }

cleanup:
 FUNC_1(VAR_3);
 return (VAR_5);
}
