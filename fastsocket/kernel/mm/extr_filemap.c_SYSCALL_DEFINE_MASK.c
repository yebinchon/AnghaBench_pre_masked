
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef int ssize_t ;
typedef int pgoff_t ;
typedef size_t loff_t ;
typedef int SYSCALL_DEFINE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct address_space*,struct file*,int,unsigned long) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;

SYSCALL_DEFINE(FUNC_3)(int VAR_3, loff_t VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 struct file *VAR_7;

 VAR_6 = -VAR_0;
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7) {
  if (VAR_7->f_mode & VAR_1) {
   struct address_space *VAR_8 = VAR_7->f_mapping;
   pgoff_t VAR_9 = VAR_4 >> VAR_2;
   pgoff_t VAR_10 = (VAR_4 + VAR_5 - 1) >> VAR_2;
   unsigned long VAR_11 = VAR_10 - VAR_9 + 1;
   VAR_6 = FUNC_0(VAR_8, VAR_7, VAR_9, VAR_11);
  }
  FUNC_2(VAR_7);
 }
 return VAR_6;
}
