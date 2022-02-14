
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int flags; struct vm_struct* private; } ;
struct vm_struct {int dummy; } ;


 int VAR_0 ;
 struct vmap_area* FUNC_0 (unsigned long) ;

__attribute__((used)) static struct vm_struct *FUNC_1(const void *VAR_1)
{
 struct vmap_area *VAR_2;

 VAR_2 = FUNC_0((unsigned long)VAR_1);
 if (VAR_2 && VAR_2->flags & VAR_0)
  return VAR_2->private;

 return ((void*)0);
}
