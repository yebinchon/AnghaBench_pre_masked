
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_flags; TYPE_1__* vm_ops; struct file* vm_file; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ close; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct vm_area_struct *VAR_1,
   struct file *VAR_2, unsigned long VAR_3)
{

 if ((VAR_1->vm_flags ^ VAR_3) & ~VAR_0)
  return 0;
 if (VAR_1->vm_file != VAR_2)
  return 0;
 if (VAR_1->vm_ops && VAR_1->vm_ops->close)
  return 0;
 return 1;
}
