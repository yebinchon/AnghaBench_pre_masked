
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_ooffset_t ;
typedef size_t uint32_t ;
struct vm_object {int dummy; } ;
struct per_user_data {int dummy; } ;
struct gntdev_gmap {size_t count; TYPE_1__* map; TYPE_3__* grant_map_ops; } ;
struct TYPE_5__ {scalar_t__ status; int flags; scalar_t__ host_addr; } ;
struct TYPE_4__ {struct vm_object* mem; scalar_t__ phys_base_addr; int * pseudo_phys_res; scalar_t__ pseudo_phys_res_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct vm_object* FUNC_1 (struct gntdev_gmap*,int ,int *,int ,int,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct vm_object*) ;
 int FUNC_7 (struct vm_object*) ;
 int * FUNC_8 (int ,scalar_t__*,int ) ;
 int FUNC_9 (int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_10(struct per_user_data *VAR_16, struct gntdev_gmap *VAR_17,
    vm_ooffset_t *VAR_18, vm_size_t VAR_19, struct vm_object **VAR_20, int VAR_21)
{
 uint32_t VAR_22;
 int VAR_23;






 if (VAR_17->map) {
  FUNC_7(VAR_17->map->mem);
  *VAR_20 = VAR_17->map->mem;
  return (0);
 }

 VAR_17->map = FUNC_3(sizeof(*(VAR_17->map)), VAR_7,
     VAR_8 | VAR_9);


 VAR_17->map->pseudo_phys_res_id = 0;
 VAR_17->map->pseudo_phys_res = FUNC_8(VAR_14,
     &VAR_17->map->pseudo_phys_res_id, VAR_19);
 if (VAR_17->map->pseudo_phys_res == ((void*)0)) {
  FUNC_2(VAR_17->map, VAR_7);
  VAR_17->map = ((void*)0);
  return (VAR_1);
 }
 VAR_17->map->phys_base_addr =
     FUNC_5(VAR_17->map->pseudo_phys_res);


 VAR_17->map->mem = FUNC_1(VAR_17, VAR_10,
     &VAR_15, VAR_19, VAR_21, *VAR_18, ((void*)0));
 if (VAR_17->map->mem == ((void*)0)) {
  FUNC_9(VAR_14, VAR_17->map->pseudo_phys_res_id,
      VAR_17->map->pseudo_phys_res);
  FUNC_2(VAR_17->map, VAR_7);
  VAR_17->map = ((void*)0);
  return (VAR_1);
 }

 for (VAR_22 = 0; VAR_22 < VAR_17->count; VAR_22++) {
  VAR_17->grant_map_ops[VAR_22].host_addr =
      VAR_17->map->phys_base_addr + VAR_22 * VAR_11;

  if ((VAR_21 & VAR_12) == 0)
   VAR_17->grant_map_ops[VAR_22].flags |= VAR_2;
 }

 VAR_23 = FUNC_0(VAR_6,
     VAR_17->grant_map_ops, VAR_17->count);
 if (VAR_23 != 0) {





  FUNC_6(VAR_17->map->mem);

  return (VAR_0);
 }


 for (VAR_22 = 0; VAR_22 < VAR_17->count; VAR_22++) {
  int VAR_24 = 1;
  while (VAR_24 < 256 &&
      VAR_17->grant_map_ops[VAR_22].status == VAR_4) {
   FUNC_0( VAR_6,
       &VAR_17->grant_map_ops[VAR_22], 1);
   FUNC_4(("gntmap"), VAR_24 * VAR_13);
   VAR_24++;
  }
  if (VAR_17->grant_map_ops[VAR_22].status == VAR_4)
   VAR_17->grant_map_ops[VAR_22].status = VAR_3;

  if (VAR_17->grant_map_ops[VAR_22].status != VAR_5) {






   FUNC_6(VAR_17->map->mem);

   return (VAR_0);
  }
 }
 FUNC_7(VAR_17->map->mem);

 *VAR_20 = VAR_17->map->mem;

 return (0);
}
