
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct nilfs_inode_info {int i_state; int i_bmap; scalar_t__ i_cno; scalar_t__ i_dir_start_lookup; void* i_dir_acl; void* i_file_acl; void* i_flags; } ;
struct nilfs_inode {int i_generation; int i_dir_acl; int i_file_acl; int i_flags; int i_blocks; int i_mtime_nsec; int i_ctime_nsec; int i_mtime; int i_ctime; int i_size; int i_links_count; int i_gid; int i_uid; int i_mode; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_4__ {void* tv_nsec; void* tv_sec; } ;
struct inode {scalar_t__ i_mode; scalar_t__ i_nlink; void* i_generation; void* i_blocks; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; void* i_size; scalar_t__ i_gid; scalar_t__ i_uid; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct nilfs_inode*) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct inode *VAR_2,
       struct nilfs_inode *VAR_3)
{
 struct nilfs_inode_info *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_2->i_mode = FUNC_4(VAR_3->i_mode);
 VAR_2->i_uid = (uid_t)FUNC_5(VAR_3->i_uid);
 VAR_2->i_gid = (gid_t)FUNC_5(VAR_3->i_gid);
 VAR_2->i_nlink = FUNC_4(VAR_3->i_links_count);
 VAR_2->i_size = FUNC_6(VAR_3->i_size);
 VAR_2->i_atime.tv_sec = FUNC_6(VAR_3->i_mtime);
 VAR_2->i_ctime.tv_sec = FUNC_6(VAR_3->i_ctime);
 VAR_2->i_mtime.tv_sec = FUNC_6(VAR_3->i_mtime);
 VAR_2->i_atime.tv_nsec = FUNC_5(VAR_3->i_mtime_nsec);
 VAR_2->i_ctime.tv_nsec = FUNC_5(VAR_3->i_ctime_nsec);
 VAR_2->i_mtime.tv_nsec = FUNC_5(VAR_3->i_mtime_nsec);
 if (VAR_2->i_nlink == 0 && VAR_2->i_mode == 0)
  return -VAR_0;

 VAR_2->i_blocks = FUNC_6(VAR_3->i_blocks);
 VAR_4->i_flags = FUNC_5(VAR_3->i_flags);





 VAR_4->i_dir_start_lookup = 0;
 VAR_4->i_cno = 0;
 VAR_2->i_generation = FUNC_5(VAR_3->i_generation);

 if (FUNC_3(VAR_2->i_mode) || FUNC_1(VAR_2->i_mode) ||
     FUNC_2(VAR_2->i_mode)) {
  VAR_5 = FUNC_7(VAR_4->i_bmap, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  FUNC_8(VAR_1, &VAR_4->i_state);

 }
 return 0;
}
