
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
struct TYPE_4__ {unsigned long (* get_unmapped_exec_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 TYPE_3__* VAR_4 ;

unsigned long
FUNC_3(struct file *VAR_5, unsigned long VAR_6, unsigned long VAR_7,
  unsigned long VAR_8, unsigned long VAR_9, int VAR_10)
{
 unsigned long (*VAR_11)(struct file *, unsigned long,
      unsigned long, unsigned long, unsigned long);

 unsigned long VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_9);
 if (VAR_12)
  return VAR_12;


 if (VAR_7 > VAR_3)
  return -VAR_1;

 if (VAR_10 && VAR_4->mm->get_unmapped_exec_area)
  VAR_11 = VAR_4->mm->get_unmapped_exec_area;
 else
  VAR_11 = VAR_4->mm->get_unmapped_area;

 if (VAR_5 && VAR_5->f_op && VAR_5->f_op->get_unmapped_area)
  VAR_11 = VAR_5->f_op->get_unmapped_area;
 VAR_6 = VAR_11(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (FUNC_0(VAR_6))
  return VAR_6;

 if (VAR_6 > VAR_3 - VAR_7)
  return -VAR_1;
 if (VAR_6 & ~VAR_2)
  return -VAR_0;

 return FUNC_2(VAR_6, VAR_7);
}
