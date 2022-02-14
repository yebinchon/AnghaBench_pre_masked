
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_list {int dummy; } ;
struct ocfs2_xattr_value_root {struct ocfs2_extent_list xr_list; int xr_clusters; } ;
struct ocfs2_post_refcount {int dummy; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__,struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_post_refcount*) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,struct ocfs2_extent_list*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1,
    struct ocfs2_xattr_value_root *VAR_2,
    struct ocfs2_extent_tree *VAR_3,
    struct ocfs2_caching_info *VAR_4,
    struct buffer_head *VAR_5,
    struct ocfs2_cached_dealloc_ctxt *VAR_6,
    struct ocfs2_post_refcount *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = FUNC_1(VAR_2->xr_clusters);
 u32 VAR_10, VAR_11, VAR_12;
 struct ocfs2_extent_list *VAR_13 = &VAR_2->xr_list;
 unsigned int VAR_14;

 VAR_10 = 0;
 while (VAR_10 < VAR_9) {
  VAR_8 = FUNC_4(VAR_1, VAR_10, &VAR_11,
            &VAR_12, VAR_13, &VAR_14);

  VAR_10 += VAR_12;
  if ((VAR_14 & VAR_0))
   continue;

  FUNC_0(!VAR_11);

  VAR_8 = FUNC_3(VAR_1, VAR_3,
           VAR_4, VAR_5,
           VAR_10 - VAR_12,
           VAR_11, VAR_12,
           VAR_6, VAR_7);
  if (VAR_8) {
   FUNC_2(VAR_8);
   break;
  }
 }

 return VAR_8;
}
