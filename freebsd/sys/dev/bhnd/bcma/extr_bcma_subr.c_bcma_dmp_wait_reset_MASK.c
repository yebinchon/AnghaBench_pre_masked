
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bcma_devinfo {int * res_agent; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(device_t VAR_3, struct bcma_devinfo *VAR_4)
{
 uint32_t VAR_5;

 if (VAR_4->res_agent == ((void*)0))
  return (VAR_1);




 for (int VAR_6 = 0; VAR_6 < 10000; VAR_6 += 10) {
  VAR_5 = FUNC_1(VAR_4->res_agent, VAR_0);
  if (VAR_5 == 0)
   return (0);

  FUNC_0(10);
 }

 FUNC_2(VAR_3, "BCMA_DMP_RESETSTATUS timeout\n");
 return (VAR_2);
}
