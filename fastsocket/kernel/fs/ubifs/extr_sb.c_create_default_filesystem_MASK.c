
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct TYPE_5__ {int node_type; } ;
struct ubifs_sb_node {TYPE_2__ ch; void* flags; void* size; void* mode; scalar_t__ mtime_nsec; scalar_t__ ctime_nsec; scalar_t__ atime_nsec; void* mtime_sec; void* ctime_sec; void* atime_sec; void* nlink; void* creat_sqnum; int key; void* child_cnt; void* total_used; void* total_dark; void* total_dirty; void* total_free; void* leb_cnt; void* idx_lebs; void* empty_lebs; void* lscan_lnum; void* lsave_offs; void* lsave_lnum; void* ltab_offs; void* ltab_lnum; void* nhead_offs; void* nhead_lnum; void* lpt_offs; void* lpt_lnum; void* index_size; void* ihead_offs; void* ihead_lnum; void* gc_lnum; void* root_len; scalar_t__ root_offs; void* root_lnum; scalar_t__ cmt_no; void* highest_inum; void* log_lnum; void* ro_compat_version; void* rp_size; int uuid; void* default_compr; void* time_gran; void* fmt_version; void* lsave_cnt; void* fanout; void* jhead_cnt; void* orph_lebs; void* lpt_lebs; void* log_lebs; void* max_bud_bytes; void* max_leb_cnt; void* leb_size; void* min_io_size; int key_hash; } ;
struct ubifs_mst_node {TYPE_2__ ch; void* flags; void* size; void* mode; scalar_t__ mtime_nsec; scalar_t__ ctime_nsec; scalar_t__ atime_nsec; void* mtime_sec; void* ctime_sec; void* atime_sec; void* nlink; void* creat_sqnum; int key; void* child_cnt; void* total_used; void* total_dark; void* total_dirty; void* total_free; void* leb_cnt; void* idx_lebs; void* empty_lebs; void* lscan_lnum; void* lsave_offs; void* lsave_lnum; void* ltab_offs; void* ltab_lnum; void* nhead_offs; void* nhead_lnum; void* lpt_offs; void* lpt_lnum; void* index_size; void* ihead_offs; void* ihead_lnum; void* gc_lnum; void* root_len; scalar_t__ root_offs; void* root_lnum; scalar_t__ cmt_no; void* highest_inum; void* log_lnum; void* ro_compat_version; void* rp_size; int uuid; void* default_compr; void* time_gran; void* fmt_version; void* lsave_cnt; void* fanout; void* jhead_cnt; void* orph_lebs; void* lpt_lebs; void* log_lebs; void* max_bud_bytes; void* max_leb_cnt; void* leb_size; void* min_io_size; int key_hash; } ;
struct ubifs_ino_node {TYPE_2__ ch; void* flags; void* size; void* mode; scalar_t__ mtime_nsec; scalar_t__ ctime_nsec; scalar_t__ atime_nsec; void* mtime_sec; void* ctime_sec; void* atime_sec; void* nlink; void* creat_sqnum; int key; void* child_cnt; void* total_used; void* total_dark; void* total_dirty; void* total_free; void* leb_cnt; void* idx_lebs; void* empty_lebs; void* lscan_lnum; void* lsave_offs; void* lsave_lnum; void* ltab_offs; void* ltab_lnum; void* nhead_offs; void* nhead_lnum; void* lpt_offs; void* lpt_lnum; void* index_size; void* ihead_offs; void* ihead_lnum; void* gc_lnum; void* root_len; scalar_t__ root_offs; void* root_lnum; scalar_t__ cmt_no; void* highest_inum; void* log_lnum; void* ro_compat_version; void* rp_size; int uuid; void* default_compr; void* time_gran; void* fmt_version; void* lsave_cnt; void* fanout; void* jhead_cnt; void* orph_lebs; void* lpt_lebs; void* log_lebs; void* max_bud_bytes; void* max_leb_cnt; void* leb_size; void* min_io_size; int key_hash; } ;
struct TYPE_4__ {int compr_type; scalar_t__ override_compr; } ;
struct ubifs_info {int leb_cnt; int leb_size; int ref_node_alsz; int lsave_cnt; int max_leb_cnt; int min_io_size; int mst_node_alsz; int lpt_lnum; int lpt_offs; int nhead_lnum; int nhead_offs; int ltab_lnum; int ltab_offs; int lsave_lnum; int lsave_offs; int main_lebs; int dark_wm; int max_sqnum; int key_hash; int key_fmt; TYPE_1__ mount_opts; int key_len; } ;
struct ubifs_idx_node {TYPE_2__ ch; void* flags; void* size; void* mode; scalar_t__ mtime_nsec; scalar_t__ ctime_nsec; scalar_t__ atime_nsec; void* mtime_sec; void* ctime_sec; void* atime_sec; void* nlink; void* creat_sqnum; int key; void* child_cnt; void* total_used; void* total_dark; void* total_dirty; void* total_free; void* leb_cnt; void* idx_lebs; void* empty_lebs; void* lscan_lnum; void* lsave_offs; void* lsave_lnum; void* ltab_offs; void* ltab_lnum; void* nhead_offs; void* nhead_lnum; void* lpt_offs; void* lpt_lnum; void* index_size; void* ihead_offs; void* ihead_lnum; void* gc_lnum; void* root_len; scalar_t__ root_offs; void* root_lnum; scalar_t__ cmt_no; void* highest_inum; void* log_lnum; void* ro_compat_version; void* rp_size; int uuid; void* default_compr; void* time_gran; void* fmt_version; void* lsave_cnt; void* fanout; void* jhead_cnt; void* orph_lebs; void* lpt_lebs; void* log_lebs; void* max_bud_bytes; void* max_leb_cnt; void* leb_size; void* min_io_size; int key_hash; } ;
struct ubifs_cs_node {TYPE_2__ ch; void* flags; void* size; void* mode; scalar_t__ mtime_nsec; scalar_t__ ctime_nsec; scalar_t__ atime_nsec; void* mtime_sec; void* ctime_sec; void* atime_sec; void* nlink; void* creat_sqnum; int key; void* child_cnt; void* total_used; void* total_dark; void* total_dirty; void* total_free; void* leb_cnt; void* idx_lebs; void* empty_lebs; void* lscan_lnum; void* lsave_offs; void* lsave_lnum; void* ltab_offs; void* ltab_lnum; void* nhead_offs; void* nhead_lnum; void* lpt_offs; void* lpt_lnum; void* index_size; void* ihead_offs; void* ihead_lnum; void* gc_lnum; void* root_len; scalar_t__ root_offs; void* root_lnum; scalar_t__ cmt_no; void* highest_inum; void* log_lnum; void* ro_compat_version; void* rp_size; int uuid; void* default_compr; void* time_gran; void* fmt_version; void* lsave_cnt; void* fanout; void* jhead_cnt; void* orph_lebs; void* lpt_lebs; void* log_lebs; void* max_bud_bytes; void* max_leb_cnt; void* leb_size; void* min_io_size; int key_hash; } ;
struct ubifs_branch {void* len; void* lnum; int key; } ;
typedef void* __le64 ;
struct TYPE_6__ {int tv_sec; } ;


 int FUNC_0 (int,int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long long VAR_9 ;
 long long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 long long FUNC_5 (long long,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_8 (struct ubifs_info*,int *,int ) ;
 int VAR_47 ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,int *) ;
 int FUNC_10 (struct ubifs_sb_node*) ;
 struct ubifs_sb_node* FUNC_11 (int,int ) ;
 int FUNC_12 (struct ubifs_info*,int*,int,int*,int*) ;
 struct ubifs_branch* FUNC_13 (struct ubifs_info*,struct ubifs_sb_node*,int ) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_sb_node*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct ubifs_info *VAR_48)
{
 struct ubifs_sb_node *VAR_49;
 struct ubifs_mst_node *VAR_50;
 struct ubifs_idx_node *VAR_51;
 struct ubifs_branch *VAR_52;
 struct ubifs_ino_node *VAR_53;
 struct ubifs_cs_node *VAR_54;
 union ubifs_key VAR_55;
 int VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62;
 int VAR_63, VAR_64, VAR_65, VAR_66, VAR_67, VAR_68 = 0;
 int VAR_69 = VAR_32;
 long long VAR_70, VAR_71;
 __le64 VAR_72;


