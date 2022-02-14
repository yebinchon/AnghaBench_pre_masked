
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int * rmap; int * dirty_bitmap; scalar_t__ npages; int ** lpage_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_memory_slot *VAR_1,
      struct kvm_memory_slot *VAR_2)
{
 int VAR_3;

 if (!VAR_2 || VAR_1->rmap != VAR_2->rmap)
  FUNC_0(VAR_1->rmap);

 if (!VAR_2 || VAR_1->dirty_bitmap != VAR_2->dirty_bitmap)
  FUNC_0(VAR_1->dirty_bitmap);


 for (VAR_3 = 0; VAR_3 < VAR_0 - 1; ++VAR_3) {
  if (!VAR_2 || VAR_1->lpage_info[VAR_3] != VAR_2->lpage_info[VAR_3]) {
   FUNC_0(VAR_1->lpage_info[VAR_3]);
   VAR_1->lpage_info[VAR_3] = ((void*)0);
  }
 }

 VAR_1->npages = 0;
 VAR_1->dirty_bitmap = ((void*)0);
 VAR_1->rmap = ((void*)0);
}
