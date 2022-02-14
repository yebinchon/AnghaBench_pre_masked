
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__* i_symlink; scalar_t__* i_data; } ;
struct ufs_inode_info {TYPE_10__ i_u1; void* i_oeftflag; void* i_shadow; void* i_flags; } ;
struct TYPE_20__ {int * ui_symlink; int ui_addr; } ;
struct TYPE_18__ {int ui_oeftflag; int ui_shadow; } ;
struct TYPE_19__ {TYPE_7__ ui_sun; } ;
struct TYPE_14__ {int tv_sec; } ;
struct TYPE_13__ {int tv_sec; } ;
struct TYPE_12__ {int tv_sec; } ;
struct ufs_inode {TYPE_9__ ui_u2; TYPE_8__ ui_u3; int ui_flags; int ui_gen; int ui_blocks; TYPE_3__ ui_mtime; TYPE_2__ ui_ctime; TYPE_1__ ui_atime; int ui_size; int ui_nlink; int ui_mode; } ;
struct super_block {int dummy; } ;
struct TYPE_17__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_16__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_15__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {void* i_blocks; void* i_generation; TYPE_6__ i_ctime; TYPE_5__ i_atime; TYPE_4__ i_mtime; int i_size; int i_gid; int i_uid; int i_ino; void* i_nlink; void* i_mode; struct super_block* i_sb; } ;
typedef void* mode_t ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 struct ufs_inode_info* FUNC_2 (struct inode*) ;
 void* FUNC_3 (struct super_block*,int ) ;
 void* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (scalar_t__*,int *,int) ;
 int FUNC_7 (struct super_block*,char*,char*,int ) ;
 int FUNC_8 (struct super_block*,struct ufs_inode*) ;
 int FUNC_9 (struct super_block*,struct ufs_inode*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_0, struct ufs_inode *VAR_1)
{
 struct ufs_inode_info *VAR_2 = FUNC_2(VAR_0);
 struct super_block *VAR_3 = VAR_0->i_sb;
 mode_t VAR_4;




 VAR_0->i_mode = VAR_4 = FUNC_3(VAR_3, VAR_1->ui_mode);
 VAR_0->i_nlink = FUNC_3(VAR_3, VAR_1->ui_nlink);
 if (VAR_0->i_nlink == 0) {
  FUNC_7 (VAR_3, "ufs_read_inode", "inode %lu has zero nlink\n", VAR_0->i_ino);
  return -1;
 }




 VAR_0->i_uid = FUNC_9(VAR_3, VAR_1);
 VAR_0->i_gid = FUNC_8(VAR_3, VAR_1);

 VAR_0->i_size = FUNC_5(VAR_3, VAR_1->ui_size);
 VAR_0->i_atime.tv_sec = FUNC_4(VAR_3, VAR_1->ui_atime.tv_sec);
 VAR_0->i_ctime.tv_sec = FUNC_4(VAR_3, VAR_1->ui_ctime.tv_sec);
 VAR_0->i_mtime.tv_sec = FUNC_4(VAR_3, VAR_1->ui_mtime.tv_sec);
 VAR_0->i_mtime.tv_nsec = 0;
 VAR_0->i_atime.tv_nsec = 0;
 VAR_0->i_ctime.tv_nsec = 0;
 VAR_0->i_blocks = FUNC_4(VAR_3, VAR_1->ui_blocks);
 VAR_0->i_generation = FUNC_4(VAR_3, VAR_1->ui_gen);
 VAR_2->i_flags = FUNC_4(VAR_3, VAR_1->ui_flags);
 VAR_2->i_shadow = FUNC_4(VAR_3, VAR_1->ui_u3.ui_sun.ui_shadow);
 VAR_2->i_oeftflag = FUNC_4(VAR_3, VAR_1->ui_u3.ui_sun.ui_oeftflag);


 if (FUNC_1(VAR_4) || FUNC_0(VAR_4) || VAR_0->i_blocks) {
  FUNC_6(VAR_2->i_u1.i_data, &VAR_1->ui_u2.ui_addr,
         sizeof(VAR_1->ui_u2.ui_addr));
 } else {
  FUNC_6(VAR_2->i_u1.i_symlink, VAR_1->ui_u2.ui_symlink,
         sizeof(VAR_1->ui_u2.ui_symlink) - 1);
  VAR_2->i_u1.i_symlink[sizeof(VAR_1->ui_u2.ui_symlink) - 1] = 0;
 }
 return 0;
}