 VAR_48->key_len = VAR_44;





 if (VAR_48->leb_cnt < 0x7FFFFFFF / VAR_6)

  VAR_58 = VAR_48->leb_cnt * VAR_6 / 100;
 else
  VAR_58 = (VAR_48->leb_cnt / 100) * VAR_6;

 if (VAR_58 < VAR_31)
  VAR_58 = VAR_31;
 if (VAR_58 * VAR_48->leb_size > VAR_8)
  VAR_58 = VAR_8 / VAR_48->leb_size;







 VAR_57 = 2 * (VAR_48->ref_node_alsz * VAR_58) + VAR_48->leb_size - 1;
 VAR_59 = VAR_57 / VAR_48->leb_size;

 VAR_59 += 1;
 if (VAR_48->leb_cnt - VAR_69 > 8) {

  VAR_59 += 1;
  VAR_69 += 1;
 }

 VAR_60 = VAR_58 - VAR_59;
 if (VAR_60 < VAR_30)
  VAR_60 = VAR_30;







 VAR_65 = VAR_33;
 VAR_61 = VAR_48->leb_cnt - VAR_40 - VAR_34 - VAR_59;
 VAR_61 -= VAR_65;

 VAR_64 = VAR_29 + VAR_59;
 VAR_48->lsave_cnt = VAR_7;
 VAR_48->max_leb_cnt = VAR_48->leb_cnt;
 VAR_56 = FUNC_12(VAR_48, &VAR_61, VAR_64, &VAR_63,
        &VAR_66);
 if (VAR_56)
  return VAR_56;

