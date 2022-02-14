
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct bhnd_pcie2_devinfo {struct resource_list resources; } ;
typedef scalar_t__ device_t ;


 struct bhnd_pcie2_devinfo* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct resource_list *
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct bhnd_pcie2_devinfo *VAR_2;

 if (FUNC_1(VAR_1) != VAR_0)
  return (((void*)0));

 VAR_2 = FUNC_0(VAR_1);
 return (&VAR_2->resources);
}
