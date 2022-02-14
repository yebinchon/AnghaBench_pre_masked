
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_bmdr_rec_t ;
typedef int xfs_bmdr_ptr_t ;
typedef int xfs_bmdr_key_t ;
typedef int xfs_bmdr_block_t ;
struct xfs_mount {int dummy; } ;



int
FUNC_0(
 struct xfs_mount *VAR_0,
 int VAR_1,
 int VAR_2)
{
 VAR_1 -= sizeof(xfs_bmdr_block_t);

 if (VAR_2)
  return VAR_1 / sizeof(xfs_bmdr_rec_t);
 return VAR_1 / (sizeof(xfs_bmdr_key_t) + sizeof(xfs_bmdr_ptr_t));
}
