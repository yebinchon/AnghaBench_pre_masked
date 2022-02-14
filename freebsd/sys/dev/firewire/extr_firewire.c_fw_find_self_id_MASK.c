
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phy_id; scalar_t__ sequel; } ;
union fw_self_id {TYPE_2__ p0; } ;
typedef size_t uint32_t ;
struct firewire_comm {TYPE_1__* topology_map; } ;
struct TYPE_3__ {size_t self_id_count; union fw_self_id* self_id; } ;



__attribute__((used)) static union fw_self_id *
FUNC_0(struct firewire_comm *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 union fw_self_id *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->topology_map->self_id_count; VAR_2++) {
  VAR_3 = &VAR_0->topology_map->self_id[VAR_2];
  if (VAR_3->p0.sequel)
   continue;
  if (VAR_3->p0.phy_id == VAR_1)
   return VAR_3;
 }
 return 0;
}
