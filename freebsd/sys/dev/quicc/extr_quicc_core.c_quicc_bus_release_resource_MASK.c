
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int dummy; } ;
struct resource {int dummy; } ;
struct quicc_device {int qd_rlist; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct quicc_device* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct resource_list_entry* FUNC_2 (int *,int,int) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct quicc_device *VAR_6;
 struct resource_list_entry *VAR_7;

 if (FUNC_1(VAR_2) != VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = FUNC_2(&VAR_6->qd_rlist, VAR_3, VAR_4);
 return ((VAR_7 == ((void*)0)) ? VAR_0 : 0);
}
