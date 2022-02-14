
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct gnttab_unmap_grant_ref {int handle; int pseudo_phys_res; int pseudo_phys_res_id; int mem; scalar_t__ phys_base_addr; scalar_t__ dev_bus_addr; scalar_t__ host_addr; } ;
struct gntdev_gmap {int count; struct gnttab_unmap_grant_ref* map; TYPE_1__* grant_map_ops; TYPE_2__* notify; scalar_t__ file_index; } ;
struct TYPE_4__ {scalar_t__ index; } ;
struct TYPE_3__ {int handle; scalar_t__ host_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gnttab_unmap_grant_ref*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct gnttab_unmap_grant_ref*,int ) ;
 int VAR_4 ;
 struct gnttab_unmap_grant_ref* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,size_t) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct gntdev_gmap *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7, VAR_8;
 vm_page_t VAR_9;
 struct gnttab_unmap_grant_ref *VAR_10;

 VAR_10 = FUNC_7(sizeof(struct gnttab_unmap_grant_ref) * VAR_5->count,
   VAR_1, VAR_2);


 VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  if (VAR_5->grant_map_ops[VAR_6].handle != -1) {
   VAR_10[VAR_8].handle = VAR_5->grant_map_ops[VAR_6].handle;
   VAR_10[VAR_8].host_addr =
    VAR_5->grant_map_ops[VAR_6].host_addr;
   VAR_10[VAR_8].dev_bus_addr = 0;
   VAR_8++;
  }
 }


 if (VAR_8 > 0 && VAR_5->notify) {
  vm_page_t VAR_11;
  uint64_t VAR_12;

  VAR_12 = VAR_5->notify->index - VAR_5->file_index;
  VAR_11 = FUNC_2(VAR_5->map->phys_base_addr + VAR_12);
  FUNC_8(VAR_5->notify, VAR_11);
 }


 FUNC_3(VAR_5->map->mem);
retry:
 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  VAR_9 = FUNC_10(VAR_5->map->mem, VAR_6);
  if (VAR_9 == ((void*)0))
   continue;
  if (FUNC_9(VAR_9, VAR_3) == 0)
   goto retry;
  FUNC_5(VAR_5->map->mem, VAR_9);
 }
 FUNC_4(VAR_5->map->mem);


 VAR_7 = FUNC_0(VAR_0,
     VAR_10, VAR_8);

 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  VAR_5->grant_map_ops[VAR_6].handle = -1;
  VAR_5->grant_map_ops[VAR_6].host_addr = 0;
 }

 if (VAR_5->map) {
  VAR_7 = FUNC_11(VAR_4, VAR_5->map->pseudo_phys_res_id,
      VAR_5->map->pseudo_phys_res);
  FUNC_1(VAR_7 == 0,
      ("Unable to release memory resource: %d", VAR_7));

  FUNC_6(VAR_5->map, VAR_1);
  VAR_5->map = ((void*)0);
 }

 FUNC_6(VAR_10, VAR_1);

 return (VAR_7);
}
