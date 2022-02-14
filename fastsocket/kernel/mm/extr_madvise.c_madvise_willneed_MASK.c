
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_pgoff; unsigned long vm_end; struct file* vm_file; } ;
struct file {TYPE_2__* f_mapping; } ;
struct TYPE_4__ {TYPE_1__* a_ops; } ;
struct TYPE_3__ {scalar_t__ get_xip_mem; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct file*,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct vm_area_struct * VAR_2,
        struct vm_area_struct ** VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 struct file *VAR_6 = VAR_2->vm_file;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_6->f_mapping->a_ops->get_xip_mem) {

  return 0;
 }

 *VAR_3 = VAR_2;
 VAR_4 = ((VAR_4 - VAR_2->vm_start) >> VAR_1) + VAR_2->vm_pgoff;
 if (VAR_5 > VAR_2->vm_end)
  VAR_5 = VAR_2->vm_end;
 VAR_5 = ((VAR_5 - VAR_2->vm_start) >> VAR_1) + VAR_2->vm_pgoff;

 FUNC_0(VAR_6->f_mapping, VAR_6, VAR_4, VAR_5 - VAR_4);
 return 0;
}
