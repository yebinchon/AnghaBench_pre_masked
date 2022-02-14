
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_inode_info {int ip_lock; int ip_flags; int ip_open_count; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_3__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_4__ {int name; int len; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct inode*,struct file*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_1);

 FUNC_1("(0x%p, 0x%p, '%.*s')\n", VAR_1, VAR_2,
         VAR_2->f_path.dentry->d_name.len,
         VAR_2->f_path.dentry->d_name.name);

 FUNC_4(&VAR_3->ip_lock);
 if (!--VAR_3->ip_open_count)
  VAR_3->ip_flags &= ~VAR_0;
 FUNC_5(&VAR_3->ip_lock);

 FUNC_3(VAR_1, VAR_2);

 FUNC_2(0);

 return 0;
}
