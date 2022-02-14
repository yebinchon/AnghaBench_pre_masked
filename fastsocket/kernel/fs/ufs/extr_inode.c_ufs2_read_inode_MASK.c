
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* i_symlink; scalar_t__* u2_i_data; } ;
struct ufs_inode_info {TYPE_5__ i_u1; void* i_flags; } ;
struct TYPE_9__ {int * ui_symlink; int ui_addr; } ;
struct ufs2_inode {TYPE_4__ ui_u2; int ui_flags; int ui_gen; int ui_blocks; int ui_mtimensec; int ui_ctimensec; int ui_atimensec; int ui_mtime; int ui_ctime; int ui_atime; int ui_size; int ui_gid; int ui_uid; int ui_nlink; int ui_mode; } ;
struct super_block {int dummy; } ;
struct TYPE_8__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct inode {void* i_blocks; void* i_generation; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; void* i_size; void* i_gid; void* i_uid; int i_ino; void* i_nlink; void* i_mode; struct super_block* i_sb; } ;
typedef void* mode_t ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (char*,int ) ;
 struct ufs_inode_info* FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct super_block*,int ) ;
 void* FUNC_5 (struct super_block*,int ) ;
 void* FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (scalar_t__*,int *,int) ;
 int FUNC_8 (struct super_block*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0, struct ufs2_inode *VAR_1)
{
 struct ufs_inode_info *VAR_2 = FUNC_3(VAR_0);
 struct super_block *VAR_3 = VAR_0->i_sb;
 mode_t VAR_4;

 FUNC_2("Reading ufs2 inode, ino %lu\n", VAR_0->i_ino);



 VAR_0->i_mode = VAR_4 = FUNC_4(VAR_3, VAR_1->ui_mode);
 VAR_0->i_nlink = FUNC_4(VAR_3, VAR_1->ui_nlink);
 if (VAR_0->i_nlink == 0) {
  FUNC_8 (VAR_3, "ufs_read_inode", "inode %lu has zero nlink\n", VAR_0->i_ino);
  return -1;
 }




 VAR_0->i_uid = FUNC_5(VAR_3, VAR_1->ui_uid);
 VAR_0->i_gid = FUNC_5(VAR_3, VAR_1->ui_gid);

 VAR_0->i_size = FUNC_6(VAR_3, VAR_1->ui_size);
 VAR_0->i_atime.tv_sec = FUNC_6(VAR_3, VAR_1->ui_atime);
 VAR_0->i_ctime.tv_sec = FUNC_6(VAR_3, VAR_1->ui_ctime);
 VAR_0->i_mtime.tv_sec = FUNC_6(VAR_3, VAR_1->ui_mtime);
 VAR_0->i_atime.tv_nsec = FUNC_5(VAR_3, VAR_1->ui_atimensec);
 VAR_0->i_ctime.tv_nsec = FUNC_5(VAR_3, VAR_1->ui_ctimensec);
 VAR_0->i_mtime.tv_nsec = FUNC_5(VAR_3, VAR_1->ui_mtimensec);
 VAR_0->i_blocks = FUNC_6(VAR_3, VAR_1->ui_blocks);
 VAR_0->i_generation = FUNC_5(VAR_3, VAR_1->ui_gen);
 VAR_2->i_flags = FUNC_5(VAR_3, VAR_1->ui_flags);





 if (FUNC_1(VAR_4) || FUNC_0(VAR_4) || VAR_0->i_blocks) {
  FUNC_7(VAR_2->i_u1.u2_i_data, &VAR_1->ui_u2.ui_addr,
         sizeof(VAR_1->ui_u2.ui_addr));
 } else {
  FUNC_7(VAR_2->i_u1.i_symlink, VAR_1->ui_u2.ui_symlink,
         sizeof(VAR_1->ui_u2.ui_symlink) - 1);
  VAR_2->i_u1.i_symlink[sizeof(VAR_1->ui_u2.ui_symlink) - 1] = 0;
 }
 return 0;
}
