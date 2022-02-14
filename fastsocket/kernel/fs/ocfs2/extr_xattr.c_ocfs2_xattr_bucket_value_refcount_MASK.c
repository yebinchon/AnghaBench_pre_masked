
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int vb_xv; int vb_bh; int vb_access; } ;
struct ocfs2_xattr_tree_value_refcount_para {int dealloc; int ref_root_bh; int ref_ci; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xattr_bucket {int bu_blocks; TYPE_1__** bu_bhs; } ;
struct ocfs2_post_refcount {int func; struct ocfs2_xattr_bucket* para; int credits; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_xattr_bucket*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long long,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct ocfs2_xattr_bucket*,int,int *,int *) ;
 int FUNC_7 (struct ocfs2_extent_tree*,int ,struct ocfs2_xattr_value_buf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (struct ocfs2_xattr_entry*) ;
 int FUNC_10 (struct inode*,int ,struct ocfs2_extent_tree*,int ,int ,int ,struct ocfs2_post_refcount*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2,
          struct ocfs2_xattr_bucket *VAR_3,
          void *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct ocfs2_extent_tree VAR_7;
 struct ocfs2_xattr_tree_value_refcount_para *VAR_8 =
   (struct ocfs2_xattr_tree_value_refcount_para *)VAR_4;
 struct ocfs2_xattr_header *VAR_9 =
   (struct ocfs2_xattr_header *)VAR_3->bu_bhs[0]->b_data;
 struct ocfs2_xattr_entry *VAR_10;
 struct ocfs2_xattr_value_buf VAR_11 = {
  .vb_access = VAR_0,
 };
 struct ocfs2_post_refcount VAR_12 = {
  .credits = VAR_3->bu_blocks,
  .para = VAR_3,
  .func = VAR_1,
 };
 struct ocfs2_post_refcount *VAR_13 = ((void*)0);


 if (FUNC_8(FUNC_1(VAR_2->i_sb)))
  VAR_13 = &VAR_12;

 FUNC_4(0, "refcount bucket %llu, count = %u\n",
      (unsigned long long)FUNC_2(VAR_3),
      FUNC_3(VAR_9->xh_count));
 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_9->xh_count); VAR_5++) {
  VAR_10 = &VAR_9->xh_entries[VAR_5];

  if (FUNC_9(VAR_10))
   continue;

  VAR_6 = FUNC_6(VAR_2->i_sb, VAR_3, VAR_5,
            &VAR_11.vb_xv, &VAR_11.vb_bh);
  if (VAR_6) {
   FUNC_5(VAR_6);
   break;
  }

  FUNC_7(&VAR_7,
         FUNC_0(VAR_2), &VAR_11);

  VAR_6 = FUNC_10(VAR_2, VAR_11.vb_xv,
       &VAR_7, VAR_8->ref_ci,
       VAR_8->ref_root_bh,
       VAR_8->dealloc, VAR_13);
  if (VAR_6) {
   FUNC_5(VAR_6);
   break;
  }
 }

 return VAR_6;

}
