
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nilfs_cpinfo {int dummy; } ;
struct TYPE_4__ {int ssl_next; } ;
struct nilfs_cpfile_header {TYPE_1__ ch_snapshot_list; } ;
struct TYPE_5__ {int ssl_next; } ;
struct nilfs_checkpoint {TYPE_2__ cp_snapshot_list; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ssize_t ;
typedef int __u64 ;
struct TYPE_6__ {int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct nilfs_checkpoint*) ;
 int FUNC_8 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_9 (struct inode*,int ,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_10 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_11 (struct inode*,struct nilfs_checkpoint*,struct nilfs_cpinfo*) ;
 unsigned long FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (struct inode*,int ,int ,struct buffer_head**) ;
 int FUNC_14 (struct inode*,struct buffer_head**) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static ssize_t FUNC_17(struct inode *VAR_2, __u64 *VAR_3,
       void *VAR_4, unsigned VAR_5, size_t VAR_6)
{
 struct buffer_head *VAR_7;
 struct nilfs_cpfile_header *VAR_8;
 struct nilfs_checkpoint *VAR_9;
 struct nilfs_cpinfo *VAR_10 = VAR_4;
 __u64 VAR_11 = *VAR_3, VAR_12;
 unsigned long VAR_13, VAR_14;
 void *VAR_15;
 int VAR_16 = 0, VAR_17;

 FUNC_3(&FUNC_0(VAR_2)->mi_sem);

 if (VAR_11 == 0) {
  VAR_17 = FUNC_14(VAR_2, &VAR_7);
  if (VAR_17 < 0)
   goto out;
  VAR_15 = FUNC_4(VAR_7->b_page, VAR_1);
  VAR_8 = FUNC_10(VAR_2, VAR_7, VAR_15);
  VAR_11 = FUNC_6(VAR_8->ch_snapshot_list.ssl_next);
  FUNC_5(VAR_15, VAR_1);
  FUNC_2(VAR_7);
  if (VAR_11 == 0) {
   VAR_17 = 0;
   goto out;
  }
 } else if (FUNC_15(VAR_11 == ~(__u64)0)) {
  VAR_17 = 0;
  goto out;
 }

 VAR_13 = FUNC_12(VAR_2, VAR_11);
 VAR_17 = FUNC_13(VAR_2, VAR_11, 0, &VAR_7);
 if (FUNC_15(VAR_17 < 0)) {
  if (VAR_17 == -VAR_0)
   VAR_17 = 0;
  goto out;
 }
 VAR_15 = FUNC_4(VAR_7->b_page, VAR_1);
 while (VAR_16 < VAR_6) {
  VAR_9 = FUNC_9(VAR_2, VAR_11, VAR_7, VAR_15);
  VAR_11 = ~(__u64)0;
  if (FUNC_15(FUNC_7(VAR_9) ||
        !FUNC_8(VAR_9)))
   break;
  FUNC_11(VAR_2, VAR_9, VAR_10);
  VAR_10 = (void *)VAR_10 + VAR_5;
  VAR_16++;
  VAR_12 = FUNC_6(VAR_9->cp_snapshot_list.ssl_next);
  if (VAR_12 == 0)
   break;

  VAR_14 = FUNC_12(VAR_2, VAR_12);
  if (VAR_13 != VAR_14) {
   FUNC_5(VAR_15, VAR_1);
   FUNC_2(VAR_7);
   VAR_17 = FUNC_13(VAR_2, VAR_12,
        0, &VAR_7);
   if (FUNC_15(VAR_17 < 0)) {
    FUNC_1(VAR_17 == -VAR_0);
    goto out;
   }
   VAR_15 = FUNC_4(VAR_7->b_page, VAR_1);
  }
  VAR_11 = VAR_12;
  VAR_13 = VAR_14;
 }
 FUNC_5(VAR_15, VAR_1);
 FUNC_2(VAR_7);
 *VAR_3 = VAR_11;
 VAR_17 = VAR_16;

 out:
 FUNC_16(&FUNC_0(VAR_2)->mi_sem);
 return VAR_17;
}
