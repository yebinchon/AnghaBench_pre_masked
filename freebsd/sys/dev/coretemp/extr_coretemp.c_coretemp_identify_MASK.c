
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int driver_t ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_3, device_t VAR_4)
{
 device_t VAR_5;
 u_int VAR_6[4];


 if (FUNC_1(VAR_4, "coretemp", -1) != ((void*)0))
  return;


 if (VAR_1 < 6 || VAR_2 != VAR_0)
  return;




 FUNC_3(0x06, VAR_6);
 if ((VAR_6[0] & 0x1) != 1)
  return;





 VAR_5 = FUNC_0(VAR_4, "coretemp", -1);
 if (VAR_5 == ((void*)0))
  FUNC_2(VAR_4, "add coretemp child failed\n");
}
