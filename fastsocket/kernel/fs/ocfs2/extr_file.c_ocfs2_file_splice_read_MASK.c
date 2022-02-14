
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {int f_vfsmnt; TYPE_3__ f_path; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {int name; int len; } ;
struct TYPE_5__ {TYPE_1__ d_name; struct inode* d_inode; } ;


 int FUNC_0 (struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_1 (char*,struct file*,struct pipe_inode_info*,unsigned int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int ,int*) ;
 int FUNC_5 (struct inode*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_0,
          loff_t *VAR_1,
          struct pipe_inode_info *VAR_2,
          size_t VAR_3,
          unsigned int VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 struct inode *VAR_7 = VAR_0->f_path.dentry->d_inode;

 FUNC_1("(0x%p, 0x%p, %u, '%.*s')\n", VAR_0, VAR_2,
     (unsigned int)VAR_3,
     VAR_0->f_path.dentry->d_name.len,
     VAR_0->f_path.dentry->d_name.name);




 VAR_5 = FUNC_4(VAR_7, VAR_0->f_vfsmnt, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_2(VAR_5);
  goto bail;
 }
 FUNC_5(VAR_7, VAR_6);

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

bail:
 FUNC_3(VAR_5);
 return VAR_5;
}
