
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_bucket {struct buffer_head** bu_bhs; } ;
struct ocfs2_reflink_xattr_tree_args {struct ocfs2_xattr_bucket* new_bucket; struct ocfs2_xattr_bucket* old_bucket; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct super_block*,struct ocfs2_xattr_bucket*,int,struct ocfs2_xattr_value_root**,struct buffer_head**) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0,
     struct buffer_head *VAR_1,
     struct ocfs2_xattr_header *VAR_2,
     int VAR_3,
     struct ocfs2_xattr_value_root **VAR_4,
     struct buffer_head **VAR_5,
     void *VAR_6)
{
 struct ocfs2_reflink_xattr_tree_args *VAR_7 =
   (struct ocfs2_reflink_xattr_tree_args *)VAR_6;
 struct ocfs2_xattr_bucket *VAR_8;

 if (VAR_1 == VAR_7->old_bucket->bu_bhs[0])
  VAR_8 = VAR_7->old_bucket;
 else
  VAR_8 = VAR_7->new_bucket;

 return FUNC_0(VAR_0, VAR_8, VAR_3,
            VAR_4, VAR_5);
}
