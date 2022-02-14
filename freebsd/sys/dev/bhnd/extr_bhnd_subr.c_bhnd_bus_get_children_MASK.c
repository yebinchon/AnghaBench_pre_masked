
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int bhnd_device_order ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int **,int*) ;

int
FUNC_3(device_t VAR_0, device_t **VAR_1, int *VAR_2,
    bhnd_device_order VAR_3)
{
 int VAR_4;


 if ((VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2)))
  return (VAR_4);


 if ((VAR_4 = FUNC_1(*VAR_1, *VAR_2, VAR_3))) {
  FUNC_0(*VAR_1);
  return (VAR_4);
 }

 return (0);
}
