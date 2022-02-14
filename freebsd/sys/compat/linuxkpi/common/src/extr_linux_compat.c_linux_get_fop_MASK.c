
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct linux_file {struct file_operations* f_op; struct linux_cdev* f_cdev; } ;
struct linux_cdev {int siref; struct file_operations* ops; } ;
struct file_operations {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int*,scalar_t__) ;
 struct linux_cdev VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct linux_file *VAR_3, const struct file_operations **VAR_4,
    struct linux_cdev **VAR_5)
{
 struct linux_cdev *VAR_6;
 u_int VAR_7;

 VAR_6 = VAR_3->f_cdev;
 *VAR_4 = VAR_3->f_op;
 if (VAR_6 != ((void*)0)) {
  for (VAR_7 = VAR_6->siref;;) {
   if ((VAR_7 & VAR_0) != 0) {
    VAR_6 = &VAR_2;
    VAR_7 = VAR_6->siref;
    *VAR_4 = VAR_6->ops;
    FUNC_0((VAR_6->siref & VAR_0) == 0);
   } else if (FUNC_1(&VAR_6->siref, &VAR_7,
       VAR_7 + VAR_1)) {
    break;
   }
  }
 }
 *VAR_5 = VAR_6;
}
