
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_snapshot_list {void* ssl_prev; void* ssl_next; } ;
struct nilfs_cpfile_header {int ch_nsnapshots; } ;
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
 int FUNC_9 (struct nilfs_checkpoint*) ;
 scalar_t__ FUNC_10 (struct nilfs_checkpoint*) ;
 int FUNC_11 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_12 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_13 (struct inode*,struct buffer_head*,void*) ;
 struct nilfs_snapshot_list* FUNC_14 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 int FUNC_15 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 int FUNC_16 (struct inode*,struct buffer_head**) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_2, __u64 VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct nilfs_cpfile_header *VAR_8;
 struct nilfs_checkpoint *VAR_9;
 struct nilfs_snapshot_list *VAR_10;
 __u64 VAR_11, VAR_12;
 void *VAR_13;
 int VAR_14;

 if (VAR_3 == 0)
  return -VAR_0;
 FUNC_3(&FUNC_0(VAR_2)->mi_sem);

 VAR_14 = FUNC_15(VAR_2, VAR_3, 0, &VAR_7);
 if (VAR_14 < 0)
  goto out_sem;
 VAR_13 = FUNC_5(VAR_7->b_page, VAR_1);
 VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_7, VAR_13);
 if (FUNC_10(VAR_9)) {
  VAR_14 = -VAR_0;
  FUNC_6(VAR_13, VAR_1);
  goto out_cp;
 }
 if (!FUNC_11(VAR_9)) {
  VAR_14 = 0;
  FUNC_6(VAR_13, VAR_1);
  goto out_cp;
 }

 VAR_10 = &VAR_9->cp_snapshot_list;
 VAR_11 = FUNC_8(VAR_10->ssl_next);
 VAR_12 = FUNC_8(VAR_10->ssl_prev);
 FUNC_6(VAR_13, VAR_1);

 VAR_14 = FUNC_16(VAR_2, &VAR_4);
 if (VAR_14 < 0)
  goto out_cp;
 if (VAR_11 != 0) {
  VAR_14 = FUNC_15(VAR_2, VAR_11, 0,
       &VAR_5);
  if (VAR_14 < 0)
   goto out_header;
 } else {
  VAR_5 = VAR_4;
  FUNC_4(VAR_5);
 }
 if (VAR_12 != 0) {
  VAR_14 = FUNC_15(VAR_2, VAR_12, 0,
       &VAR_6);
  if (VAR_14 < 0)
   goto out_next;
 } else {
  VAR_6 = VAR_4;
  FUNC_4(VAR_6);
 }

 VAR_13 = FUNC_5(VAR_5->b_page, VAR_1);
 VAR_10 = FUNC_14(
  VAR_2, VAR_11, VAR_5, VAR_13);
 VAR_10->ssl_prev = FUNC_2(VAR_12);
 FUNC_6(VAR_13, VAR_1);

 VAR_13 = FUNC_5(VAR_6->b_page, VAR_1);
 VAR_10 = FUNC_14(
  VAR_2, VAR_12, VAR_6, VAR_13);
 VAR_10->ssl_next = FUNC_2(VAR_11);
 FUNC_6(VAR_13, VAR_1);

 VAR_13 = FUNC_5(VAR_7->b_page, VAR_1);
 VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_7, VAR_13);
 VAR_9->cp_snapshot_list.ssl_next = FUNC_2(0);
 VAR_9->cp_snapshot_list.ssl_prev = FUNC_2(0);
 FUNC_9(VAR_9);
 FUNC_6(VAR_13, VAR_1);

 VAR_13 = FUNC_5(VAR_4->b_page, VAR_1);
 VAR_8 = FUNC_13(VAR_2, VAR_4, VAR_13);
 FUNC_7(&VAR_8->ch_nsnapshots, -1);
 FUNC_6(VAR_13, VAR_1);

 FUNC_17(VAR_5);
 FUNC_17(VAR_6);
 FUNC_17(VAR_7);
 FUNC_17(VAR_4);
 FUNC_18(VAR_2);

 FUNC_1(VAR_6);

 out_next:
 FUNC_1(VAR_5);

 out_header:
 FUNC_1(VAR_4);

 out_cp:
 FUNC_1(VAR_7);

 out_sem:
 FUNC_19(&FUNC_0(VAR_2)->mi_sem);
 return VAR_14;
}
