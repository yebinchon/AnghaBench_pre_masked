
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int * vm_page_t ;
struct xen_remove_from_physmap {scalar_t__ gpfn; int domid; } ;
struct privcmd_map {int mapped; scalar_t__ size; int pseudo_phys_res; int pseudo_phys_res_id; struct privcmd_map* err; int phys_base_addr; int mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xen_remove_from_physmap*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct privcmd_map*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_5)
{
 struct xen_remove_from_physmap VAR_6 = { .domid = VAR_0 };
 struct privcmd_map *VAR_7 = VAR_5;
 int VAR_8;
 vm_size_t VAR_9;
 vm_page_t VAR_10;





 if (VAR_7->mapped == 1) {
  FUNC_2(VAR_7->mem);
retry:
  for (VAR_9 = 0; VAR_9 < VAR_7->size; VAR_9++) {
   VAR_10 = FUNC_8(VAR_7->mem, VAR_9);
   if (VAR_10 == ((void*)0))
    continue;
   if (FUNC_7(VAR_10, VAR_2) == 0)
    goto retry;
   FUNC_5(VAR_7->mem, VAR_10);
  }
  FUNC_3(VAR_7->mem);

  for (VAR_9 = 0; VAR_9 < VAR_7->size; VAR_9++) {
   VAR_6.gpfn = FUNC_4(VAR_7->phys_base_addr) + VAR_9;
   FUNC_0(VAR_3, &VAR_6);
  }
  FUNC_6(VAR_7->err, VAR_1);
 }

 VAR_8 = FUNC_9(VAR_4, VAR_7->pseudo_phys_res_id,
     VAR_7->pseudo_phys_res);
 FUNC_1(VAR_8 == 0, ("Unable to release memory resource: %d", VAR_8));

 FUNC_6(VAR_7, VAR_1);
}
