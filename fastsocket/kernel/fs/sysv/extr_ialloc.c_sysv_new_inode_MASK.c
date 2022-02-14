
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sysv_ino_t ;
struct sysv_sb_info {int s_sb_total_free_inodes; scalar_t__* s_sb_fic_count; } ;
struct super_block {int dummy; } ;
struct inode {int i_mode; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; void* i_ino; int i_uid; int i_gid; struct super_block* i_sb; } ;
typedef int mode_t ;
struct TYPE_2__ {scalar_t__ i_dir_start_lookup; int i_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct sysv_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct sysv_sb_info*,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct sysv_sb_info*,int ,int) ;
 void* FUNC_9 (struct sysv_sb_info*,scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,int ,int) ;
 struct inode* FUNC_15 (struct super_block*) ;
 unsigned int FUNC_16 (struct super_block*) ;
 scalar_t__* FUNC_17 (struct super_block*,unsigned int) ;
 int FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct super_block*) ;

struct inode * FUNC_20(const struct inode * VAR_4, mode_t VAR_5)
{
 struct super_block *VAR_6 = VAR_4->i_sb;
 struct sysv_sb_info *VAR_7 = FUNC_2(VAR_6);
 struct inode *VAR_8;
 sysv_ino_t VAR_9;
 unsigned VAR_10;

 VAR_8 = FUNC_15(VAR_6);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 FUNC_12(VAR_6);
 VAR_10 = FUNC_9(VAR_7, *VAR_7->s_sb_fic_count);
 if (VAR_10 == 0 || (*FUNC_17(VAR_6,VAR_10-1) == 0)) {
  VAR_10 = FUNC_16(VAR_6);
  if (VAR_10 == 0) {
   FUNC_11(VAR_8);
   FUNC_19(VAR_6);
   return FUNC_0(-VAR_2);
  }
 }

 VAR_9 = *FUNC_17(VAR_6,--VAR_10);
 *VAR_7->s_sb_fic_count = FUNC_4(VAR_7, VAR_10);
 FUNC_8(VAR_7, VAR_7->s_sb_total_free_inodes, -1);
 FUNC_7(VAR_6);

 if (VAR_4->i_mode & VAR_3) {
  VAR_8->i_gid = VAR_4->i_gid;
  if (FUNC_3(VAR_5))
   VAR_5 |= VAR_3;
 } else
  VAR_8->i_gid = FUNC_5();

 VAR_8->i_uid = FUNC_6();
 VAR_8->i_ino = FUNC_9(VAR_7, VAR_9);
 VAR_8->i_mtime = VAR_8->i_atime = VAR_8->i_ctime = VAR_0;
 VAR_8->i_blocks = 0;
 FUNC_14(FUNC_1(VAR_8)->i_data, 0, sizeof(FUNC_1(VAR_8)->i_data));
 FUNC_1(VAR_8)->i_dir_start_lookup = 0;
 FUNC_10(VAR_8);
 FUNC_13(VAR_8);

 VAR_8->i_mode = VAR_5;
 FUNC_18(VAR_8, 0);
 FUNC_13(VAR_8);

 FUNC_19(VAR_6);
 return VAR_8;
}