 FUNC_4("LEB Properties Tree created (LEBs %d-%d)", VAR_64,
  VAR_64 + VAR_63 - 1);

 VAR_62 = VAR_48->leb_cnt - VAR_61;


 VAR_57 = FUNC_0(VAR_42, VAR_48->min_io_size);
 VAR_49 = FUNC_11(VAR_57, VAR_13);
 if (!VAR_49)
  return -VAR_12;

 VAR_70 = (long long)VAR_60 * VAR_48->leb_size;
 if (VAR_66)
  VAR_68 |= VAR_23;

 VAR_49->ch.node_type = VAR_41;
 VAR_49->key_hash = VAR_28;
 VAR_49->flags = FUNC_2(VAR_68);
 VAR_49->min_io_size = FUNC_2(VAR_48->min_io_size);
 VAR_49->leb_size = FUNC_2(VAR_48->leb_size);
 VAR_49->leb_cnt = FUNC_2(VAR_48->leb_cnt);
 VAR_49->max_leb_cnt = FUNC_2(VAR_48->max_leb_cnt);
 VAR_49->max_bud_bytes = FUNC_3(VAR_70);
 VAR_49->log_lebs = FUNC_2(VAR_59);
 VAR_49->lpt_lebs = FUNC_2(VAR_63);
 VAR_49->orph_lebs = FUNC_2(VAR_65);
 VAR_49->jhead_cnt = FUNC_2(VAR_5);
 VAR_49->fanout = FUNC_2(VAR_2);
 VAR_49->lsave_cnt = FUNC_2(VAR_48->lsave_cnt);
 VAR_49->fmt_version = FUNC_2(VAR_24);
 VAR_49->time_gran = FUNC_2(VAR_11);
 if (VAR_48->mount_opts.override_compr)
  VAR_49->default_compr = FUNC_1(VAR_48->mount_opts.compr_type);
 else
  VAR_49->default_compr = FUNC_1(VAR_19);

 FUNC_6(VAR_49->uuid);

 VAR_71 = (long long)VAR_61 * VAR_48->leb_size;
 VAR_70 = FUNC_5(VAR_71 * VAR_10, 100);
 if (VAR_70 > VAR_9)
  VAR_70 = VAR_9;
 VAR_49->rp_size = FUNC_3(VAR_70);
 VAR_49->ro_compat_version = FUNC_2(VAR_39);

 VAR_56 = FUNC_16(VAR_48, VAR_49, VAR_42, 0, 0, VAR_45);
 FUNC_10(VAR_49);
 if (VAR_56)
  return VAR_56;

 FUNC_4("default superblock created at LEB 0:0");


 VAR_50 = FUNC_11(VAR_48->mst_node_alsz, VAR_13);
 if (!VAR_50)
  return -VAR_12;

 VAR_50->ch.node_type = VAR_36;
 VAR_50->log_lnum = FUNC_2(VAR_29);
 VAR_50->highest_inum = FUNC_3(VAR_22);
 VAR_50->cmt_no = 0;
 VAR_50->root_lnum = FUNC_2(VAR_62 + VAR_4);
 VAR_50->root_offs = 0;
 VAR_57 = FUNC_14(VAR_48, 1);
 VAR_50->root_len = FUNC_2(VAR_57);
 VAR_50->gc_lnum = FUNC_2(VAR_62 + VAR_3);
 VAR_50->ihead_lnum = FUNC_2(VAR_62 + VAR_4);
 VAR_50->ihead_offs = FUNC_2(FUNC_0(VAR_57, VAR_48->min_io_size));
 VAR_50->index_size = FUNC_3(FUNC_0(VAR_57, 8));
 VAR_50->lpt_lnum = FUNC_2(VAR_48->lpt_lnum);
 VAR_50->lpt_offs = FUNC_2(VAR_48->lpt_offs);
 VAR_50->nhead_lnum = FUNC_2(VAR_48->nhead_lnum);
 VAR_50->nhead_offs = FUNC_2(VAR_48->nhead_offs);
 VAR_50->ltab_lnum = FUNC_2(VAR_48->ltab_lnum);
 VAR_50->ltab_offs = FUNC_2(VAR_48->ltab_offs);
 VAR_50->lsave_lnum = FUNC_2(VAR_48->lsave_lnum);
 VAR_50->lsave_offs = FUNC_2(VAR_48->lsave_offs);
 VAR_50->lscan_lnum = FUNC_2(VAR_62);
 VAR_50->empty_lebs = FUNC_2(VAR_61 - 2);
 VAR_50->idx_lebs = FUNC_2(1);
 VAR_50->leb_cnt = FUNC_2(VAR_48->leb_cnt);


