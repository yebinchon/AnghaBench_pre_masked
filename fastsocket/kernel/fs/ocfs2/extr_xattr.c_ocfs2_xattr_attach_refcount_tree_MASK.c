
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_dinode {int i_xattr_loc; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int ,struct buffer_head**) ;
 int FUNC_5 (struct inode*,struct buffer_head*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_6 (struct inode*,struct buffer_head*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;

int FUNC_7(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         struct ocfs2_caching_info *VAR_3,
         struct buffer_head *VAR_4,
         struct ocfs2_cached_dealloc_ctxt *VAR_5)
{
 int VAR_6 = 0;
 struct ocfs2_inode_info *VAR_7 = FUNC_0(VAR_1);
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *)VAR_2->b_data;
 struct buffer_head *VAR_9 = ((void*)0);

 if (VAR_7->ip_dyn_features & VAR_0) {
  VAR_6 = FUNC_6(VAR_1, VAR_2,
        VAR_3, VAR_4,
        VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_6);
   goto out;
  }
 }

 if (!VAR_8->i_xattr_loc)
  goto out;

 VAR_6 = FUNC_4(VAR_1, FUNC_2(VAR_8->i_xattr_loc),
         &VAR_9);
 if (VAR_6 < 0) {
  FUNC_3(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_5(VAR_1, VAR_9, VAR_3,
      VAR_4, VAR_5);
 if (VAR_6)
  FUNC_3(VAR_6);

 FUNC_1(VAR_9);
out:

 return VAR_6;
}
