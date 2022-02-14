
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int flags; struct vm_struct* private; scalar_t__ va_start; scalar_t__ va_end; } ;
struct vm_struct {unsigned long flags; void* caller; scalar_t__ size; void* addr; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vm_struct *VAR_1, struct vmap_area *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 VAR_1->flags = VAR_3;
 VAR_1->addr = (void *)VAR_2->va_start;
 VAR_1->size = VAR_2->va_end - VAR_2->va_start;
 VAR_1->caller = VAR_4;
 VAR_2->private = VAR_1;
 VAR_2->flags |= VAR_0;
}
