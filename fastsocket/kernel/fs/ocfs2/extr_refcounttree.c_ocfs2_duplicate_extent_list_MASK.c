
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__,unsigned int,struct ocfs2_cached_dealloc_ctxt*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_6 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0,
    struct inode *VAR_1,
    struct buffer_head *VAR_2,
    struct ocfs2_caching_info *VAR_3,
    struct buffer_head *VAR_4,
    struct ocfs2_cached_dealloc_ctxt *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 loff_t VAR_11;
 unsigned int VAR_12;
 struct ocfs2_extent_tree VAR_13;

 FUNC_6(&VAR_13, FUNC_0(VAR_1), VAR_2);

 VAR_11 = FUNC_1(VAR_0);
 VAR_9 = FUNC_4(VAR_0->i_sb, VAR_11);

 VAR_10 = 0;
 while (VAR_10 < VAR_9) {
  VAR_6 = FUNC_5(VAR_0, VAR_10, &VAR_7,
      &VAR_8, &VAR_12);

  if (VAR_7) {
   VAR_6 = FUNC_3(VAR_1, &VAR_13,
         VAR_3, VAR_4,
         VAR_10, VAR_7,
         VAR_8,
         VAR_12,
         VAR_5);
   if (VAR_6) {
    FUNC_2(VAR_6);
    goto out;
   }
  }

  VAR_10 += VAR_8;
 }

out:
 return VAR_6;
}
