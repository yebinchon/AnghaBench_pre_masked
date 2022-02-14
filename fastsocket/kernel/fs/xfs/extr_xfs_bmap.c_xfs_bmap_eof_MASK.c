
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_inode_t ;
struct TYPE_4__ {int if_flags; int if_bytes; } ;
typedef TYPE_1__ xfs_ifork_t ;
typedef scalar_t__ xfs_fsblock_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef int xfs_extnum_t ;
typedef int xfs_bmbt_rec_t ;
typedef int xfs_bmbt_rec_host_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,int *,int) ;

int
FUNC_6(
 xfs_inode_t *VAR_2,
 xfs_fileoff_t VAR_3,
 int VAR_4,
 int *VAR_5)
{
 xfs_fsblock_t VAR_6;
 int VAR_7;
 xfs_ifork_t *VAR_8;
 xfs_bmbt_rec_host_t *VAR_9;
 xfs_extnum_t VAR_10;
 xfs_fileoff_t VAR_11;

 FUNC_0(VAR_4 == VAR_0);
 VAR_8 = FUNC_1(VAR_2, VAR_4);
 if (!(VAR_8->if_flags & VAR_1) &&
     (VAR_7 = FUNC_5(((void*)0), VAR_2, VAR_4)))
  return VAR_7;
 VAR_10 = VAR_8->if_bytes / (uint)sizeof(xfs_bmbt_rec_t);
 if (VAR_10 == 0) {
  *VAR_5 = 1;
  return 0;
 }



 VAR_9 = FUNC_4(VAR_8, VAR_10 - 1);
 VAR_11 = FUNC_3(VAR_9);
 VAR_6 = FUNC_2(VAR_9);
 *VAR_5 = VAR_3 >= VAR_11 + VAR_6;
 return 0;
}
