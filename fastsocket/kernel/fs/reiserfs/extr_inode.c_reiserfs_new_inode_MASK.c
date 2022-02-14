
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct stat_data {int dummy; } ;
struct reiserfs_transaction_handle {int displace_new_blocks; scalar_t__ t_trans_id; int t_blocks_allocated; int t_super; } ;
struct reiserfs_security_handle {scalar_t__ name; } ;
struct reiserfs_iget_args {void* objectid; void* dirid; } ;
struct TYPE_9__ {scalar_t__ k_objectid; scalar_t__ k_dir_id; } ;
struct item_head {TYPE_3__ ih_key; } ;
struct inode {int i_nlink; int i_mode; int i_flags; int i_uid; int i_gid; struct super_block* i_sb; int i_size; scalar_t__ i_bytes; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; void* i_generation; void* i_ino; } ;
struct dentry {int dummy; } ;
struct cpu_key {int dummy; } ;
typedef int loff_t ;
struct TYPE_11__ {int i_first_direct_byte; int i_attrs; scalar_t__ new_packing_locality; int i_mmap; int * i_jl; scalar_t__ i_trans_id; scalar_t__ i_prealloc_count; scalar_t__ i_prealloc_block; scalar_t__ i_flags; int i_prealloc_list; } ;
struct TYPE_10__ {TYPE_1__* s_rs; } ;
struct TYPE_8__ {scalar_t__ k_objectid; } ;
struct TYPE_7__ {scalar_t__ s_inode_generation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_5__* FUNC_5 (struct inode*) ;
 int VAR_14 ;
 TYPE_4__* FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_10 (struct cpu_key*,int ,void*,void*,int ,int ,int) ;
 scalar_t__ FUNC_11 (int ) ;
 void* VAR_26 ;
 int FUNC_12 (struct stat_data*,struct inode*,int ) ;
 int FUNC_13 (struct stat_data*,struct inode*,int ) ;
 scalar_t__ FUNC_14 (struct inode*,void*,int ,struct reiserfs_iget_args*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct reiserfs_transaction_handle*,int ,int ) ;
 void* FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct item_head*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_20 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (struct super_block*) ;
 int VAR_27 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (struct inode*) ;
 int VAR_28 ;
 int FUNC_26 (struct reiserfs_transaction_handle*) ;
 int FUNC_27 (struct reiserfs_transaction_handle*,struct inode*,struct dentry*,struct inode*) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (struct reiserfs_transaction_handle*,int *,struct cpu_key*,struct item_head*,struct inode*,char*) ;
 int FUNC_30 (struct reiserfs_transaction_handle*,struct inode*,struct item_head*,int *,struct inode*) ;
 int FUNC_31 (struct reiserfs_transaction_handle*,struct inode*,struct item_head*,int *,char const*,int ) ;
 scalar_t__ FUNC_32 (struct super_block*) ;
 int FUNC_33 (struct reiserfs_transaction_handle*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_34 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_35 (struct super_block*,char*,char*) ;
 int FUNC_36 (int,struct inode*) ;
 int FUNC_37 (struct super_block*,struct cpu_key*,int *) ;
 int FUNC_38 (struct inode*,int ) ;
 int FUNC_39 (struct inode*,int ) ;
 int FUNC_40 (struct inode*) ;
 scalar_t__ FUNC_41 (struct inode*) ;
 int FUNC_42 (struct inode*) ;
 int FUNC_43 (struct inode*) ;

int FUNC_44(struct reiserfs_transaction_handle *VAR_29,
         struct inode *VAR_30, int VAR_31, const char *VAR_32,


         loff_t VAR_33, struct dentry *VAR_34,
         struct inode *VAR_35,
         struct reiserfs_security_handle *VAR_36)
{
 struct super_block *VAR_37;
 struct reiserfs_iget_args VAR_38;
 FUNC_1(VAR_27);
 struct cpu_key VAR_39;
 struct item_head VAR_40;
 struct stat_data VAR_41;
 int VAR_42;
 int VAR_43;

 FUNC_0(!VAR_29->t_trans_id);

 if (FUNC_41(VAR_35)) {
  VAR_43 = -VAR_1;
  goto out_end_trans;
 }
 if (!VAR_30->i_nlink) {
  VAR_43 = -VAR_6;
  goto out_bad_inode;
 }

 VAR_37 = VAR_30->i_sb;


 VAR_40.ih_key.k_dir_id = FUNC_25(VAR_30);
 VAR_40.ih_key.k_objectid = FUNC_11(FUNC_26(VAR_29));
 if (!VAR_40.ih_key.k_objectid) {
  VAR_43 = -VAR_5;
  goto out_bad_inode;
 }
 VAR_38.objectid = VAR_35->i_ino = FUNC_17(VAR_40.ih_key.k_objectid);
 if (FUNC_22(VAR_37))
  FUNC_19(&VAR_40, ((void*)0), VAR_9, VAR_15,
      VAR_24, VAR_17, VAR_12);
 else
  FUNC_19(&VAR_40, ((void*)0), VAR_10, VAR_15,
      VAR_24, VAR_16, VAR_12);
 FUNC_20(FUNC_3(VAR_35), &(VAR_40.ih_key), VAR_11);
 VAR_38.dirid = FUNC_17(VAR_40.ih_key.k_dir_id);
 if (FUNC_14(VAR_35, VAR_38.objectid,
        VAR_28, &VAR_38) < 0) {
  VAR_43 = -VAR_3;
  goto out_bad_inode;
 }
 if (FUNC_22(VAR_37))





  VAR_35->i_generation = FUNC_17(FUNC_3(VAR_30)->k_objectid);
 else




  VAR_35->i_generation = ++VAR_26;



 VAR_35->i_nlink = (FUNC_8(VAR_31) ? 2 : 1);




 if (FUNC_9(VAR_35->i_mode))
  VAR_35->i_flags &= ~(VAR_21 | VAR_20);

 VAR_35->i_mtime = VAR_35->i_atime = VAR_35->i_ctime = VAR_0;
 VAR_35->i_size = VAR_33;
 VAR_35->i_blocks = 0;
 VAR_35->i_bytes = 0;
 FUNC_5(VAR_35)->i_first_direct_byte = FUNC_9(VAR_31) ? 1 :
     VAR_25 ;

 FUNC_2(&(FUNC_5(VAR_35)->i_prealloc_list));
 FUNC_5(VAR_35)->i_flags = 0;
 FUNC_5(VAR_35)->i_prealloc_block = 0;
 FUNC_5(VAR_35)->i_prealloc_count = 0;
 FUNC_5(VAR_35)->i_trans_id = 0;
 FUNC_5(VAR_35)->i_jl = ((void*)0);
 FUNC_5(VAR_35)->i_attrs =
     FUNC_5(VAR_30)->i_attrs & VAR_14;
 FUNC_36(FUNC_5(VAR_35)->i_attrs, VAR_35);
 FUNC_21(&(FUNC_5(VAR_35)->i_mmap));
 FUNC_28(VAR_35);


 FUNC_10(&VAR_39, VAR_10, FUNC_17(VAR_40.ih_key.k_dir_id),
        FUNC_17(VAR_40.ih_key.k_objectid), VAR_15,
        VAR_24, 3 );


 VAR_42 = FUNC_37(VAR_37, &VAR_39, &VAR_27);
 if (VAR_42 == VAR_7) {
  VAR_43 = -VAR_4;
  goto out_bad_inode;
 }
 if (VAR_42 == VAR_8) {
  FUNC_23(&VAR_27);
  VAR_43 = -VAR_2;
  goto out_bad_inode;
 }
 if (FUNC_22(VAR_37)) {
  if (VAR_35->i_uid & ~0xffff || VAR_35->i_gid & ~0xffff) {
   FUNC_23(&VAR_27);

   VAR_43 = -VAR_3;
   goto out_bad_inode;
  }
  FUNC_13(&VAR_41, VAR_35, VAR_35->i_size);
 } else {
  FUNC_12(&VAR_41, VAR_35, VAR_35->i_size);
 }



 if (FUNC_22(VAR_37) || FUNC_8(VAR_31) || FUNC_9(VAR_31))
  FUNC_38(VAR_35, VAR_9);
 else
  FUNC_38(VAR_35, VAR_10);
 if (FUNC_22(VAR_37))
  FUNC_39(VAR_35, VAR_18);
 else
  FUNC_39(VAR_35, VAR_19);






 VAR_42 =
     FUNC_29(VAR_29, &VAR_27, &VAR_39, &VAR_40, VAR_35,
     (char *)(&VAR_41));
 if (VAR_42) {
  VAR_43 = VAR_42;
  FUNC_24(&VAR_27);
  goto out_bad_inode;
 }




 if (FUNC_8(VAR_31)) {

  VAR_42 =
      FUNC_30(VAR_29, VAR_35, &VAR_40, &VAR_27, VAR_30);
 }

 if (FUNC_9(VAR_31)) {

  if (!FUNC_22(VAR_37))
   VAR_33 = FUNC_7(VAR_33);
  VAR_42 =
      FUNC_31(VAR_29, VAR_35, &VAR_40, &VAR_27, VAR_32,
      VAR_33);
 }
 if (VAR_42) {
  VAR_43 = VAR_42;
  FUNC_24(&VAR_27);
  FUNC_16(VAR_29, VAR_29->t_super, VAR_29->t_blocks_allocated);
  goto out_inserted_sd;
 }

 if (FUNC_32(VAR_35->i_sb)) {
  VAR_42 = FUNC_27(VAR_29, VAR_30, VAR_34, VAR_35);
  if (VAR_42) {
   VAR_43 = VAR_42;
   FUNC_24(&VAR_27);
   FUNC_16(VAR_29, VAR_29->t_super, VAR_29->t_blocks_allocated);
   goto out_inserted_sd;
  }
 } else if (VAR_35->i_sb->s_flags & VAR_13) {
  FUNC_35(VAR_35->i_sb, "jdm-13090",
     "ACLs aren't enabled in the fs, "
     "but vfs thinks they are!");
 } else if (FUNC_4(VAR_30))
  VAR_35->i_flags |= VAR_23;

 if (VAR_36->name) {
  VAR_42 = FUNC_33(VAR_29, VAR_35, VAR_36);
  if (VAR_42) {
   VAR_43 = VAR_42;
   FUNC_24(&VAR_27);
   VAR_42 = FUNC_16(VAR_29, VAR_29->t_super,
          VAR_29->t_blocks_allocated);
   if (VAR_42)
    VAR_43 = VAR_42;
   goto out_inserted_sd;
  }
 }

 FUNC_34(VAR_29, VAR_35);
 FUNC_24(&VAR_27);

 return 0;





      out_bad_inode:

 FUNC_3(VAR_35)->k_objectid = 0;


 FUNC_43(VAR_35);

      out_end_trans:
 FUNC_16(VAR_29, VAR_29->t_super, VAR_29->t_blocks_allocated);

 FUNC_42(VAR_35);
 VAR_35->i_flags |= VAR_22;
 FUNC_18(VAR_35);

      out_inserted_sd:
 VAR_35->i_nlink = 0;
 VAR_29->t_trans_id = 0;
 FUNC_40(VAR_35);
 FUNC_15(VAR_35);
 return VAR_43;
}
