
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_reflink {int old_inode; int new_inode; } ;
struct ocfs2_reflink_xattr_tree_args {void* new_bucket; void* old_bucket; struct buffer_head* new_blk_bh; struct buffer_head* old_blk_bh; struct ocfs2_xattr_reflink* reflink; } ;
struct buffer_head {int dummy; } ;
typedef int para ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_reflink_xattr_tree_args*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct buffer_head*,int ,struct ocfs2_reflink_xattr_tree_args*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_xattr_reflink *VAR_2,
        struct buffer_head *VAR_3,
        struct buffer_head *VAR_4)
{
 int VAR_5;
 struct ocfs2_reflink_xattr_tree_args VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.reflink = VAR_2;
 VAR_6.old_blk_bh = VAR_3;
 VAR_6.new_blk_bh = VAR_4;

 VAR_6.old_bucket = FUNC_4(VAR_2->old_inode);
 if (!VAR_6.old_bucket) {
  FUNC_1(-VAR_0);
  return -VAR_0;
 }

 VAR_6.new_bucket = FUNC_4(VAR_2->new_inode);
 if (!VAR_6.new_bucket) {
  VAR_5 = -VAR_0;
  FUNC_1(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_2(VAR_2->old_inode, VAR_3,
           VAR_1,
           &VAR_6);
 if (VAR_5)
  FUNC_1(VAR_5);

out:
 FUNC_3(VAR_6.old_bucket);
 FUNC_3(VAR_6.new_bucket);
 return VAR_5;
}
