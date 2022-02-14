
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_quota_recovery {int * r_list; } ;
struct ocfs2_mem_dqinfo {int dqi_type; int dqi_chunk; struct buffer_head* dqi_lqi_bh; int dqi_gqlock; int dqi_gqinode; struct buffer_head* dqi_ibh; void* dqi_blocks; void* dqi_chunks; int * dqi_rec; } ;
struct ocfs2_local_disk_dqinfo {int dqi_blocks; int dqi_chunks; int dqi_flags; } ;
struct mem_dqinfo {int dqi_maxblimit; int dqi_maxilimit; int dqi_flags; struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {struct ocfs2_quota_recovery* quota_rec; } ;
struct TYPE_4__ {int dqio_mutex; struct inode** files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int VAR_4 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_mem_dqinfo*) ;
 struct ocfs2_mem_dqinfo* FUNC_5 (int,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct ocfs2_quota_recovery* FUNC_11 () ;
 int FUNC_12 (struct super_block*,int) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,struct ocfs2_local_disk_dqinfo*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct inode*,struct buffer_head*,int ,struct mem_dqinfo*) ;
 int FUNC_18 (struct inode*,int ,struct buffer_head**) ;
 int FUNC_19 (struct inode*,struct ocfs2_local_disk_dqinfo*,int,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_2__*,int *) ;
 int VAR_5 ;
 struct mem_dqinfo* FUNC_22 (struct super_block*,int) ;
 TYPE_1__* FUNC_23 (struct super_block*) ;

__attribute__((used)) static int FUNC_24(struct super_block *VAR_6, int VAR_7)
{
 struct ocfs2_local_disk_dqinfo *VAR_8;
 struct mem_dqinfo *VAR_9 = FUNC_22(VAR_6, VAR_7);
 struct ocfs2_mem_dqinfo *VAR_10;
 struct inode *VAR_11 = FUNC_23(VAR_6)->files[VAR_7];
 int VAR_12;
 struct buffer_head *VAR_13 = ((void*)0);
 struct ocfs2_quota_recovery *VAR_14;
 int VAR_15 = 0;



 FUNC_10(&FUNC_23(VAR_6)->dqio_mutex);
 VAR_9->dqi_maxblimit = 0x7fffffffffffffffLL;
 VAR_9->dqi_maxilimit = 0x7fffffffffffffffLL;
 VAR_10 = FUNC_5(sizeof(struct ocfs2_mem_dqinfo), VAR_1);
 if (!VAR_10) {
  FUNC_7(VAR_2, "failed to allocate memory for ocfs2 quota"
          " info.");
  goto out_err;
 }
 VAR_9->dqi_priv = VAR_10;
 VAR_10->dqi_type = VAR_7;
 FUNC_0(&VAR_10->dqi_chunk);
 VAR_10->dqi_rec = ((void*)0);
 VAR_10->dqi_lqi_bh = ((void*)0);
 VAR_10->dqi_ibh = ((void*)0);

 VAR_12 = FUNC_12(VAR_6, VAR_7);
 if (VAR_12 < 0)
  goto out_err;

 VAR_12 = FUNC_13(VAR_11, &VAR_10->dqi_lqi_bh, 1);
 if (VAR_12 < 0) {
  FUNC_8(VAR_12);
  goto out_err;
 }
 VAR_15 = 1;


 VAR_12 = FUNC_18(VAR_11, 0, &VAR_13);
 if (VAR_12) {
  FUNC_8(VAR_12);
  FUNC_7(VAR_2, "failed to read quota file info header "
   "(type=%d)\n", VAR_7);
  goto out_err;
 }
 VAR_8 = (struct ocfs2_local_disk_dqinfo *)(VAR_13->b_data +
      VAR_3);
 VAR_9->dqi_flags = FUNC_6(VAR_8->dqi_flags);
 VAR_10->dqi_chunks = FUNC_6(VAR_8->dqi_chunks);
 VAR_10->dqi_blocks = FUNC_6(VAR_8->dqi_blocks);
 VAR_10->dqi_ibh = VAR_13;


 if (!(VAR_9->dqi_flags & VAR_4)) {
  VAR_14 = FUNC_1(VAR_6)->quota_rec;
  if (!VAR_14) {
   VAR_14 = FUNC_11();
   if (!VAR_14) {
    VAR_12 = -VAR_0;
    FUNC_8(VAR_12);
    goto out_err;
   }
   FUNC_1(VAR_6)->quota_rec = VAR_14;
  }

  VAR_12 = FUNC_19(VAR_11, VAR_8, VAR_7,
                                                   &VAR_14->r_list[VAR_7]);
  if (VAR_12 < 0) {
   FUNC_8(VAR_12);
   goto out_err;
  }
 }

 VAR_12 = FUNC_15(VAR_11,
      VAR_8,
      &VAR_10->dqi_chunk);
 if (VAR_12 < 0) {
  FUNC_8(VAR_12);
  goto out_err;
 }


 VAR_9->dqi_flags &= ~VAR_4;
 VAR_12 = FUNC_17(VAR_11, VAR_13, VAR_5, VAR_9);
 if (VAR_12 < 0) {
  FUNC_8(VAR_12);
  goto out_err;
 }

 FUNC_9(&FUNC_23(VAR_6)->dqio_mutex);
 return 0;
out_err:
 if (VAR_10) {
  FUNC_3(VAR_10->dqi_gqinode);
  FUNC_21(FUNC_1(VAR_6), &VAR_10->dqi_gqlock);
  FUNC_16(&VAR_10->dqi_gqlock);
  FUNC_2(VAR_10->dqi_lqi_bh);
  if (VAR_15)
   FUNC_14(VAR_11, 1);
  FUNC_20(&VAR_10->dqi_chunk);
  FUNC_4(VAR_10);
 }
 FUNC_2(VAR_13);
 FUNC_9(&FUNC_23(VAR_6)->dqio_mutex);
 return -1;
}
