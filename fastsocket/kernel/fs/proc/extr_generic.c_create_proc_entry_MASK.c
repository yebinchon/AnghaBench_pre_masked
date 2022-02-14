
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
typedef int nlink_t ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 struct proc_dir_entry* FUNC_1 (struct proc_dir_entry**,char const*,int,int) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 scalar_t__ FUNC_3 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_4(const char *VAR_5, mode_t VAR_6,
      struct proc_dir_entry *VAR_7)
{
 struct proc_dir_entry *VAR_8;
 nlink_t VAR_9;

 if (FUNC_0(VAR_6)) {
  if ((VAR_6 & VAR_0) == 0)
   VAR_6 |= VAR_3 | VAR_4;
  VAR_9 = 2;
 } else {
  if ((VAR_6 & VAR_1) == 0)
   VAR_6 |= VAR_2;
  if ((VAR_6 & VAR_0) == 0)
   VAR_6 |= VAR_3;
  VAR_9 = 1;
 }

 VAR_8 = FUNC_1(&VAR_7, VAR_5, VAR_6, VAR_9);
 if (VAR_8) {
  if (FUNC_3(VAR_7, VAR_8) < 0) {
   FUNC_2(VAR_8);
   VAR_8 = ((void*)0);
  }
 }
 return VAR_8;
}
