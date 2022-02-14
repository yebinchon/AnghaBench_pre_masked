
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u8 ;
struct sysv_sb_info {unsigned int s_ninodes; } ;
struct sysv_inode_info {int * i_data; scalar_t__ i_dir_start_lookup; } ;
struct sysv_inode {int * i_data; int i_ctime; int i_mtime; int i_atime; int i_size; int i_nlink; int i_gid; int i_uid; int i_mode; } ;
struct super_block {int s_id; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {int i_state; void* i_mode; scalar_t__ i_blocks; TYPE_4__ i_mtime; TYPE_3__ i_atime; TYPE_2__ i_ctime; void* i_size; void* i_nlink; scalar_t__ i_gid; scalar_t__ i_uid; TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ gid_t ;
struct TYPE_5__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 struct sysv_inode_info* FUNC_1 (struct inode*) ;
 struct sysv_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (struct sysv_sb_info*,int ) ;
 void* FUNC_7 (struct sysv_sb_info*,int ) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct super_block*,unsigned int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (char*,int ,...) ;
 int FUNC_12 (struct sysv_sb_info*,int *,int *) ;
 struct sysv_inode* FUNC_13 (struct super_block*,unsigned int,struct buffer_head**) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (struct inode*) ;

struct inode *FUNC_16(struct super_block *VAR_3, unsigned int VAR_4)
{
 struct sysv_sb_info * VAR_5 = FUNC_2(VAR_3);
 struct buffer_head * VAR_6;
 struct sysv_inode * VAR_7;
 struct sysv_inode_info * VAR_8;
 struct inode *VAR_9;
 unsigned int VAR_10;

 if (!VAR_4 || VAR_4 > VAR_5->s_ninodes) {
  FUNC_11("Bad inode number on dev %s: %d is out of range\n",
         VAR_3->s_id, VAR_4);
  return FUNC_0(-VAR_0);
 }

 VAR_9 = FUNC_9(VAR_3, VAR_4);
 if (!VAR_9)
  return FUNC_0(-VAR_1);
 if (!(VAR_9->i_state & VAR_2))
  return VAR_9;

 VAR_7 = FUNC_13(VAR_3, VAR_4, &VAR_6);
 if (!VAR_7) {
  FUNC_11("Major problem: unable to read inode from dev %s\n",
         VAR_9->i_sb->s_id);
  goto bad_inode;
 }

 VAR_9->i_mode = FUNC_6(VAR_5, VAR_7->i_mode);
 VAR_9->i_uid = (uid_t)FUNC_6(VAR_5, VAR_7->i_uid);
 VAR_9->i_gid = (gid_t)FUNC_6(VAR_5, VAR_7->i_gid);
 VAR_9->i_nlink = FUNC_6(VAR_5, VAR_7->i_nlink);
 VAR_9->i_size = FUNC_7(VAR_5, VAR_7->i_size);
 VAR_9->i_atime.tv_sec = FUNC_7(VAR_5, VAR_7->i_atime);
 VAR_9->i_mtime.tv_sec = FUNC_7(VAR_5, VAR_7->i_mtime);
 VAR_9->i_ctime.tv_sec = FUNC_7(VAR_5, VAR_7->i_ctime);
 VAR_9->i_ctime.tv_nsec = 0;
 VAR_9->i_atime.tv_nsec = 0;
 VAR_9->i_mtime.tv_nsec = 0;
 VAR_9->i_blocks = 0;

 VAR_8 = FUNC_1(VAR_9);
 for (VAR_10 = 0; VAR_10 < 10+1+1+1; VAR_10++)
  FUNC_12(VAR_5, &VAR_7->i_data[3*VAR_10],
    (u8 *)&VAR_8->i_data[VAR_10]);
 FUNC_5(VAR_6);
 VAR_8->i_dir_start_lookup = 0;
 if (FUNC_4(VAR_9->i_mode) || FUNC_3(VAR_9->i_mode))
  FUNC_14(VAR_9,
          FUNC_10(FUNC_7(VAR_5, VAR_8->i_data[0])));
 else
  FUNC_14(VAR_9, 0);
 FUNC_15(VAR_9);
 return VAR_9;

bad_inode:
 FUNC_8(VAR_9);
 return FUNC_0(-VAR_0);
}
