
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mutex; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 if (VAR_2->f_mode & VAR_0) {
  FUNC_1(&VAR_1->i_mutex);
  FUNC_0();
  FUNC_3(VAR_1);
  FUNC_4();
  FUNC_2(&VAR_1->i_mutex);
 }
 return 0;
}
