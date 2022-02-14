
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct inode {struct seq_operations* i_private; } ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct file*,struct seq_operations const*) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 const struct seq_operations *VAR_4;

 if ((VAR_3->f_mode & VAR_0) &&
     (VAR_3->f_flags & VAR_1))
  FUNC_0();

 VAR_4 = VAR_2->i_private;
 return FUNC_1(VAR_3, VAR_4);
}
