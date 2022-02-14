
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; int unplug_io_fn; int capabilities; } ;
struct TYPE_5__ {int vol_id; int ubi_num; } ;
struct ubifs_info {scalar_t__ max_inode_sz; struct inode* ubi; TYPE_2__ bdi; int umount_mutex; TYPE_1__ vi; int di; int ltail_lnum; int lhead_lnum; int highest_inum; struct super_block* vfs_sb; int orph_new; int orph_list; int old_buds; int unclean_leb_list; int frdi_idx_list; int freeable_list; int empty_list; int uncat_list; int replay_buds; int replay_list; int idx_gc; int infos_list; void* orph_tree; void* size_tree; void* old_idx; void* buds; int cmt_wq; int bu_mutex; int mst_mutex; int log_mutex; int tnc_mutex; int lp_mutex; int commit_sem; int orphan_lock; int space_lock; int buds_lock; int cs_lock; int cnt_lock; } ;
struct ubi_volume_desc {scalar_t__ max_inode_sz; struct inode* ubi; TYPE_2__ bdi; int umount_mutex; TYPE_1__ vi; int di; int ltail_lnum; int lhead_lnum; int highest_inum; struct super_block* vfs_sb; int orph_new; int orph_list; int old_buds; int unclean_leb_list; int frdi_idx_list; int freeable_list; int empty_list; int uncat_list; int replay_buds; int replay_list; int idx_gc; int infos_list; void* orph_tree; void* size_tree; void* old_idx; void* buds; int cmt_wq; int bu_mutex; int mst_mutex; int log_mutex; int tnc_mutex; int lp_mutex; int commit_sem; int orphan_lock; int space_lock; int buds_lock; int cs_lock; int cnt_lock; } ;
struct super_block {scalar_t__ s_maxbytes; int s_root; int * s_op; int s_blocksize_bits; int s_blocksize; int s_magic; struct ubifs_info* s_fs_info; TYPE_2__* s_bdi; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct inode*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,char*,int ,int ) ;
 int FUNC_6 (struct inode*) ;
 int VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct ubifs_info*) ;
 int FUNC_11 (struct ubifs_info*) ;
 struct ubifs_info* FUNC_12 (int,int ) ;
 int FUNC_13 (struct ubifs_info*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct ubifs_info*,TYPE_1__*) ;
 struct inode* FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int) ;
 struct inode* FUNC_23 (struct super_block*,int ) ;
 int FUNC_24 (struct ubifs_info*,void*,int ) ;
 int VAR_13 ;
 int FUNC_25 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_26(struct super_block *VAR_14, void *VAR_15, int VAR_16)
{
 struct ubi_volume_desc *VAR_17 = VAR_14->s_fs_info;
 struct ubifs_info *VAR_18;
 struct inode *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_12(sizeof(struct ubifs_info), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 FUNC_17(&VAR_18->cnt_lock);
 FUNC_17(&VAR_18->cs_lock);
 FUNC_17(&VAR_18->buds_lock);
 FUNC_17(&VAR_18->space_lock);
 FUNC_17(&VAR_18->orphan_lock);
 FUNC_7(&VAR_18->commit_sem);
 FUNC_14(&VAR_18->lp_mutex);
 FUNC_14(&VAR_18->tnc_mutex);
 FUNC_14(&VAR_18->log_mutex);
 FUNC_14(&VAR_18->mst_mutex);
 FUNC_14(&VAR_18->umount_mutex);
 FUNC_14(&VAR_18->bu_mutex);
 FUNC_8(&VAR_18->cmt_wq);
 VAR_18->buds = VAR_4;
 VAR_18->old_idx = VAR_4;
 VAR_18->size_tree = VAR_4;
 VAR_18->orph_tree = VAR_4;
 FUNC_0(&VAR_18->infos_list);
 FUNC_0(&VAR_18->idx_gc);
 FUNC_0(&VAR_18->replay_list);
 FUNC_0(&VAR_18->replay_buds);
 FUNC_0(&VAR_18->uncat_list);
 FUNC_0(&VAR_18->empty_list);
 FUNC_0(&VAR_18->freeable_list);
 FUNC_0(&VAR_18->frdi_idx_list);
 FUNC_0(&VAR_18->unclean_leb_list);
 FUNC_0(&VAR_18->old_buds);
 FUNC_0(&VAR_18->orph_list);
 FUNC_0(&VAR_18->orph_new);

 VAR_18->vfs_sb = VAR_14;
 VAR_18->highest_inum = VAR_7;
 VAR_18->lhead_lnum = VAR_18->ltail_lnum = VAR_8;

 FUNC_20(VAR_17, &VAR_18->vi);
 FUNC_19(VAR_18->vi.ubi_num, &VAR_18->di);


 VAR_18->ubi = FUNC_21(VAR_18->vi.ubi_num, VAR_18->vi.vol_id, VAR_11);
 if (FUNC_1(VAR_18->ubi)) {
  VAR_20 = FUNC_2(VAR_18->ubi);
  goto out_free;
 }
 VAR_18->bdi.name = "ubifs",
 VAR_18->bdi.capabilities = VAR_0;
 VAR_18->bdi.unplug_io_fn = VAR_12;
 VAR_20 = FUNC_4(&VAR_18->bdi);
 if (VAR_20)
  goto out_close;
 VAR_20 = FUNC_5(&VAR_18->bdi, ((void*)0), "ubifs_%d_%d",
      VAR_18->vi.ubi_num, VAR_18->vi.vol_id);
 if (VAR_20)
  goto out_bdi;

 VAR_20 = FUNC_24(VAR_18, VAR_15, 0);
 if (VAR_20)
  goto out_bdi;

 VAR_14->s_bdi = &VAR_18->bdi;
 VAR_14->s_fs_info = VAR_18;
 VAR_14->s_magic = VAR_10;
 VAR_14->s_blocksize = VAR_6;
 VAR_14->s_blocksize_bits = VAR_5;
 VAR_14->s_maxbytes = VAR_18->max_inode_sz = FUNC_10(VAR_18);
 if (VAR_18->max_inode_sz > VAR_3)
  VAR_14->s_maxbytes = VAR_18->max_inode_sz = VAR_3;
 VAR_14->s_op = &VAR_13;

 FUNC_15(&VAR_18->umount_mutex);
 VAR_20 = FUNC_13(VAR_18);
 if (VAR_20) {
  FUNC_22(VAR_20 < 0);
  goto out_unlock;
 }


 VAR_19 = FUNC_23(VAR_14, VAR_9);
 if (FUNC_1(VAR_19)) {
  VAR_20 = FUNC_2(VAR_19);
  goto out_umount;
 }

 VAR_14->s_root = FUNC_6(VAR_19);
 if (!VAR_14->s_root)
  goto out_iput;

 FUNC_16(&VAR_18->umount_mutex);
 return 0;

out_iput:
 FUNC_9(VAR_19);
out_umount:
 FUNC_25(VAR_18);
out_unlock:
 FUNC_16(&VAR_18->umount_mutex);
out_bdi:
 FUNC_3(&VAR_18->bdi);
out_close:
 FUNC_18(VAR_18->ubi);
out_free:
 FUNC_11(VAR_18);
 return VAR_20;
}
