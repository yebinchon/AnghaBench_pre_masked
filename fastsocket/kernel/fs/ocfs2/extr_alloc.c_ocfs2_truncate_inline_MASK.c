
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int s_feature_incompat; } ;
struct ocfs2_inline_data {scalar_t__ id_data; } ;
struct TYPE_4__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {int i_mtime_nsec; int i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; int i_dyn_features; TYPE_1__ id2; } ;
struct TYPE_6__ {unsigned int tv_sec; int tv_nsec; } ;
struct inode {TYPE_3__ i_ctime; TYPE_3__ i_mtime; int i_blocks; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int ip_dyn_features; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int ,unsigned int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 int FUNC_14 (int ,char*,unsigned long long,int,int,int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_17 (int *,struct buffer_head*) ;
 int * FUNC_18 (struct ocfs2_super*,int ) ;
 int FUNC_19 (struct ocfs2_super*) ;

int FUNC_20(struct inode *VAR_5, struct buffer_head *VAR_6,
     unsigned int VAR_7, unsigned int VAR_8, int VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 handle_t *VAR_12;
 struct ocfs2_super *VAR_13 = FUNC_4(VAR_5->i_sb);
 struct ocfs2_dinode *VAR_14 = (struct ocfs2_dinode *)VAR_6->b_data;
 struct ocfs2_inline_data *VAR_15 = &VAR_14->id2.i_data;

 if (VAR_8 > FUNC_8(VAR_5))
  VAR_8 = FUNC_8(VAR_5);

 FUNC_0(VAR_7 >= VAR_8);

 if (!(FUNC_3(VAR_5)->ip_dyn_features & VAR_2) ||
     !(FUNC_10(VAR_14->i_dyn_features) & VAR_2) ||
     !FUNC_19(VAR_13)) {
  FUNC_14(VAR_5->i_sb,
       "Inline data flags for inode %llu don't agree! "
       "Disk: 0x%x, Memory: 0x%x, Superblock: 0x%x\n",
       (unsigned long long)FUNC_3(VAR_5)->ip_blkno,
       FUNC_10(VAR_14->i_dyn_features),
       FUNC_3(VAR_5)->ip_dyn_features,
       VAR_13->s_feature_incompat);
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_12 = FUNC_18(VAR_13, VAR_3);
 if (FUNC_2(VAR_12)) {
  VAR_10 = FUNC_5(VAR_12);
  FUNC_12(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_16(VAR_12, FUNC_1(VAR_5), VAR_6,
          VAR_4);
 if (VAR_10) {
  FUNC_12(VAR_10);
  goto out_commit;
 }

 VAR_11 = VAR_8 - VAR_7;
 FUNC_11(VAR_15->id_data + VAR_7, 0, VAR_11);







 if (VAR_9) {
  FUNC_9(VAR_5, VAR_7);
  VAR_14->i_size = FUNC_7(VAR_7);
 }

 VAR_5->i_blocks = FUNC_15(VAR_5);
 VAR_5->i_ctime = VAR_5->i_mtime = VAR_0;

 VAR_14->i_ctime = VAR_14->i_mtime = FUNC_7(VAR_5->i_ctime.tv_sec);
 VAR_14->i_ctime_nsec = VAR_14->i_mtime_nsec = FUNC_6(VAR_5->i_ctime.tv_nsec);

 FUNC_17(VAR_12, VAR_6);

out_commit:
 FUNC_13(VAR_13, VAR_12);

out:
 return VAR_10;
}
