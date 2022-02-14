
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {scalar_t__ num_exe_file_vmas; struct file* exe_file; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;

void FUNC_2(struct mm_struct *VAR_0, struct file *VAR_1)
{
 if (VAR_1)
  FUNC_1(VAR_1);
 if (VAR_0->exe_file)
  FUNC_0(VAR_0->exe_file);
 VAR_0->exe_file = VAR_1;
 VAR_0->num_exe_file_vmas = 0;
}
