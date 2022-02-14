
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_region; TYPE_3__* vm_file; } ;
struct TYPE_6__ {TYPE_1__* f_op; } ;
struct TYPE_5__ {int vm_end; int vm_top; } ;
struct TYPE_4__ {int (* mmap ) (TYPE_3__*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->vm_file->f_op->mmap(VAR_2->vm_file, VAR_2);
 if (VAR_3 == 0) {
  VAR_2->vm_region->vm_top = VAR_2->vm_region->vm_end;
  return 0;
 }
 if (VAR_3 != -VAR_1)
  return VAR_3;





 return -VAR_0;
}
