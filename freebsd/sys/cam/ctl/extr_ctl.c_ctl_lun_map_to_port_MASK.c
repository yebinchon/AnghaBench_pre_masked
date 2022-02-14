
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ctl_port {size_t* lun_map; size_t lun_map_size; } ;


 size_t VAR_0 ;

uint32_t
FUNC_0(struct ctl_port *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 if (VAR_1->lun_map == ((void*)0))
  return (VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->lun_map_size; VAR_3++) {
  if (VAR_1->lun_map[VAR_3] == VAR_2)
   return (VAR_3);
 }
 return (VAR_0);
}
