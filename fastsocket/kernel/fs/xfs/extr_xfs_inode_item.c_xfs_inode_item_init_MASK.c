
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_mount {int dummy; } ;
struct TYPE_3__ {int ilf_boffset; int ilf_len; int ilf_blkno; int ilf_ino; int ilf_type; } ;
struct xfs_inode_log_item {TYPE_1__ ili_format; int ili_item; struct xfs_inode* ili_inode; } ;
struct TYPE_4__ {int im_boffset; int im_len; int im_blkno; } ;
struct xfs_inode {TYPE_2__ i_imap; int i_ino; struct xfs_inode_log_item* i_itemp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xfs_inode_log_item* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_mount*,int *,int ,int *) ;

void
FUNC_3(
 struct xfs_inode *VAR_4,
 struct xfs_mount *VAR_5)
{
 struct xfs_inode_log_item *VAR_6;

 FUNC_0(VAR_4->i_itemp == ((void*)0));
 VAR_6 = VAR_4->i_itemp = FUNC_1(VAR_2, VAR_0);

 VAR_6->ili_inode = VAR_4;
 FUNC_2(VAR_5, &VAR_6->ili_item, VAR_1,
      &VAR_3);
 VAR_6->ili_format.ilf_type = VAR_1;
 VAR_6->ili_format.ilf_ino = VAR_4->i_ino;
 VAR_6->ili_format.ilf_blkno = VAR_4->i_imap.im_blkno;
 VAR_6->ili_format.ilf_len = VAR_4->i_imap.im_len;
 VAR_6->ili_format.ilf_boffset = VAR_4->i_imap.im_boffset;
}
