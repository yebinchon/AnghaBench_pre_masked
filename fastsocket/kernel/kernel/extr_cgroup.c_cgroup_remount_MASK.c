
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct cgroupfs_root* s_fs_info; } ;
struct cgroup {TYPE_2__* dentry; } ;
struct cgroupfs_root {scalar_t__ flags; int release_agent_path; int name; struct cgroup top_cgroup; } ;
struct cgroup_sb_opts {scalar_t__ flags; scalar_t__ name; scalar_t__ release_agent; int subsys_bits; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,struct cgroup_sb_opts*) ;
 int FUNC_6 (struct cgroupfs_root*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_3, int *VAR_4, char *VAR_5)
{
 int VAR_6 = 0;
 struct cgroupfs_root *VAR_7 = VAR_3->s_fs_info;
 struct cgroup *VAR_8 = &VAR_7->top_cgroup;
 struct cgroup_sb_opts VAR_9;

 FUNC_2();
 FUNC_3(&VAR_8->dentry->d_inode->i_mutex);
 FUNC_3(&VAR_1);
 FUNC_3(&VAR_2);


 VAR_6 = FUNC_5(VAR_5, &VAR_9);
 if (VAR_6)
  goto out_unlock;


 if (VAR_9.flags != VAR_7->flags) {
  VAR_6 = -VAR_0;
  goto out_unlock;
 }


 if (VAR_9.name && FUNC_7(VAR_9.name, VAR_7->name)) {
  VAR_6 = -VAR_0;
  goto out_unlock;
 }

 VAR_6 = FUNC_6(VAR_7, VAR_9.subsys_bits);
 if (VAR_6)
  goto out_unlock;


 FUNC_0(VAR_8);

 if (VAR_9.release_agent)
  FUNC_8(VAR_7->release_agent_path, VAR_9.release_agent);
 out_unlock:
 FUNC_1(VAR_9.release_agent);
 FUNC_1(VAR_9.name);
 FUNC_4(&VAR_2);
 FUNC_4(&VAR_1);
 FUNC_4(&VAR_8->dentry->d_inode->i_mutex);
 FUNC_9();
 return VAR_6;
}
