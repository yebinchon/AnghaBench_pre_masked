
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int vb_access; struct buffer_head* vb_bh; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_dinode {int i_xattr_inline_size; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ s_blocksize; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct ocfs2_xattr_value_buf*,struct ocfs2_xattr_header*,struct ocfs2_caching_info*,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1,
    struct buffer_head *VAR_2,
    struct ocfs2_caching_info *VAR_3,
    struct buffer_head *VAR_4,
    struct ocfs2_cached_dealloc_ctxt *VAR_5)
{
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_2->b_data;
 struct ocfs2_xattr_header *VAR_7 = (struct ocfs2_xattr_header *)
    (VAR_2->b_data + VAR_1->i_sb->s_blocksize -
    FUNC_0(VAR_6->i_xattr_inline_size));
 struct ocfs2_xattr_value_buf VAR_8 = {
  .vb_bh = VAR_2,
  .vb_access = VAR_0,
 };

 return FUNC_1(VAR_1, &VAR_8, VAR_7,
        VAR_3, VAR_4, VAR_5);
}
