
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; struct file* exe_file; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;

struct file *FUNC_3(struct mm_struct *VAR_0)
{
 struct file *VAR_1;



 FUNC_0(&VAR_0->mmap_sem);
 VAR_1 = VAR_0->exe_file;
 if (VAR_1)
  FUNC_1(VAR_1);
 FUNC_2(&VAR_0->mmap_sem);
 return VAR_1;
}
