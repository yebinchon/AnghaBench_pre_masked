
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int * vm_object_t ;
struct vmspace {int vm_map; } ;
struct sglist {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,int) ;
 struct sglist* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sglist*,int ,size_t) ;
 int FUNC_6 (struct sglist*) ;
 int FUNC_7 (int *,int *,int ,int *,size_t,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,struct sglist*,size_t,int ,int ,int *) ;

vm_object_t
FUNC_11(struct vmspace *VAR_6, vm_paddr_t VAR_7, size_t VAR_8,
        vm_paddr_t VAR_9)
{
 int VAR_10;
 vm_object_t VAR_11;
 struct sglist *VAR_12;

 VAR_12 = FUNC_4(1, VAR_1);
 VAR_10 = FUNC_5(VAR_12, VAR_9, VAR_8);
 FUNC_0(VAR_10 == 0, ("error %d appending physaddr to sglist", VAR_10));

 VAR_11 = FUNC_10(VAR_2, VAR_12, VAR_8, VAR_5, 0, ((void*)0));
 if (VAR_11 != ((void*)0)) {







  FUNC_1(VAR_11);
  VAR_10 = FUNC_9(VAR_11, VAR_4);
  FUNC_2(VAR_11);
  if (VAR_10 != VAR_0) {
   FUNC_3("vmm_mmio_alloc: vm_object_set_memattr error %d",
    VAR_10);
  }
  VAR_10 = FUNC_7(&VAR_6->vm_map, VAR_11, 0, &VAR_7, VAR_8, 0,
        VAR_3, VAR_5, VAR_5, 0);
  if (VAR_10 != VAR_0) {
   FUNC_8(VAR_11);
   VAR_11 = ((void*)0);
  }
 }
 FUNC_6(VAR_12);

 return (VAR_11);
}
