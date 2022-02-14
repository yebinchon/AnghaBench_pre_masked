
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry**,char const*,int,int) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 scalar_t__ FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_3(const char *VAR_1, mode_t VAR_2,
  struct proc_dir_entry *VAR_3)
{
 struct proc_dir_entry *VAR_4;

 VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_0 | VAR_2, 2);
 if (VAR_4) {
  if (FUNC_2(VAR_3, VAR_4) < 0) {
   FUNC_1(VAR_4);
   VAR_4 = ((void*)0);
  }
 }
 return VAR_4;
}
