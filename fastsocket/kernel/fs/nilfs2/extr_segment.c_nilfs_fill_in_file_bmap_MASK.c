
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_ino; } ;
struct nilfs_inode_info {TYPE_1__ vfs_inode; int i_bmap; struct buffer_head* i_bh; int i_state; } ;
struct nilfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct nilfs_inode*) ;
 struct nilfs_inode* FUNC_2 (struct inode*,int ,struct buffer_head*) ;
 int FUNC_3 (struct inode*,int ,struct buffer_head*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1,
        struct nilfs_inode_info *VAR_2)

{
 struct buffer_head *VAR_3;
 struct nilfs_inode *VAR_4;

 if (FUNC_4(VAR_0, &VAR_2->i_state)) {
  VAR_3 = VAR_2->i_bh;
  FUNC_0(!VAR_3);
  VAR_4 = FUNC_2(VAR_1, VAR_2->vfs_inode.i_ino,
        VAR_3);
  FUNC_1(VAR_2->i_bmap, VAR_4);
  FUNC_3(VAR_1, VAR_2->vfs_inode.i_ino, VAR_3);
 }
}
