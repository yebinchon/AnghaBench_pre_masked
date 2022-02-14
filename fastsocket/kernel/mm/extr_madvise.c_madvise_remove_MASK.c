
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; scalar_t__ vm_pgoff; struct file* vm_file; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int host; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static long FUNC_5(struct vm_area_struct *VAR_9,
    struct vm_area_struct **VAR_10,
    unsigned long VAR_11, unsigned long VAR_12)
{
 struct address_space *VAR_13;
 loff_t VAR_14, VAR_15;
 int VAR_16;
 struct file *VAR_17;

 *VAR_10 = ((void*)0);

 if (VAR_9->vm_flags & (VAR_4|VAR_5|VAR_3))
  return -VAR_1;

 VAR_17 = VAR_9->vm_file;

 if (!VAR_17 || !VAR_17->f_mapping || !VAR_17->f_mapping->host) {
   return -VAR_1;
 }

 if ((VAR_9->vm_flags & (VAR_6|VAR_7)) != (VAR_6|VAR_7))
  return -VAR_0;

 VAR_13 = VAR_17->f_mapping;

 VAR_14 = (loff_t)(VAR_11 - VAR_9->vm_start)
   + ((loff_t)VAR_9->vm_pgoff << VAR_2);
 VAR_15 = (loff_t)(VAR_12 - VAR_9->vm_start - 1)
   + ((loff_t)VAR_9->vm_pgoff << VAR_2);






 FUNC_2(VAR_17);
 FUNC_3(&VAR_8->mm->mmap_sem);
 VAR_16 = FUNC_4(VAR_13->host, VAR_14, VAR_15);
 FUNC_1(VAR_17);
 FUNC_0(&VAR_8->mm->mmap_sem);
 return VAR_16;
}
