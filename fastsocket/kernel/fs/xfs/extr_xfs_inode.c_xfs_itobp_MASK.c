
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_5__ {scalar_t__ im_blkno; int im_boffset; } ;
struct TYPE_4__ {TYPE_3__ i_imap; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef int xfs_dinode_t ;
typedef int xfs_buf_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,TYPE_3__*,int **,int,int ) ;

int
FUNC_3(
 xfs_mount_t *VAR_2,
 xfs_trans_t *VAR_3,
 xfs_inode_t *VAR_4,
 xfs_dinode_t **VAR_5,
 xfs_buf_t **VAR_6,
 uint VAR_7)
{
 xfs_buf_t *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4->i_imap.im_blkno != 0);

 VAR_9 = FUNC_2(VAR_2, VAR_3, &VAR_4->i_imap, &VAR_8, VAR_7, 0);
 if (VAR_9)
  return VAR_9;

 if (!VAR_8) {
  FUNC_0(VAR_7 & VAR_1);
  FUNC_0(VAR_3 == ((void*)0));
  *VAR_6 = ((void*)0);
  return VAR_0;
 }

 *VAR_5 = (xfs_dinode_t *)FUNC_1(VAR_8, VAR_4->i_imap.im_boffset);
 *VAR_6 = VAR_8;
 return 0;
}
