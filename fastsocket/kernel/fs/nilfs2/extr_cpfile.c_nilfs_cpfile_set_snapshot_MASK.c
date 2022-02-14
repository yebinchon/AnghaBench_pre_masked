
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_snapshot_list {void* ssl_next; void* ssl_prev; } ;
struct nilfs_cpfile_header {int ch_nsnapshots; struct nilfs_snapshot_list ch_snapshot_list; } ;
struct nilfs_checkpoint {struct nilfs_snapshot_list cp_snapshot_list; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (struct nilfs_checkpoint*) ;
 int FUNC_10 (struct nilfs_checkpoint*) ;
 scalar_t__ FUNC_11 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_12 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_13 (struct inode*,struct buffer_head*,void*) ;
 struct nilfs_snapshot_list* FUNC_14 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 unsigned long FUNC_15 (struct inode*,scalar_t__) ;
 int FUNC_16 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 int FUNC_17 (struct inode*,struct buffer_head**) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_2, __u64 VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct nilfs_cpfile_header *VAR_8;
 struct nilfs_checkpoint *VAR_9;
 struct nilfs_snapshot_list *VAR_10;
 __u64 VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;
 void *VAR_15;
 int VAR_16;

 if (VAR_3 == 0)
  return -VAR_0;
 FUNC_3(&FUNC_0(VAR_2)->mi_sem);

 VAR_16 = FUNC_16(VAR_2, VAR_3, 0, &VAR_7);
 if (VAR_16 < 0)
  goto out_sem;
 VAR_15 = FUNC_5(VAR_7->b_page, VAR_1);
 VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_7, VAR_15);
 if (FUNC_9(VAR_9)) {
  VAR_16 = -VAR_0;
  FUNC_6(VAR_15, VAR_1);
  goto out_cp;
 }
 if (FUNC_11(VAR_9)) {
  VAR_16 = 0;
  FUNC_6(VAR_15, VAR_1);
  goto out_cp;
 }
 FUNC_6(VAR_15, VAR_1);

 VAR_16 = FUNC_17(VAR_2, &VAR_4);
 if (VAR_16 < 0)
  goto out_cp;
 VAR_15 = FUNC_5(VAR_4->b_page, VAR_1);
 VAR_8 = FUNC_13(VAR_2, VAR_4, VAR_15);
 VAR_10 = &VAR_8->ch_snapshot_list;
 VAR_5 = VAR_4;
 FUNC_4(VAR_5);
 VAR_11 = 0;
 VAR_13 = 0;
 VAR_12 = FUNC_8(VAR_10->ssl_prev);
 while (VAR_12 > VAR_3) {
  VAR_14 = FUNC_15(VAR_2, VAR_12);
  VAR_11 = VAR_12;
  if (VAR_13 != VAR_14) {
   FUNC_6(VAR_15, VAR_1);
   FUNC_1(VAR_5);
   VAR_16 = FUNC_16(VAR_2, VAR_11,
        0, &VAR_5);
   if (VAR_16 < 0)
    goto out_header;
   VAR_15 = FUNC_5(VAR_5->b_page, VAR_1);
  }
  VAR_13 = VAR_14;
  VAR_9 = FUNC_12(
   VAR_2, VAR_11, VAR_5, VAR_15);
  VAR_10 = &VAR_9->cp_snapshot_list;
  VAR_12 = FUNC_8(VAR_10->ssl_prev);
 }
 FUNC_6(VAR_15, VAR_1);

 if (VAR_12 != 0) {
  VAR_16 = FUNC_16(VAR_2, VAR_12, 0,
       &VAR_6);
  if (VAR_16 < 0)
   goto out_curr;
 } else {
  VAR_6 = VAR_4;
  FUNC_4(VAR_6);
 }

 VAR_15 = FUNC_5(VAR_5->b_page, VAR_1);
 VAR_10 = FUNC_14(
  VAR_2, VAR_11, VAR_5, VAR_15);
 VAR_10->ssl_prev = FUNC_2(VAR_3);
 FUNC_6(VAR_15, VAR_1);

 VAR_15 = FUNC_5(VAR_7->b_page, VAR_1);
 VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_7, VAR_15);
 VAR_9->cp_snapshot_list.ssl_next = FUNC_2(VAR_11);
 VAR_9->cp_snapshot_list.ssl_prev = FUNC_2(VAR_12);
 FUNC_10(VAR_9);
 FUNC_6(VAR_15, VAR_1);

 VAR_15 = FUNC_5(VAR_6->b_page, VAR_1);
 VAR_10 = FUNC_14(
  VAR_2, VAR_12, VAR_6, VAR_15);
 VAR_10->ssl_next = FUNC_2(VAR_3);
 FUNC_6(VAR_15, VAR_1);

 VAR_15 = FUNC_5(VAR_4->b_page, VAR_1);
 VAR_8 = FUNC_13(VAR_2, VAR_4, VAR_15);
 FUNC_7(&VAR_8->ch_nsnapshots, 1);
 FUNC_6(VAR_15, VAR_1);

 FUNC_18(VAR_6);
 FUNC_18(VAR_5);
 FUNC_18(VAR_7);
 FUNC_18(VAR_4);
 FUNC_19(VAR_2);

 FUNC_1(VAR_6);

 out_curr:
 FUNC_1(VAR_5);

 out_header:
 FUNC_1(VAR_4);

 out_cp:
 FUNC_1(VAR_7);

 out_sem:
 FUNC_20(&FUNC_0(VAR_2)->mi_sem);
 return VAR_16;
}
