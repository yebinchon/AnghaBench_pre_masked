
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct file*,int *) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6 = 0;

 if ((VAR_5->f_mode & VAR_1) &&
     (VAR_5->f_flags & VAR_2))
  FUNC_0();

 if (VAR_5->f_mode & VAR_0)
  VAR_6 = FUNC_1(VAR_5, &VAR_3);

 return VAR_6;
}
