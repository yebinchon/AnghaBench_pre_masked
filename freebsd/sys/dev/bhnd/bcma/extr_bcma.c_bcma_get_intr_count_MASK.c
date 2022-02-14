
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bcma_devinfo {int num_intrs; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 struct bcma_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

u_int
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct bcma_devinfo *VAR_2;


 if (FUNC_2(VAR_1) != VAR_0)
  return (FUNC_0(FUNC_2(VAR_0), VAR_1));

 VAR_2 = FUNC_1(VAR_1);
 return (VAR_2->num_intrs);
}
