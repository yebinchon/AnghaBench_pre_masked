
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_sb_private_info {scalar_t__ s_apb; } ;
struct ufs_inode_info {int i_lastfrag; } ;
struct super_block {int dummy; } ;
struct inode {int i_state; int i_ctime; int i_mtime; int i_mapping; int i_size; int i_mode; int i_ino; struct super_block* i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ VAR_5 ;
 struct ufs_inode_info* FUNC_7 (struct inode*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_8 (struct super_block*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct ufs_sb_private_info*,struct ufs_inode_info*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,scalar_t__,int ) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*,scalar_t__,int ) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 () ;
 int FUNC_23 () ;

int FUNC_24(struct inode *VAR_8, loff_t VAR_9)
{
 struct ufs_inode_info *VAR_10 = FUNC_7(VAR_8);
 struct super_block *VAR_11 = VAR_8->i_sb;
 struct ufs_sb_private_info *VAR_12 = FUNC_8(VAR_11)->s_uspi;
 int VAR_13, VAR_14 = 0;

 FUNC_6("ENTER: ino %lu, i_size: %llu, old_i_size: %llu\n",
      VAR_8->i_ino, (unsigned long long)FUNC_11(VAR_8),
      (unsigned long long)VAR_9);

 if (!(FUNC_5(VAR_8->i_mode) || FUNC_3(VAR_8->i_mode) ||
       FUNC_4(VAR_8->i_mode)))
  return -VAR_2;
 if (FUNC_0(VAR_8) || FUNC_1(VAR_8))
  return -VAR_3;

 VAR_14 = FUNC_15(VAR_8);

 if (VAR_14) {
  FUNC_12(VAR_8, VAR_9);
  goto out;
 }

 FUNC_10(VAR_8->i_mapping, VAR_8->i_size, VAR_7);

 FUNC_13();
 while (1) {
  VAR_13 = FUNC_19(VAR_8);
  VAR_13 |= FUNC_20(VAR_8, VAR_6,
         FUNC_16(VAR_12, VAR_10,
            VAR_6));
  VAR_13 |= FUNC_18(VAR_8, VAR_6 + VAR_12->s_apb,
          FUNC_16(VAR_12, VAR_10,
             VAR_5));
  VAR_13 |= FUNC_21 (VAR_8);
  if (!VAR_13)
   break;
  if (FUNC_2(VAR_8) && (VAR_8->i_state & VAR_4))
   FUNC_17 (VAR_8);
  FUNC_9(VAR_8->i_mapping);
  FUNC_23();
 }

 VAR_8->i_mtime = VAR_8->i_ctime = VAR_0;
 VAR_10->i_lastfrag = VAR_1;
 FUNC_22();
 FUNC_14(VAR_8);
out:
 FUNC_6("EXIT: err %d\n", VAR_14);
 return VAR_14;
}
