
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int count; int start; } ;
struct quicc_device {int qd_rlist; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct quicc_device* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct resource_list_entry* FUNC_2 (int *,int,int) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    rman_res_t *VAR_5, rman_res_t *VAR_6)
{
 struct quicc_device *VAR_7;
 struct resource_list_entry *VAR_8;

 if (FUNC_1(VAR_2) != VAR_1)
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_2);
 VAR_8 = FUNC_2(&VAR_7->qd_rlist, VAR_3, VAR_4);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8->start;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8->count;
 return (0);
}
