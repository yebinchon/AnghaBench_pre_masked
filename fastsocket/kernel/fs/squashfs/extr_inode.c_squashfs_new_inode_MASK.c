
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct squashfs_base_inode {int mode; int mtime; int inode_number; int guid; int uid; } ;
struct TYPE_6__ {void* tv_sec; } ;
struct TYPE_5__ {void* tv_sec; } ;
struct TYPE_4__ {void* tv_sec; } ;
struct inode {scalar_t__ i_size; int i_mode; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; void* i_ino; int i_gid; int i_uid; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, struct inode *VAR_1,
    struct squashfs_base_inode *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, FUNC_0(VAR_2->uid), &VAR_1->i_uid);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, FUNC_0(VAR_2->guid), &VAR_1->i_gid);
 if (VAR_3)
  return VAR_3;

 VAR_1->i_ino = FUNC_1(VAR_2->inode_number);
 VAR_1->i_mtime.tv_sec = FUNC_1(VAR_2->mtime);
 VAR_1->i_atime.tv_sec = VAR_1->i_mtime.tv_sec;
 VAR_1->i_ctime.tv_sec = VAR_1->i_mtime.tv_sec;
 VAR_1->i_mode = FUNC_0(VAR_2->mode);
 VAR_1->i_size = 0;

 return VAR_3;
}
