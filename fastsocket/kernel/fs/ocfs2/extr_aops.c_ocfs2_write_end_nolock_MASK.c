
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct ocfs2_write_ctxt {int w_num_pages; unsigned int w_target_from; unsigned int w_target_to; int w_dealloc; TYPE_1__* w_di_bh; int * w_handle; struct page* w_target_page; struct page** w_pages; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_ctime_nsec; int i_mtime_nsec; void* i_ctime; void* i_mtime; void* i_size; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_size; TYPE_3__ i_mtime; TYPE_3__ i_ctime; int i_blocks; int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_5__ {int ip_dyn_features; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ocfs2_super*,int *) ;
 int FUNC_12 (struct ocfs2_write_ctxt*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *,struct inode*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,int,unsigned int,unsigned int*,struct ocfs2_dinode*,struct ocfs2_write_ctxt*) ;
 int FUNC_19 (struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_20 (struct page*) ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(struct address_space *VAR_3,
      loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
      struct page *VAR_7, void *VAR_8)
{
 int VAR_9;
 unsigned VAR_10, VAR_11, VAR_12 = VAR_4 & (VAR_2 - 1);
 struct inode *VAR_13 = VAR_3->host;
 struct ocfs2_super *VAR_14 = FUNC_2(VAR_13->i_sb);
 struct ocfs2_write_ctxt *VAR_15 = VAR_8;
 struct ocfs2_dinode *VAR_16 = (struct ocfs2_dinode *)VAR_15->w_di_bh->b_data;
 handle_t *VAR_17 = VAR_15->w_handle;
 struct page *VAR_18;

 if (FUNC_1(VAR_13)->ip_dyn_features & VAR_1) {
  FUNC_18(VAR_13, VAR_4, VAR_5, &VAR_6, VAR_16, VAR_15);
  goto out_write_size;
 }

 if (FUNC_21(VAR_6 < VAR_5)) {
  if (!FUNC_3(VAR_15->w_target_page))
   VAR_6 = 0;

  FUNC_19(VAR_15->w_target_page, VAR_12+VAR_6,
           VAR_12+VAR_5);
 }
 FUNC_7(VAR_15->w_target_page);

 for(VAR_9 = 0; VAR_9 < VAR_15->w_num_pages; VAR_9++) {
  VAR_18 = VAR_15->w_pages[VAR_9];

  if (VAR_18 == VAR_15->w_target_page) {
   VAR_10 = VAR_15->w_target_from;
   VAR_11 = VAR_15->w_target_to;

   FUNC_0(VAR_10 > VAR_2 ||
          VAR_11 > VAR_2 ||
          VAR_11 < VAR_10);
  } else {





   VAR_10 = 0;
   VAR_11 = VAR_2;
  }

  if (FUNC_20(VAR_18)) {
   if (FUNC_17(VAR_13))
    FUNC_14(VAR_15->w_handle, VAR_13);
   FUNC_4(VAR_18, VAR_10, VAR_11);
  }
 }

out_write_size:
 VAR_4 += VAR_6;
 if (VAR_4 > VAR_13->i_size) {
  FUNC_9(VAR_13, VAR_4);
  FUNC_10(VAR_13);
 }
 VAR_13->i_blocks = FUNC_13(VAR_13);
 VAR_16->i_size = FUNC_6((u64)FUNC_8(VAR_13));
 VAR_13->i_mtime = VAR_13->i_ctime = VAR_0;
 VAR_16->i_mtime = VAR_16->i_ctime = FUNC_6(VAR_13->i_mtime.tv_sec);
 VAR_16->i_mtime_nsec = VAR_16->i_ctime_nsec = FUNC_5(VAR_13->i_mtime.tv_nsec);
 FUNC_15(VAR_17, VAR_15->w_di_bh);

 FUNC_11(VAR_14, VAR_17);

 FUNC_16(VAR_14, &VAR_15->w_dealloc);

 FUNC_12(VAR_15);

 return VAR_6;
}
