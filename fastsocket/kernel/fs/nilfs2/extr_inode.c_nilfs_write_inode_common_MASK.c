
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_inode_info {int i_bmap; int i_flags; } ;
struct nilfs_inode {void* i_device_code; void* i_generation; void* i_flags; void* i_blocks; void* i_mtime_nsec; void* i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; void* i_links_count; void* i_gid; void* i_uid; void* i_mode; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_rdev; int i_mode; int i_generation; int i_blocks; TYPE_2__ i_mtime; TYPE_1__ i_ctime; int i_size; int i_nlink; int i_gid; int i_uid; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct nilfs_inode*) ;

void FUNC_8(struct inode *VAR_0,
         struct nilfs_inode *VAR_1, int VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_0);

 VAR_1->i_mode = FUNC_3(VAR_0->i_mode);
 VAR_1->i_uid = FUNC_4(VAR_0->i_uid);
 VAR_1->i_gid = FUNC_4(VAR_0->i_gid);
 VAR_1->i_links_count = FUNC_3(VAR_0->i_nlink);
 VAR_1->i_size = FUNC_5(VAR_0->i_size);
 VAR_1->i_ctime = FUNC_5(VAR_0->i_ctime.tv_sec);
 VAR_1->i_mtime = FUNC_5(VAR_0->i_mtime.tv_sec);
 VAR_1->i_ctime_nsec = FUNC_4(VAR_0->i_ctime.tv_nsec);
 VAR_1->i_mtime_nsec = FUNC_4(VAR_0->i_mtime.tv_nsec);
 VAR_1->i_blocks = FUNC_5(VAR_0->i_blocks);

 VAR_1->i_flags = FUNC_4(VAR_3->i_flags);
 VAR_1->i_generation = FUNC_4(VAR_0->i_generation);

 if (VAR_2)
  FUNC_7(VAR_3->i_bmap, VAR_1);
 else if (FUNC_2(VAR_0->i_mode) || FUNC_1(VAR_0->i_mode))
  VAR_1->i_device_code =
   FUNC_5(FUNC_6(VAR_0->i_rdev));


}
