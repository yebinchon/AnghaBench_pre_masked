
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int flags; int va_end; int va_start; struct vm_struct* private; } ;
struct vm_struct {int flags; int size; struct vm_struct* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmap_area* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct vmap_area*) ;
 int FUNC_2 (int ,int ) ;
 struct vm_struct* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct vm_struct *FUNC_5(const void *VAR_5)
{
 struct vmap_area *VAR_6;

 VAR_6 = FUNC_0((unsigned long)VAR_5);
 if (VAR_6 && VAR_6->flags & VAR_2) {
  struct vm_struct *VAR_7 = VAR_6->private;

  if (!(VAR_7->flags & VAR_1)) {
   struct vm_struct *VAR_8, **VAR_9;





   FUNC_3(&VAR_4);
   for (VAR_9 = &VAR_3; (VAR_8 = *VAR_9) != VAR_7; VAR_9 = &VAR_8->next)
    ;
   *VAR_9 = VAR_8->next;
   FUNC_4(&VAR_4);
  }

  FUNC_2(VAR_6->va_start, VAR_6->va_end);
  FUNC_1(VAR_6);
  VAR_7->size -= VAR_0;

  return VAR_7;
 }
 return ((void*)0);
}
