
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_13__ {int * i_symlink; int * i_data; } ;
struct ufs_inode_info {TYPE_10__ i_u1; int i_oeftflag; int i_shadow; int i_flags; } ;
struct TYPE_14__ {int * ui_db; } ;
struct TYPE_24__ {TYPE_11__ ui_symlink; TYPE_11__ ui_addr; } ;
struct TYPE_22__ {void* ui_oeftflag; void* ui_shadow; } ;
struct TYPE_23__ {TYPE_7__ ui_sun; } ;
struct TYPE_21__ {scalar_t__ tv_usec; void* tv_sec; } ;
struct TYPE_19__ {scalar_t__ tv_usec; void* tv_sec; } ;
struct TYPE_17__ {scalar_t__ tv_usec; void* tv_sec; } ;
struct ufs_inode {TYPE_9__ ui_u2; TYPE_8__ ui_u3; void* ui_gen; void* ui_flags; void* ui_blocks; TYPE_6__ ui_mtime; TYPE_4__ ui_ctime; TYPE_2__ ui_atime; int ui_size; void* ui_nlink; void* ui_mode; } ;
struct super_block {int dummy; } ;
struct TYPE_20__ {int tv_sec; } ;
struct TYPE_18__ {int tv_sec; } ;
struct TYPE_16__ {int tv_sec; } ;
struct inode {int i_nlink; int i_blocks; int i_mode; int i_generation; TYPE_5__ i_mtime; TYPE_3__ i_ctime; TYPE_1__ i_atime; int i_size; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct TYPE_15__ {int s_flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ufs_inode_info* FUNC_2 (struct inode*) ;
 TYPE_12__* FUNC_3 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_4 (struct super_block*,int ) ;
 void* FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (TYPE_11__*,int *,int) ;
 int FUNC_8 (struct ufs_inode*,int ,int) ;
 int FUNC_9 (struct super_block*,struct ufs_inode*,int ) ;
 int FUNC_10 (struct super_block*,struct ufs_inode*,int ) ;

__attribute__((used)) static void FUNC_11(struct inode *VAR_2, struct ufs_inode *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->i_sb;
  struct ufs_inode_info *VAR_5 = FUNC_2(VAR_2);

 VAR_3->ui_mode = FUNC_4(VAR_4, VAR_2->i_mode);
 VAR_3->ui_nlink = FUNC_4(VAR_4, VAR_2->i_nlink);

 FUNC_10(VAR_4, VAR_3, VAR_2->i_uid);
 FUNC_9(VAR_4, VAR_3, VAR_2->i_gid);

 VAR_3->ui_size = FUNC_6(VAR_4, VAR_2->i_size);
 VAR_3->ui_atime.tv_sec = FUNC_5(VAR_4, VAR_2->i_atime.tv_sec);
 VAR_3->ui_atime.tv_usec = 0;
 VAR_3->ui_ctime.tv_sec = FUNC_5(VAR_4, VAR_2->i_ctime.tv_sec);
 VAR_3->ui_ctime.tv_usec = 0;
 VAR_3->ui_mtime.tv_sec = FUNC_5(VAR_4, VAR_2->i_mtime.tv_sec);
 VAR_3->ui_mtime.tv_usec = 0;
 VAR_3->ui_blocks = FUNC_5(VAR_4, VAR_2->i_blocks);
 VAR_3->ui_flags = FUNC_5(VAR_4, VAR_5->i_flags);
 VAR_3->ui_gen = FUNC_5(VAR_4, VAR_2->i_generation);

 if ((FUNC_3(VAR_4)->s_flags & VAR_1) == VAR_0) {
  VAR_3->ui_u3.ui_sun.ui_shadow = FUNC_5(VAR_4, VAR_5->i_shadow);
  VAR_3->ui_u3.ui_sun.ui_oeftflag = FUNC_5(VAR_4, VAR_5->i_oeftflag);
 }

 if (FUNC_1(VAR_2->i_mode) || FUNC_0(VAR_2->i_mode)) {

  VAR_3->ui_u2.ui_addr.ui_db[0] = VAR_5->i_u1.i_data[0];
 } else if (VAR_2->i_blocks) {
  FUNC_7(&VAR_3->ui_u2.ui_addr, VAR_5->i_u1.i_data,
         sizeof(VAR_3->ui_u2.ui_addr));
 }
 else {
  FUNC_7(&VAR_3->ui_u2.ui_symlink, VAR_5->i_u1.i_symlink,
         sizeof(VAR_3->ui_u2.ui_symlink));
 }

 if (!VAR_2->i_nlink)
  FUNC_8 (VAR_3, 0, sizeof(struct ufs_inode));
}
