
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_inode_info {int ip_flags; int ip_lock; int ip_open_count; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {int f_flags; TYPE_3__ f_path; } ;
struct TYPE_4__ {int name; int len; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,struct inode*,struct file*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_5->f_flags;
 struct ocfs2_inode_info *VAR_8 = FUNC_0(VAR_4);

 FUNC_1("(0x%p, 0x%p, '%.*s')\n", VAR_4, VAR_5,
     VAR_5->f_path.dentry->d_name.len, VAR_5->f_path.dentry->d_name.name);

 FUNC_4(&VAR_8->ip_lock);




 if (FUNC_0(VAR_4)->ip_flags & VAR_1) {
  FUNC_5(&VAR_8->ip_lock);

  VAR_6 = -VAR_0;
  goto leave;
 }

 if (VAR_7 & VAR_3)
  VAR_8->ip_flags |= VAR_2;

 VAR_8->ip_open_count++;
 FUNC_5(&VAR_8->ip_lock);

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6) {




  FUNC_4(&VAR_8->ip_lock);
  VAR_8->ip_open_count--;
  FUNC_5(&VAR_8->ip_lock);
 }

leave:
 FUNC_2(VAR_6);
 return VAR_6;
}
