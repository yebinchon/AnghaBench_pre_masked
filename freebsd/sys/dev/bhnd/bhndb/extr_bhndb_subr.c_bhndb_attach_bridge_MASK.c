
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(device_t VAR_1, device_t *VAR_2, int VAR_3)
{
 int VAR_4;

 *VAR_2 = FUNC_0(VAR_1, "bhndb", VAR_3);
 if (*VAR_2 == ((void*)0))
  return (VAR_0);

 if (!(VAR_4 = FUNC_3(*VAR_2)))
  return (0);

 if ((FUNC_1(VAR_1, *VAR_2)))
  FUNC_2(VAR_1, "failed to detach bhndb child\n");

 return (VAR_4);
}
