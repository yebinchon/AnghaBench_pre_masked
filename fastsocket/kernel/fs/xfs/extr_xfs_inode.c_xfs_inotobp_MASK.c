
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
typedef int xfs_ino_t ;
typedef int xfs_dinode_t ;
typedef int xfs_buf_t ;
typedef int uint ;
struct xfs_imap {int im_boffset; scalar_t__ im_blkno; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ,struct xfs_imap*,int ) ;
 int FUNC_2 (int *,int *,struct xfs_imap*,int **,int ,int ) ;

int
FUNC_3(
 xfs_mount_t *VAR_1,
 xfs_trans_t *VAR_2,
 xfs_ino_t VAR_3,
 xfs_dinode_t **VAR_4,
 xfs_buf_t **VAR_5,
 int *VAR_6,
 uint VAR_7)
{
 struct xfs_imap VAR_8;
 xfs_buf_t *VAR_9;
 int VAR_10;

 VAR_8.im_blkno = 0;
 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_8, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_1, VAR_2, &VAR_8, &VAR_9, VAR_0, VAR_7);
 if (VAR_10)
  return VAR_10;

 *VAR_4 = (xfs_dinode_t *)FUNC_0(VAR_9, VAR_8.im_boffset);
 *VAR_5 = VAR_9;
 *VAR_6 = VAR_8.im_boffset;
 return 0;
}
