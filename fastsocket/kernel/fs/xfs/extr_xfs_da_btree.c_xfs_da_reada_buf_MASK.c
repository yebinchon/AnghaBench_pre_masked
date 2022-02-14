
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_trans_t ;
typedef int xfs_inode_t ;
typedef int xfs_daddr_t ;
typedef int xfs_dablk_t ;
typedef int inst_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int*,int *,int,int,int *) ;

xfs_daddr_t
FUNC_1(
 xfs_trans_t *VAR_1,
 xfs_inode_t *VAR_2,
 xfs_dablk_t VAR_3,
 int VAR_4)
{
 xfs_daddr_t VAR_5;

 VAR_5 = -1;
 if (FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5, ((void*)0), VAR_4, 3,
   (inst_t *)VAR_0))
  return -1;
 else
  return VAR_5;
}
