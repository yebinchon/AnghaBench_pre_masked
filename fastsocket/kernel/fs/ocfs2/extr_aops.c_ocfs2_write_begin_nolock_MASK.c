
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct ocfs2_write_ctxt {int w_clen; struct page* w_target_page; int w_cpos; TYPE_3__* w_di_bh; int * w_handle; TYPE_2__* w_desc; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct TYPE_6__ {int i_list; } ;
struct ocfs2_dinode {TYPE_1__ id2; int i_clusters; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_9__ {scalar_t__ ip_blkno; } ;
struct TYPE_8__ {scalar_t__ b_data; } ;
struct TYPE_7__ {scalar_t__ c_needs_zero; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned long long,long long,int ,unsigned int,unsigned int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_write_ctxt**,struct ocfs2_super*,int ,unsigned int,struct buffer_head*) ;
 int FUNC_10 (int ,int *,unsigned int) ;
 int FUNC_11 (struct inode*,int ,unsigned int) ;
 int FUNC_12 (int ,unsigned int) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 int FUNC_14 (struct inode*,int ,unsigned int,struct ocfs2_write_ctxt*) ;
 int FUNC_15 (struct ocfs2_alloc_context*) ;
 int FUNC_16 (struct ocfs2_write_ctxt*) ;
 int FUNC_17 (struct address_space*,struct ocfs2_write_ctxt*,int ,int ,int,struct page*) ;
 int FUNC_18 (struct ocfs2_extent_tree*,int ,TYPE_3__*) ;
 int FUNC_19 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_20 (struct inode*,struct ocfs2_extent_tree*,unsigned int,unsigned int,struct ocfs2_alloc_context**,struct ocfs2_alloc_context**) ;
 int FUNC_21 (struct inode*,struct ocfs2_write_ctxt*,unsigned int*,unsigned int*) ;
 int FUNC_22 (struct inode*,struct buffer_head*,int ,int,int ) ;
 int FUNC_23 (struct ocfs2_super*,struct ocfs2_write_ctxt*,int ,unsigned int,int) ;
 int * FUNC_24 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_25 (struct ocfs2_super*) ;
 int FUNC_26 (struct address_space*,struct inode*,int ,unsigned int,struct page*,struct ocfs2_write_ctxt*) ;
 int FUNC_27 (struct address_space*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,struct ocfs2_write_ctxt*,int ,unsigned int) ;
 scalar_t__ FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct inode*,int ) ;

int FUNC_30(struct address_space *VAR_4,
        loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
        struct page **VAR_8, void **VAR_9,
        struct buffer_head *VAR_10, struct page *VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = VAR_1;
 unsigned int VAR_15, VAR_16;
 struct ocfs2_write_ctxt *VAR_17;
 struct inode *VAR_18 = VAR_4->host;
 struct ocfs2_super *VAR_19 = FUNC_3(VAR_18->i_sb);
 struct ocfs2_dinode *VAR_20;
 struct ocfs2_alloc_context *VAR_21 = ((void*)0);
 struct ocfs2_alloc_context *VAR_22 = ((void*)0);
 handle_t *VAR_23;
 struct ocfs2_extent_tree VAR_24;

 VAR_12 = FUNC_9(&VAR_17, VAR_19, VAR_5, VAR_6, VAR_10);
 if (VAR_12) {
  FUNC_8(VAR_12);
  return VAR_12;
 }

 if (FUNC_25(VAR_19)) {
  VAR_12 = FUNC_26(VAR_4, VAR_18, VAR_5, VAR_6,
           VAR_11, VAR_17);
  if (VAR_12 == 1) {
   VAR_12 = 0;
   goto success;
  }
  if (VAR_12 < 0) {
   FUNC_8(VAR_12);
   goto out;
  }
 }

 VAR_12 = FUNC_14(VAR_18, VAR_5, VAR_6, VAR_17);
 if (VAR_12) {
  FUNC_8(VAR_12);
  goto out;
 }

 VAR_12 = FUNC_11(VAR_18, VAR_5, VAR_6);
 if (VAR_12 < 0) {
  FUNC_8(VAR_12);
  goto out;
 } else if (VAR_12 == 1) {
  VAR_12 = FUNC_22(VAR_18, VAR_10,
      VAR_17->w_cpos, VAR_17->w_clen, VAR_3);
  if (VAR_12) {
   FUNC_8(VAR_12);
   goto out;
  }
 }

 VAR_12 = FUNC_21(VAR_18, VAR_17, &VAR_15,
     &VAR_16);
 if (VAR_12) {
  FUNC_8(VAR_12);
  goto out;
 }

 VAR_20 = (struct ocfs2_dinode *)VAR_17->w_di_bh->b_data;







 if (VAR_15 || VAR_16) {





  FUNC_7(0, "extend inode %llu, i_size = %lld, di->i_clusters = %u,"
       " clusters_to_add = %u, extents_to_split = %u\n",
       (unsigned long long)FUNC_2(VAR_18)->ip_blkno,
       (long long)FUNC_5(VAR_18), FUNC_6(VAR_20->i_clusters),
       VAR_15, VAR_16);

  FUNC_18(&VAR_24, FUNC_0(VAR_18),
           VAR_17->w_di_bh);
  VAR_12 = FUNC_20(VAR_18, &VAR_24,
         VAR_15, VAR_16,
         &VAR_21, &VAR_22);
  if (VAR_12) {
   FUNC_8(VAR_12);
   goto out;
  }

  VAR_14 = FUNC_10(VAR_18->i_sb,
          &VAR_20->id2.i_list,
          VAR_15);

 }






 if (VAR_15 || VAR_16 ||
     (VAR_17->w_clen && (VAR_17->w_desc[0].c_needs_zero ||
       VAR_17->w_desc[VAR_17->w_clen - 1].c_needs_zero)))
  VAR_13 = 1;
 else
  VAR_13 = 0;

 FUNC_23(VAR_19, VAR_17, VAR_5, VAR_6, VAR_13);

 VAR_23 = FUNC_24(VAR_19, VAR_14);
 if (FUNC_1(VAR_23)) {
  VAR_12 = FUNC_4(VAR_23);
  FUNC_8(VAR_12);
  goto out;
 }

 VAR_17->w_handle = VAR_23;

 if (VAR_15 && FUNC_28(VAR_18,
   FUNC_12(VAR_19->sb, VAR_15))) {
  VAR_12 = -VAR_0;
  goto out_commit;
 }




 VAR_12 = FUNC_19(VAR_23, FUNC_0(VAR_18), VAR_17->w_di_bh,
          VAR_2);
 if (VAR_12) {
  FUNC_8(VAR_12);
  goto out_quota;
 }






 VAR_12 = FUNC_17(VAR_4, VAR_17, VAR_17->w_cpos, VAR_5,
      VAR_13, VAR_11);
 if (VAR_12) {
  FUNC_8(VAR_12);
  goto out_quota;
 }

 VAR_12 = FUNC_27(VAR_4, VAR_21, VAR_22, VAR_17, VAR_5,
       VAR_6);
 if (VAR_12) {
  FUNC_8(VAR_12);
  goto out_quota;
 }

 if (VAR_21)
  FUNC_15(VAR_21);
 if (VAR_22)
  FUNC_15(VAR_22);

success:
 *VAR_8 = VAR_17->w_target_page;
 *VAR_9 = VAR_17;
 return 0;
out_quota:
 if (VAR_15)
  FUNC_29(VAR_18,
     FUNC_12(VAR_19->sb, VAR_15));
out_commit:
 FUNC_13(VAR_19, VAR_23);

out:
 FUNC_16(VAR_17);

 if (VAR_21)
  FUNC_15(VAR_21);
 if (VAR_22)
  FUNC_15(VAR_22);
 return VAR_12;
}
