
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int dummy; } ;
struct ocfs2_xattr_search {TYPE_1__* inode_bh; } ;
struct ocfs2_xattr_info {int dummy; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_alloc_sem; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {scalar_t__ s_blocksize; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_3 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4,
     struct ocfs2_xattr_info *VAR_5,
     struct ocfs2_xattr_search *VAR_6,
     struct ocfs2_xattr_set_ctxt *VAR_7)
{
 struct ocfs2_inode_info *VAR_8 = FUNC_0(VAR_4);
 struct ocfs2_dinode *VAR_9 = (struct ocfs2_dinode *)VAR_6->inode_bh->b_data;
 int VAR_10;

 if (VAR_4->i_sb->s_blocksize == VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_8->ip_alloc_sem);
 if (!(VAR_8->ip_dyn_features & VAR_2)) {
  if (!FUNC_2(VAR_4, VAR_9)) {
   VAR_10 = -VAR_0;
   goto out;
  }
 }

 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7,
    (VAR_2 | VAR_1));
out:
 FUNC_4(&VAR_8->ip_alloc_sem);

 return VAR_10;
}
