
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {struct ocfs2_dentry_lock* l_priv; } ;
struct ocfs2_dentry_lock {TYPE_1__* dl_inode; } ;
struct TYPE_2__ {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;

__attribute__((used)) static struct ocfs2_super *FUNC_1(struct ocfs2_lock_res *VAR_0)
{
 struct ocfs2_dentry_lock *VAR_1 = VAR_0->l_priv;

 return FUNC_0(VAR_1->dl_inode->i_sb);
}
