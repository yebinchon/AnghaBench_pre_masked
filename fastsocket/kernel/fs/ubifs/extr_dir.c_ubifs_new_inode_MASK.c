
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {scalar_t__ creat_sqnum; scalar_t__ synced_i_size; int compr_type; int flags; int ui_size; } ;
struct ubifs_info {scalar_t__ highest_inum; int cnt_lock; scalar_t__ max_sqnum; int default_compr; int bdi; int vfs_sb; } ;
struct inode {int i_mode; scalar_t__ i_ino; int * i_op; int i_size; int * i_fop; TYPE_1__* i_mapping; int i_ctime; int i_atime; int i_mtime; int i_gid; int i_uid; int i_flags; } ;
struct TYPE_2__ {int * a_ops; int * backing_dev_info; scalar_t__ nrpages; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 int VAR_4 ;


 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode const*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ubifs_inode* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int VAR_14 ;
 int FUNC_16 (char*,unsigned long,scalar_t__) ;

struct inode *FUNC_17(struct ubifs_info *VAR_15, const struct inode *VAR_16,
         int VAR_17)
{
 struct inode *VAR_18;
 struct ubifs_inode *VAR_19;

 VAR_18 = FUNC_9(VAR_15->vfs_sb);
 VAR_19 = FUNC_14(VAR_18);
 if (!VAR_18)
  return FUNC_1(-VAR_1);







 VAR_18->i_flags |= (VAR_6);

 VAR_18->i_uid = FUNC_5();
 if (VAR_16->i_mode & VAR_5) {
  VAR_18->i_gid = VAR_16->i_gid;
  if (FUNC_2(VAR_17))
   VAR_17 |= VAR_5;
 } else
  VAR_18->i_gid = FUNC_4();
 VAR_18->i_mode = VAR_17;
 VAR_18->i_mtime = VAR_18->i_atime = VAR_18->i_ctime =
    FUNC_12(VAR_18);
 VAR_18->i_mapping->nrpages = 0;

 VAR_18->i_mapping->backing_dev_info = &VAR_15->bdi;

 switch (VAR_17 & VAR_4) {
 case 129:
  VAR_18->i_mapping->a_ops = &VAR_11;
  VAR_18->i_op = &VAR_12;
  VAR_18->i_fop = &VAR_13;
  break;
 case 132:
  VAR_18->i_op = &VAR_9;
  VAR_18->i_fop = &VAR_10;
  VAR_18->i_size = VAR_19->ui_size = VAR_8;
  break;
 case 130:
  VAR_18->i_op = &VAR_14;
  break;
 case 128:
 case 131:
 case 134:
 case 133:
  VAR_18->i_op = &VAR_12;
  break;
 default:
  FUNC_0();
 }

 VAR_19->flags = FUNC_6(VAR_16, VAR_17);
 FUNC_15(VAR_18);
 if (FUNC_3(VAR_17))
  VAR_19->compr_type = VAR_15->default_compr;
 else
  VAR_19->compr_type = VAR_7;
 VAR_19->synced_i_size = 0;

 FUNC_10(&VAR_15->cnt_lock);

 if (VAR_15->highest_inum >= VAR_2) {
  if (VAR_15->highest_inum >= VAR_3) {
   FUNC_11(&VAR_15->cnt_lock);
   FUNC_13("out of inode numbers");
   FUNC_8(VAR_18);
   FUNC_7(VAR_18);
   return FUNC_1(-VAR_0);
  }
  FUNC_16("running out of inode numbers (current %lu, max %d)",
      (unsigned long)VAR_15->highest_inum, VAR_3);
 }

 VAR_18->i_ino = ++VAR_15->highest_inum;







 VAR_19->creat_sqnum = ++VAR_15->max_sqnum;
 FUNC_11(&VAR_15->cnt_lock);
 return VAR_18;
}
