
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int meta_ac; int * handle; } ;
struct ocfs2_xattr_search {struct buffer_head* xattr_bh; TYPE_3__* header; int here; void* end; void* base; int inode_bh; } ;
struct ocfs2_xattr_info {int dummy; } ;
struct TYPE_6__ {int xh_entries; } ;
struct TYPE_4__ {TYPE_3__ xb_header; } ;
struct ocfs2_xattr_block {int xb_flags; TYPE_1__ xb_attrs; } ;
struct inode {TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct inode*,int ,int ,struct buffer_head**,int ) ;
 int FUNC_3 (struct inode*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_4 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*,int ) ;
 int FUNC_5 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3,
     struct ocfs2_xattr_info *VAR_4,
     struct ocfs2_xattr_search *VAR_5,
     struct ocfs2_xattr_set_ctxt *VAR_6)
{
 struct buffer_head *VAR_7 = ((void*)0);
 handle_t *VAR_8 = VAR_6->handle;
 struct ocfs2_xattr_block *VAR_9 = ((void*)0);
 int VAR_10;

 if (!VAR_5->xattr_bh) {
  VAR_10 = FUNC_2(VAR_8, VAR_3, VAR_5->inode_bh,
            VAR_6->meta_ac, &VAR_7, 0);
  if (VAR_10) {
   FUNC_1(VAR_10);
   goto end;
  }

  VAR_5->xattr_bh = VAR_7;
  VAR_9 = (struct ocfs2_xattr_block *)VAR_5->xattr_bh->b_data;
  VAR_5->header = &VAR_9->xb_attrs.xb_header;
  VAR_5->base = (void *)VAR_5->header;
  VAR_5->end = (void *)VAR_9 + VAR_3->i_sb->s_blocksize;
  VAR_5->here = VAR_5->header->xh_entries;
 } else
  VAR_9 = (struct ocfs2_xattr_block *)VAR_5->xattr_bh->b_data;

 if (!(FUNC_0(VAR_9->xb_flags) & VAR_2)) {

  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_1);
  if (!VAR_10 || VAR_10 != -VAR_0)
   goto end;

  VAR_10 = FUNC_3(VAR_3, VAR_5, VAR_6);
  if (VAR_10)
   goto end;
 }

 VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

end:

 return VAR_10;
}
