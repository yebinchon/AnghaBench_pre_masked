
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_dentry; } ;
struct cftype {int (* release ) (struct inode*,struct file*) ;} ;


 struct cftype* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct cftype *VAR_2 = FUNC_0(VAR_1->f_dentry);
 if (VAR_2->release)
  return VAR_2->release(VAR_0, VAR_1);
 return 0;
}
