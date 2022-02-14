
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int count; int start; } ;
struct resource_list {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct resource_list_entry* FUNC_1 (struct resource_list*,int,int) ;

int
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    rman_res_t *VAR_6, rman_res_t *VAR_7)
{
 struct resource_list * VAR_8 = ((void*)0);
 struct resource_list_entry * VAR_9 = ((void*)0);

 VAR_8 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_8)
  return (VAR_0);

 VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5);
 if (!VAR_9)
  return (VAR_1);

 if (VAR_6)
  *VAR_6 = VAR_9->start;
 if (VAR_7)
  *VAR_7 = VAR_9->count;

 return (0);
}
