
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
union ubifs_dev_desc {int huge; int new; } ;
struct ubifs_inode {size_t data_len; int flags; int xattr; void* data; void* ui_size; void* synced_i_size; void* xattr_names; void* xattr_size; void* xattr_cnt; void* creat_sqnum; int compr_type; } ;
struct ubifs_ino_node {scalar_t__ data; int xattr_names; int xattr_size; int xattr_cnt; int creat_sqnum; int compr_type; int flags; int data_len; int size; int mode; int ctime_nsec; int ctime_sec; int mtime_nsec; int mtime_sec; int atime_nsec; int atime_sec; int gid; int uid; int nlink; } ;
struct ubifs_info {int bdi; } ;
struct super_block {struct ubifs_info* s_fs_info; } ;
struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct inode {int i_state; int i_flags; int i_mode; int i_ino; int * i_op; int * i_fop; TYPE_4__* i_mapping; void* i_size; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; void* i_gid; void* i_uid; void* i_nlink; } ;
typedef void* int64_t ;
typedef int dev_t ;
struct TYPE_8__ {int * a_ops; int * backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ubifs_info*,struct inode*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_ino_node*) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct super_block*,unsigned long) ;
 int FUNC_7 (struct inode*,int,int ) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_9 (struct ubifs_ino_node*) ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (void*,scalar_t__,size_t) ;
 int FUNC_15 (void*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (char*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ubifs_inode* FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int VAR_15 ;
 int FUNC_19 (struct ubifs_info*,union ubifs_key*,struct ubifs_ino_node*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct ubifs_info*,struct inode*) ;

struct inode *FUNC_22(struct super_block *VAR_16, unsigned long VAR_17)
{
 int VAR_18;
 union ubifs_key VAR_19;
 struct ubifs_ino_node *VAR_20;
 struct ubifs_info *VAR_21 = VAR_16->s_fs_info;
 struct inode *VAR_22;
 struct ubifs_inode *VAR_23;

 FUNC_3("inode %lu", VAR_17);

 VAR_22 = FUNC_6(VAR_16, VAR_17);
 if (!VAR_22)
  return FUNC_0(-VAR_1);
 if (!(VAR_22->i_state & VAR_3))
  return VAR_22;
 VAR_23 = FUNC_17(VAR_22);

 VAR_20 = FUNC_10(VAR_8, VAR_2);
 if (!VAR_20) {
  VAR_18 = -VAR_1;
  goto out;
 }

 FUNC_8(VAR_21, &VAR_19, VAR_22->i_ino);

 VAR_18 = FUNC_19(VAR_21, &VAR_19, VAR_20);
 if (VAR_18)
  goto out_ino;

 VAR_22->i_flags |= (VAR_6 | VAR_5);
 VAR_22->i_nlink = FUNC_12(VAR_20->nlink);
 VAR_22->i_uid = FUNC_12(VAR_20->uid);
 VAR_22->i_gid = FUNC_12(VAR_20->gid);
 VAR_22->i_atime.tv_sec = (int64_t)FUNC_13(VAR_20->atime_sec);
 VAR_22->i_atime.tv_nsec = FUNC_12(VAR_20->atime_nsec);
 VAR_22->i_mtime.tv_sec = (int64_t)FUNC_13(VAR_20->mtime_sec);
 VAR_22->i_mtime.tv_nsec = FUNC_12(VAR_20->mtime_nsec);
 VAR_22->i_ctime.tv_sec = (int64_t)FUNC_13(VAR_20->ctime_sec);
 VAR_22->i_ctime.tv_nsec = FUNC_12(VAR_20->ctime_nsec);
 VAR_22->i_mode = FUNC_12(VAR_20->mode);
 VAR_22->i_size = FUNC_13(VAR_20->size);

 VAR_23->data_len = FUNC_12(VAR_20->data_len);
 VAR_23->flags = FUNC_12(VAR_20->flags);
 VAR_23->compr_type = FUNC_11(VAR_20->compr_type);
 VAR_23->creat_sqnum = FUNC_13(VAR_20->creat_sqnum);
 VAR_23->xattr_cnt = FUNC_12(VAR_20->xattr_cnt);
 VAR_23->xattr_size = FUNC_12(VAR_20->xattr_size);
 VAR_23->xattr_names = FUNC_12(VAR_20->xattr_names);
 VAR_23->synced_i_size = VAR_23->ui_size = VAR_22->i_size;

 VAR_23->xattr = (VAR_23->flags & VAR_9) ? 1 : 0;

 VAR_18 = FUNC_21(VAR_21, VAR_22);
 if (VAR_18)
  goto out_invalid;


 VAR_22->i_mapping->backing_dev_info = &VAR_21->bdi;

 switch (VAR_22->i_mode & VAR_4) {
 case 129:
  VAR_22->i_mapping->a_ops = &VAR_12;
  VAR_22->i_op = &VAR_13;
  VAR_22->i_fop = &VAR_14;
  if (VAR_23->xattr) {
   VAR_23->data = FUNC_10(VAR_23->data_len + 1, VAR_2);
   if (!VAR_23->data) {
    VAR_18 = -VAR_1;
    goto out_ino;
   }
   FUNC_14(VAR_23->data, VAR_20->data, VAR_23->data_len);
   ((char *)VAR_23->data)[VAR_23->data_len] = '\0';
  } else if (VAR_23->data_len != 0) {
   VAR_18 = 10;
   goto out_invalid;
  }
  break;
 case 132:
  VAR_22->i_op = &VAR_10;
  VAR_22->i_fop = &VAR_11;
  if (VAR_23->data_len != 0) {
   VAR_18 = 11;
   goto out_invalid;
  }
  break;
 case 130:
  VAR_22->i_op = &VAR_15;
  if (VAR_23->data_len <= 0 || VAR_23->data_len > VAR_7) {
   VAR_18 = 12;
   goto out_invalid;
  }
  VAR_23->data = FUNC_10(VAR_23->data_len + 1, VAR_2);
  if (!VAR_23->data) {
   VAR_18 = -VAR_1;
   goto out_ino;
  }
  FUNC_14(VAR_23->data, VAR_20->data, VAR_23->data_len);
  ((char *)VAR_23->data)[VAR_23->data_len] = '\0';
  break;
 case 134:
 case 133:
 {
  dev_t VAR_24;
  union ubifs_dev_desc *VAR_25;

  VAR_23->data = FUNC_10(sizeof(union ubifs_dev_desc), VAR_2);
  if (!VAR_23->data) {
   VAR_18 = -VAR_1;
   goto out_ino;
  }

  VAR_25 = (union ubifs_dev_desc *)VAR_20->data;
  if (VAR_23->data_len == sizeof(VAR_25->new))
   VAR_24 = FUNC_15(FUNC_12(VAR_25->new));
  else if (VAR_23->data_len == sizeof(VAR_25->huge))
   VAR_24 = FUNC_4(FUNC_13(VAR_25->huge));
  else {
   VAR_18 = 13;
   goto out_invalid;
  }
  FUNC_14(VAR_23->data, VAR_20->data, VAR_23->data_len);
  VAR_22->i_op = &VAR_13;
  FUNC_7(VAR_22, VAR_22->i_mode, VAR_24);
  break;
 }
 case 128:
 case 131:
  VAR_22->i_op = &VAR_13;
  FUNC_7(VAR_22, VAR_22->i_mode, 0);
  if (VAR_23->data_len != 0) {
   VAR_18 = 14;
   goto out_invalid;
  }
  break;
 default:
  VAR_18 = 15;
  goto out_invalid;
 }

 FUNC_9(VAR_20);
 FUNC_18(VAR_22);
 FUNC_20(VAR_22);
 return VAR_22;

out_invalid:
 FUNC_16("inode %lu validation failed, error %d", VAR_22->i_ino, VAR_18);
 FUNC_2(VAR_21, VAR_20);
 FUNC_1(VAR_21, VAR_22);
 VAR_18 = -VAR_0;
out_ino:
 FUNC_9(VAR_20);
out:
 FUNC_16("failed to read inode %lu, error %d", VAR_22->i_ino, VAR_18);
 FUNC_5(VAR_22);
 return FUNC_0(VAR_18);
}
