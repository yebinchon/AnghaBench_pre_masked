
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_off_t ;
typedef int xfs_inode_t ;
struct TYPE_2__ {int i_mapping; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;

void
FUNC_2(
 xfs_inode_t *VAR_1,
 xfs_off_t VAR_2,
 xfs_off_t VAR_3,
 int VAR_4)
{

 VAR_3 &= ~(VAR_0 - 1);
 FUNC_1(FUNC_0(VAR_1)->i_mapping, VAR_2, VAR_3 - 1);
}
