
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_ooffset_t ;
typedef int * vm_object_t ;
struct privcmd_map {int * mem; int * pseudo_phys_res; scalar_t__ pseudo_phys_res_id; int phys_base_addr; int size; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct privcmd_map*,int ,int *,int ,int,int ,int *) ;
 int FUNC_2 (struct privcmd_map*,int ) ;
 struct privcmd_map* FUNC_3 (int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,scalar_t__*,int ) ;
 int FUNC_6 (int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_7, vm_ooffset_t *VAR_8, vm_size_t VAR_9,
    vm_object_t *VAR_10, int VAR_11)
{
 struct privcmd_map *VAR_12;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);

 VAR_12->size = FUNC_0(VAR_9);
 VAR_12->pseudo_phys_res_id = 0;

 VAR_12->pseudo_phys_res = FUNC_5(VAR_5,
     &VAR_12->pseudo_phys_res_id, VAR_9);
 if (VAR_12->pseudo_phys_res == ((void*)0)) {
  FUNC_2(VAR_12, VAR_1);
  return (VAR_0);
 }

 VAR_12->phys_base_addr = FUNC_4(VAR_12->pseudo_phys_res);
 VAR_12->mem = FUNC_1(VAR_12, VAR_4, &VAR_6,
     VAR_9, VAR_11, *VAR_8, ((void*)0));
 if (VAR_12->mem == ((void*)0)) {
  FUNC_6(VAR_5, VAR_12->pseudo_phys_res_id,
      VAR_12->pseudo_phys_res);
  FUNC_2(VAR_12, VAR_1);
  return (VAR_0);
 }

 *VAR_10 = VAR_12->mem;

 return (0);
}
