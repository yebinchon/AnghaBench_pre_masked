
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
 int FUNC_1 (int ,struct bcma_devinfo*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

int
FUNC_4(device_t VAR_2, struct bcma_devinfo *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 if (VAR_3->res_agent == ((void*)0))
  return (VAR_1);


 VAR_5 = FUNC_2(VAR_3->res_agent, VAR_0);
 if (VAR_5 == VAR_4)
  return (0);

 FUNC_3(VAR_3->res_agent, VAR_0, VAR_4);
 FUNC_2(VAR_3->res_agent, VAR_0);
 FUNC_0(10);

 return (FUNC_1(VAR_2, VAR_3));
}
