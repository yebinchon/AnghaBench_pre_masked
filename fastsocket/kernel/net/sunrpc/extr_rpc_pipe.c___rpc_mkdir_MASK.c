
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct dentry*,int,struct file_operations const*,void*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2,
         umode_t VAR_3,
         const struct file_operations *VAR_4,
         void *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0 | VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, VAR_2);
 return 0;
}
