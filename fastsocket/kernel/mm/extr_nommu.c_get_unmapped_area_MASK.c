
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {TYPE_2__* f_op; } ;
struct TYPE_6__ {TYPE_1__* mm; } ;
struct TYPE_5__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;
struct TYPE_4__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 unsigned long VAR_0 ;
 TYPE_3__* VAR_1 ;

unsigned long FUNC_0(struct file *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    unsigned long VAR_6)
{
 unsigned long (*VAR_7)(struct file *, unsigned long, unsigned long,
      unsigned long, unsigned long);

 VAR_7 = VAR_1->mm->get_unmapped_area;
 if (VAR_2 && VAR_2->f_op && VAR_2->f_op->get_unmapped_area)
  VAR_7 = VAR_2->f_op->get_unmapped_area;

 if (!VAR_7)
  return -VAR_0;

 return VAR_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