 VAR_70 = VAR_71;
 VAR_70 -= FUNC_0(FUNC_14(VAR_48, 1), VAR_48->min_io_size);
 VAR_70 -= FUNC_0(VAR_27, VAR_48->min_io_size);
 VAR_50->total_free = FUNC_3(VAR_70);

 VAR_70 = FUNC_0(FUNC_14(VAR_48, 1), VAR_48->min_io_size);
 VAR_67 = FUNC_0(VAR_27, VAR_48->min_io_size) -
     VAR_27;
 VAR_70 += VAR_67;
 VAR_70 -= FUNC_0(FUNC_14(VAR_48, 1), 8);
 VAR_50->total_dirty = FUNC_3(VAR_70);


 VAR_70 = (VAR_48->main_lebs - 1) * VAR_48->dark_wm;
 VAR_50->total_dark = FUNC_3(VAR_70);

 VAR_50->total_used = FUNC_3(VAR_27);

 VAR_56 = FUNC_16(VAR_48, VAR_50, VAR_37, VAR_35, 0,
          VAR_46);
 if (VAR_56) {
  FUNC_10(VAR_50);
  return VAR_56;
 }
 VAR_56 = FUNC_16(VAR_48, VAR_50, VAR_37, VAR_35 + 1, 0,
          VAR_46);
 FUNC_10(VAR_50);
 if (VAR_56)
  return VAR_56;

 FUNC_4("default master node created at LEB %d:0", VAR_35);


 VAR_57 = FUNC_14(VAR_48, 1);
 VAR_51 = FUNC_11(FUNC_0(VAR_57, VAR_48->min_io_size), VAR_13);
 if (!VAR_51)
  return -VAR_12;

 VAR_48->key_fmt = VAR_43;
 VAR_48->key_hash = VAR_47;

 VAR_51->ch.node_type = VAR_25;
 VAR_51->child_cnt = FUNC_1(1);
 FUNC_7(VAR_48, &VAR_55, VAR_38);
 VAR_52 = FUNC_13(VAR_48, VAR_51, 0);
 FUNC_9(VAR_48, &VAR_55, &VAR_52->key);
 VAR_52->lnum = FUNC_2(VAR_62 + VAR_1);
 VAR_52->len = FUNC_2(VAR_27);
 VAR_56 = FUNC_16(VAR_48, VAR_51, VAR_57, VAR_62 + VAR_4, 0,
          VAR_46);
 FUNC_10(VAR_51);
 if (VAR_56)
  return VAR_56;

 FUNC_4("default root indexing node created LEB %d:0",
  VAR_62 + VAR_4);


 VAR_57 = FUNC_0(VAR_27, VAR_48->min_io_size);
 VAR_53 = FUNC_11(VAR_57, VAR_13);
 if (!VAR_53)
  return -VAR_12;

 FUNC_8(VAR_48, &VAR_53->key, VAR_38);
 VAR_53->ch.node_type = VAR_26;
 VAR_53->creat_sqnum = FUNC_3(++VAR_48->max_sqnum);
 VAR_53->nlink = FUNC_2(2);
 VAR_72 = FUNC_3(VAR_0.tv_sec);
 VAR_53->atime_sec = VAR_72;
 VAR_53->ctime_sec = VAR_72;
 VAR_53->mtime_sec = VAR_72;
 VAR_53->atime_nsec = 0;
 VAR_53->ctime_nsec = 0;
 VAR_53->mtime_nsec = 0;
 VAR_53->mode = FUNC_2(VAR_14 | VAR_15 | VAR_16 | VAR_17);
 VAR_53->size = FUNC_3(VAR_27);


 VAR_53->flags = FUNC_2(VAR_18);

 VAR_56 = FUNC_16(VAR_48, VAR_53, VAR_27,
          VAR_62 + VAR_1, 0,
          VAR_46);
 FUNC_10(VAR_53);
 if (VAR_56)
  return VAR_56;

 FUNC_4("root inode created at LEB %d:0",
  VAR_62 + VAR_1);






 VAR_57 = FUNC_0(VAR_21, VAR_48->min_io_size);
 VAR_54 = FUNC_11(VAR_57, VAR_13);
 if (!VAR_54)
  return -VAR_12;

 VAR_54->ch.node_type = VAR_20;
 VAR_56 = FUNC_16(VAR_48, VAR_54, VAR_21, VAR_29,
          0, VAR_46);
 FUNC_10(VAR_54);

 FUNC_15("default file-system created");
 return 0;
}
