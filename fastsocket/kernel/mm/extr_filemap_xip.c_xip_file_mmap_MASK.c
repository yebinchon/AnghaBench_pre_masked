
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct file {TYPE_2__* f_mapping; } ;
struct TYPE_4__ {TYPE_1__* a_ops; } ;
struct TYPE_3__ {int get_xip_mem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*) ;
 int VAR_2 ;

int FUNC_2(struct file * VAR_3, struct vm_area_struct * VAR_4)
{
 FUNC_0(!VAR_3->f_mapping->a_ops->get_xip_mem);

 FUNC_1(VAR_3);
 VAR_4->vm_ops = &VAR_2;
 VAR_4->vm_flags |= VAR_0 | VAR_1;
 return 0;
}
