
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_extent_list {int l_next_free_rec; } ;
struct ocfs2_xattr_tree_root {struct ocfs2_extent_list xt_list; } ;
struct ocfs2_xattr_search {int dummy; } ;
struct TYPE_2__ {struct ocfs2_xattr_tree_root xb_root; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,unsigned long long,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int,char const*,int ,scalar_t__,int ,int ,struct ocfs2_xattr_search*) ;
 int FUNC_5 (struct inode*,int ,scalar_t__*,int *,int *,struct ocfs2_extent_list*) ;
 int FUNC_6 (struct inode*,char const*,int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1,
     struct buffer_head *VAR_2,
     int VAR_3,
     const char *VAR_4,
     struct ocfs2_xattr_search *VAR_5)
{
 int VAR_6;
 struct ocfs2_xattr_block *VAR_7 =
   (struct ocfs2_xattr_block *)VAR_2->b_data;
 struct ocfs2_xattr_tree_root *VAR_8 = &VAR_7->xb_attrs.xb_root;
 struct ocfs2_extent_list *VAR_9 = &VAR_8->xt_list;
 u64 VAR_10 = 0;
 u32 VAR_11, VAR_12 = 0;
 u32 VAR_13 = FUNC_6(VAR_1, VAR_4, FUNC_7(VAR_4));

 if (FUNC_1(VAR_9->l_next_free_rec) == 0)
  return -VAR_0;

 FUNC_2(0, "find xattr %s, hash = %u, index = %d in xattr tree\n",
      VAR_4, VAR_13, VAR_3);

 VAR_6 = FUNC_5(VAR_1, VAR_13, &VAR_10, &VAR_11,
      &VAR_12, VAR_9);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_0(VAR_10 == 0 || VAR_12 == 0 || VAR_11 > VAR_13);

 FUNC_2(0, "find xattr extent rec %u clusters from %llu, the first hash "
      "in the rec is %u\n", VAR_12, (unsigned long long)VAR_10,
      VAR_11);

 VAR_6 = FUNC_4(VAR_1, VAR_3, VAR_4, VAR_13,
          VAR_10, VAR_11, VAR_12, VAR_5);

out:
 return VAR_6;
}
