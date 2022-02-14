
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {scalar_t__ num_exe_file_vmas; int * exe_file; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mm_struct *VAR_0)
{
 VAR_0->num_exe_file_vmas--;
 if ((VAR_0->num_exe_file_vmas == 0) && VAR_0->exe_file){
  FUNC_0(VAR_0->exe_file);
  VAR_0->exe_file = ((void*)0);
 }

}
